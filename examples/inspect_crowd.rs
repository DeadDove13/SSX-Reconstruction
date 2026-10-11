fn main() {
    let (l, _) =
        ssx_rust::load_track(std::path::Path::new("extracted/DATA/MODELS/SNOW.BIG")).unwrap();
    for id in [[305, 95], [305, 94], [305, 63]] {
        let i = l.instances.iter().find(|i| i.properties.id == id).unwrap();
        println!(
            "id {:?} prefab {} placement {:?}",
            id, i.prefab, i.transform
        );
        for m in &l.prefabs[i.prefab] {
            println!(
                "mesh {:?} material {} local {:?}",
                m.bounds, m.material, m.transform
            );
        }
    }
}
