/* Ghidra pseudocode. PS2 address: 001a2650. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001a26f4) */

void FUN_001a2650(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 50000) {
    uVar1 = FUN_00234e80(DAT_002852fc,0);
    FUN_0019a8a8(param_2,uVar1);
    return;
  }
  if (-1 < param_1) {
    if (param_1 < 360000) {
      FUN_0019a8f0(param_2,0x2b56e0,(param_1 / 100) / 0x3c,(param_1 / 100) % 0x3c,param_1 % 100);
      return;
    }
    FUN_0019a830(param_2,0x2b56d0);
    return;
  }
  uVar1 = FUN_00234e80(DAT_002852fc,1);
  FUN_0019a8a8(param_2,uVar1);
  return;
}

