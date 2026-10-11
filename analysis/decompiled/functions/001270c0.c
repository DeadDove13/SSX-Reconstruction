/* Ghidra pseudocode. PS2 address: 001270c0. Not validated source. */

void FUN_001270c0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((-1 < *(int *)(iVar1 + 0x38)) && (param_1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  return;
}

