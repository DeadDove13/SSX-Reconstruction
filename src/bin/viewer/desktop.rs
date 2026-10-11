//! Window branding and input-device cursor selection.
use bevy::{
    input::{InputSystems, gamepad::GamepadEvent},
    prelude::*,
    window::{CursorOptions, PrimaryWindow},
};

pub fn plugin(app: &mut App) {
    app.add_systems(PreUpdate, cursor.after(InputSystems))
        .add_systems(Update, window_icon);
}

fn cursor(
    mut gamepads: MessageReader<GamepadEvent>,
    mut moves: MessageReader<CursorMoved>,
    keys: Res<ButtonInput<KeyCode>>,
    buttons: Res<ButtonInput<MouseButton>>,
    mut windows: Query<(&Window, &mut CursorOptions), With<PrimaryWindow>>,
) {
    let controller = gamepads.read().fold(false, |active, event| {
        active
            || match event {
                GamepadEvent::Button(e) => e.state.is_pressed() || e.value > 0.15,
                GamepadEvent::Axis(e) => e.value.abs() > 0.2,
                GamepadEvent::Connection(_) => false,
            }
    });
    let mouse = moves.read().fold(false, |active, e| {
        active || e.delta.is_none_or(|d| d.length_squared() > 0.)
    });
    let desktop = mouse
        || keys.get_just_pressed().next().is_some()
        || buttons.get_just_pressed().next().is_some();
    for (window, mut options) in &mut windows {
        // Desktop input wins when both device types act in the same frame.
        if desktop || !window.focused {
            options.visible = true;
        } else if controller {
            options.visible = false;
        }
    }
}

#[derive(Resource)]
struct IconApplied;
fn window_icon(world: &mut World) {
    if world.contains_resource::<IconApplied>() {
        return;
    }
    let Some(entity) = world
        .query_filtered::<Entity, With<PrimaryWindow>>()
        .iter(world)
        .next()
    else {
        return;
    };
    let applied = bevy::winit::WINIT_WINDOWS.with_borrow(|windows| {
        let Some(window) = windows.get_window(entity) else {
            return false;
        };
        let icon = winit::window::Icon::from_rgba(
            include_bytes!("../../../assets/branding/window-icon.rgba").to_vec(),
            128,
            128,
        )
        .expect("Invalid embedded window icon");
        window.set_window_icon(Some(icon));
        true
    });
    if applied {
        world.insert_resource(IconApplied);
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use bevy::input::{
        ButtonState,
        gamepad::{GamepadAxisChangedEvent, GamepadButtonChangedEvent},
    };
    #[test]
    fn cursor_tracks_input_and_ignores_stick_noise() {
        let mut app = App::new();
        app.add_message::<GamepadEvent>()
            .add_message::<CursorMoved>()
            .init_resource::<ButtonInput<KeyCode>>()
            .init_resource::<ButtonInput<MouseButton>>()
            .add_systems(Update, cursor);
        let window = app
            .world_mut()
            .spawn((
                Window {
                    focused: true,
                    ..default()
                },
                PrimaryWindow,
                CursorOptions::default(),
            ))
            .id();
        let visible = |app: &App| app.world().get::<CursorOptions>(window).unwrap().visible;
        let stick = |value| {
            GamepadEvent::Axis(GamepadAxisChangedEvent::new(
                Entity::PLACEHOLDER,
                GamepadAxis::LeftStickX,
                value,
            ))
        };
        app.world_mut().write_message(stick(0.8));
        app.update();
        assert!(!visible(&app));
        app.update();
        assert!(!visible(&app));
        app.world_mut().write_message(CursorMoved {
            window,
            position: Vec2::ONE,
            delta: None,
        });
        app.update();
        assert!(visible(&app));
        app.world_mut().write_message(stick(0.01));
        app.update();
        assert!(visible(&app));
        app.world_mut().write_message(stick(0.8));
        app.update();
        assert!(!visible(&app));
        app.world_mut()
            .resource_mut::<ButtonInput<KeyCode>>()
            .press(KeyCode::KeyK);
        app.update();
        assert!(visible(&app));
        app.world_mut()
            .resource_mut::<ButtonInput<KeyCode>>()
            .clear();
        app.world_mut()
            .write_message(GamepadEvent::Button(GamepadButtonChangedEvent::new(
                Entity::PLACEHOLDER,
                GamepadButton::South,
                ButtonState::Pressed,
                1.,
            )));
        app.update();
        assert!(!visible(&app));
        app.world_mut()
            .resource_mut::<ButtonInput<MouseButton>>()
            .press(MouseButton::Left);
        app.update();
        assert!(visible(&app));
    }
}
