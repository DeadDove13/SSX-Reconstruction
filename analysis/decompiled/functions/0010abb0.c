/* Ghidra pseudocode. PS2 address: 0010abb0. Not validated source. */

void FUN_0010abb0(undefined8 param_1)

{
  undefined4 uVar1;
  
  if ((DAT_0027ba88 != 3) && (DAT_0027ba88 != 5)) {
    return;
  }
  uVar1 = FUN_00136c88((int)param_1 + 0x8370);
  FUN_00107cb0(uVar1,param_1);
  return;
}

