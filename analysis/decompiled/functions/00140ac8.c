/* Ghidra pseudocode. PS2 address: 00140ac8. Not validated source. */

void FUN_00140ac8(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x16c) - 3U < 2) {
    *(undefined4 *)(param_1 + 8) = 0x42ce0000;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0x42200000;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

