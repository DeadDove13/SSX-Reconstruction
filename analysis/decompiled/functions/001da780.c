/* Ghidra pseudocode. PS2 address: 001da780. Not validated source. */

void FUN_001da780(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x34) = iVar1 + -1;
  if (iVar1 < 1) {
    FUN_001d9670(param_1,2);
    return;
  }
  return;
}

