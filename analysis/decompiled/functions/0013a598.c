/* Ghidra pseudocode. PS2 address: 0013a598. Not validated source. */

void FUN_0013a598(int *param_1)

{
  if (*(int *)(*(int *)(*param_1 + 0x6cf4) + 8) != 2) {
    FUN_0010b340(*param_1,2);
    FUN_0010b330(*param_1,3);
    return;
  }
  return;
}

