/* Ghidra pseudocode. PS2 address: 001d2f50. Not validated source. */

void FUN_001d2f50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
  }
  else {
    FUN_00103710();
    iVar1 = *(int *)(param_1 + 0xc);
  }
  if (iVar1 != 0) {
    FUN_00103710();
    return;
  }
  return;
}

