/* Ghidra pseudocode. PS2 address: 0019ea48. Not validated source. */

void FUN_0019ea48(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x54) = &DAT_002b53a8;
  if (*(int *)(iVar1 + 0x84) != 0) {
    FUN_00103710();
  }
  FUN_0019d0f8(iVar1 + 0x1c,0);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

