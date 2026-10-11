//! Optional timing probes for the repeatable frame benchmark.
use std::{
    collections::BTreeMap,
    sync::{Mutex, OnceLock},
    time::Instant,
};
static TOTALS: OnceLock<Mutex<BTreeMap<&'static str, (f64, u64)>>> = OnceLock::new();
pub struct Span {
    name: &'static str,
    start: Instant,
}
pub fn span(name: &'static str) -> Option<Span> {
    static ENABLED: OnceLock<bool> = OnceLock::new();
    ENABLED
        .get_or_init(|| std::env::args().any(|a| a == "--perf-test"))
        .then(|| Span {
            name,
            start: Instant::now(),
        })
}
impl Drop for Span {
    fn drop(&mut self) {
        let mut totals = TOTALS.get_or_init(Default::default).lock().unwrap();
        let entry = totals.entry(self.name).or_default();
        entry.0 += self.start.elapsed().as_secs_f64() * 1000.;
        entry.1 += 1;
    }
}
pub fn take() -> BTreeMap<&'static str, (f64, u64)> {
    std::mem::take(&mut *TOTALS.get_or_init(Default::default).lock().unwrap())
}
#[derive(bevy::prelude::Resource, Default)]
pub struct ScheduleSpan(Option<Span>);
#[derive(bevy::prelude::Resource, Default)]
struct StageSpans(BTreeMap<&'static str, Option<Span>>);
pub fn begin_main(mut s: bevy::prelude::ResMut<ScheduleSpan>) {
    s.0 = span("main_schedule");
}
pub fn begin_render(mut s: bevy::prelude::ResMut<ScheduleSpan>) {
    s.0 = span("render_schedule");
}
pub fn end(mut s: bevy::prelude::ResMut<ScheduleSpan>) {
    s.0.take();
}
pub fn plugin(app: &mut bevy::prelude::App) {
    use bevy::prelude::*;
    use bevy::render::{RenderApp, RenderSystems};
    app.init_resource::<ScheduleSpan>()
        .add_systems(First, begin_main)
        .add_systems(Last, end);
    if let Some(render) = app.get_sub_app_mut(RenderApp) {
        render
            .init_resource::<ScheduleSpan>()
            .add_systems(
                bevy::render::Render,
                begin_render.before(RenderSystems::ExtractCommands),
            )
            .add_systems(bevy::render::Render, end.after(RenderSystems::Cleanup));
        render.init_resource::<StageSpans>();
        use RenderSystems::*;
        for (name, previous, set, next) in [
            ("assets", ExtractCommands, PrepareAssets, PrepareMeshes),
            ("meshes", PrepareAssets, PrepareMeshes, CreateViews),
            ("views", Specialize, PrepareViews, Queue),
            ("queue", PrepareViews, Queue, PhaseSort),
            ("prepare", PhaseSort, Prepare, RenderSystems::Render),
            ("draw_present", Prepare, RenderSystems::Render, Cleanup),
        ] {
            render.add_systems(
                bevy::render::Render,
                (move |mut s: ResMut<StageSpans>| {
                    s.0.insert(name, span(name));
                })
                .after(previous)
                .before(set.clone()),
            );
            render.add_systems(
                bevy::render::Render,
                (move |mut s: ResMut<StageSpans>| {
                    s.0.remove(name);
                })
                .after(set)
                .before(next),
            );
        }
    }
}
