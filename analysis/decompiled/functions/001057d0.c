/* Ghidra pseudocode. PS2 address: 001057d0. Not validated source. */

void FUN_001057d0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x6cf4) == 0) {
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  else {
    FUN_0014c020(0x3f800000);
    iVar1 = *(int *)(param_1 + 0x6cf8);
  }
  if (iVar1 != 0) {
    FUN_0014c020(0x3f800000);
    return;
  }
  return;
}

