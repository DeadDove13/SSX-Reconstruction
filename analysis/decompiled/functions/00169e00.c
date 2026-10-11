/* Ghidra pseudocode. PS2 address: 00169e00. Not validated source. */

void FUN_00169e00(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_00169d28();
  *(int **)(param_1 + param_3 * 4 + 0x14) = (int *)lVar2;
  if (lVar2 != 0) {
    iVar1 = *(int *)lVar2;
    *(uint *)(iVar1 + 0x13c) = *(uint *)(iVar1 + 0x13c) | 1;
  }
  return;
}

