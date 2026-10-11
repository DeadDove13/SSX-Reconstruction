/* Ghidra pseudocode. PS2 address: 0019f508. Not validated source. */

void FUN_0019f508(undefined8 param_1,ulong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x50) = &DAT_002b52b0;
  FUN_0012efd8(iVar1 + 0x80,2);
  FUN_0019d0f8(iVar1 + 0x18,0);
  if ((param_2 & 1) != 0) {
    FUN_00103778(param_1);
    return;
  }
  return;
}

