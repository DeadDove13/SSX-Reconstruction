/* Ghidra pseudocode. PS2 address: 00126b10. Not validated source. */

void FUN_00126b10(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if ((-1 < *(int *)(iVar1 + 0x2c)) && (param_1 != 0)) {
    (**(code **)(*(int *)(iVar1 + 8) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 8),3);
  }
  return;
}

