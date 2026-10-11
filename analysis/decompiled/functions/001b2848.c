/* Ghidra pseudocode. PS2 address: 001b2848. Not validated source. */

void FUN_001b2848(int param_1)

{
  FUN_001ab908();
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x438) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  return;
}

