/* Ghidra pseudocode. PS2 address: 00150460. Not validated source. */

void FUN_00150460(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x16c);
  if (iVar1 == 3) {
    FUN_0014cd18(param_1,0xae,0,5);
    return;
  }
  if (iVar1 == 4) {
    FUN_0014cd18(param_1,0xaf,0,5);
    return;
  }
  FUN_0014cd18(param_1,0x52,0,5);
  return;
}

