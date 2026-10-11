/* Ghidra pseudocode. PS2 address: 0018fb80. Not validated source. */

void FUN_0018fb80(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(int *)(param_1 + 0x18) = param_2;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 < param_2) {
      *piVar1 = param_2;
    }
    if (*(int *)(param_1 + 0x1c) < **(int **)(param_1 + 0x14)) {
      **(int **)(param_1 + 0x14) = *(int *)(param_1 + 0x1c);
    }
  }
  return;
}

