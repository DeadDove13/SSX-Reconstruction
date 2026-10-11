/* Ghidra pseudocode. PS2 address: 00186d20. Not validated source. */

void FUN_00186d20(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_00185f70(iVar1 + 0x28,2);
  FUN_00185f70(iVar1 + 0x1c,2);
  FUN_00185f70(iVar1 + 0x10,2);
  FUN_00185f70(iVar1 + 4,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

