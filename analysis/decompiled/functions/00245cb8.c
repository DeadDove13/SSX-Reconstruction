/* Ghidra pseudocode. PS2 address: 00245cb8. Not validated source. */

void FUN_00245cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [16];
  
  FUN_002459a8(auStack_b0);
  FUN_00245700(auStack_70,param_4,param_3);
  FUN_00245748(auStack_b0,auStack_70);
  FUN_00245748(auStack_90,param_3);
  FUN_00245700(auStack_a0,auStack_90,auStack_b0);
  FUN_00245900(auStack_b0,auStack_b0,param_2);
  FUN_002457c8(param_1,auStack_b0);
  return;
}

