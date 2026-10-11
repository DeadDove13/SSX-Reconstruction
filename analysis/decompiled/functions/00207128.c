/* Ghidra pseudocode. PS2 address: 00207128. Not validated source. */

void FUN_00207128(int param_1,undefined1 param_2)

{
  if (*(int *)(param_1 + 0x35f88) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x35f88) + 0x10) = param_2;
  }
  return;
}

