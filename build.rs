use std::{env, fs, path::PathBuf, process::Command};

fn main() {
    println!("cargo:rerun-if-changed=assets/branding/ssx.ico");
    println!("cargo:rerun-if-env-changed=RC");
    if env::var("CARGO_CFG_TARGET_OS").as_deref() != Ok("windows")
        || env::var_os("CARGO_FEATURE_VIEWER").is_none()
    {
        return;
    }
    let compiler = env::var_os("RC").map(PathBuf::from).unwrap_or_else(|| {
        let sdk =
            PathBuf::from(env::var_os("ProgramFiles(x86)").expect("Missing ProgramFiles(x86)"))
                .join("Windows Kits/10/bin");
        let mut versions: Vec<_> = fs::read_dir(sdk)
            .expect("Install the Windows SDK")
            .filter_map(Result::ok)
            .map(|e| e.path().join("x64/rc.exe"))
            .filter(|p| p.is_file())
            .collect();
        versions.sort();
        versions
            .pop()
            .expect("Windows SDK resource compiler is missing")
    });
    let output = PathBuf::from(env::var_os("OUT_DIR").unwrap());
    let icon =
        PathBuf::from(env::var_os("CARGO_MANIFEST_DIR").unwrap()).join("assets/branding/ssx.ico");
    let source = output.join("ssx.rc");
    let resource = output.join("ssx.res");
    fs::write(
        &source,
        format!(
            "1 ICON \"{}\"\n",
            icon.display().to_string().replace('\\', "/")
        ),
    )
    .unwrap();
    let status = Command::new(compiler)
        .args(["/nologo", "/fo"])
        .arg(&resource)
        .arg(&source)
        .status()
        .expect("Cannot start resource compiler");
    assert!(status.success(), "Cannot compile the SSX icon resource");
    println!("cargo:rustc-link-arg-bin=ssx-play={}", resource.display());
    println!("cargo:rustc-link-arg-bin=ssx-bevy={}", resource.display());
}
