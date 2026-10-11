/* Ghidra pseudocode. PS2 address: 0020a818. Not validated source. */

void FUN_0020a818(int param_1,int param_2)

{
  if (*(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344)) != 0) {
    FUN_0020a010();
    return;
  }
  return;
}

