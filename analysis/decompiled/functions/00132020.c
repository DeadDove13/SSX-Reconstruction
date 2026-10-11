/* Ghidra pseudocode. PS2 address: 00132020. Not validated source. */

void FUN_00132020(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x28) != 0) {
    FUN_00103710();
  }
  FUN_00131c98(iVar1 + 0x10,2);
  FUN_00131ec8(iVar1 + 4,2);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

