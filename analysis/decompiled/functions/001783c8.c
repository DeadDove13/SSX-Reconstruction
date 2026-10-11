/* Ghidra pseudocode. PS2 address: 001783c8. Not validated source. */

void FUN_001783c8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  DAT_002c4a00 = (undefined4)param_2;
  if (param_2 == 1) {
    FUN_001ef940(DAT_002c56e8,0);
    return;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      FUN_001ef950(DAT_002c56e8,0);
      return;
    }
  }
  else if (param_2 == 2) {
    uVar1 = FUN_0016f160();
    FUN_001ef8f0(DAT_002c56e8,uVar1,0);
    return;
  }
  return;
}

