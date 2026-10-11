/* Ghidra pseudocode. PS2 address: 00105828. Not validated source. */

void FUN_00105828(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6cf4) == 0) {
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  else {
    FUN_0014c0f0();
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  if (iVar1 != 0) {
    FUN_0014c0f0();
    return;
  }
  return;
}

