#![cfg_attr(target_os = "windows", windows_subsystem = "windows")]
// Separate executable permits updates while the track viewer remains open.
include!("viewer.rs");
