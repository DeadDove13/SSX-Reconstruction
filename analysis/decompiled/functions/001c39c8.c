/* Ghidra pseudocode. PS2 address: 001c39c8. Not validated source. */

void FUN_001c39c8(int param_1)

{
  if (*(int *)(param_1 + 0x280) == 1) {
    *(undefined4 *)(param_1 + 0x280) = 2;
    iSignalSema(*(undefined4 *)(param_1 + 0x2a8));
    return;
  }
  if (*(int *)(param_1 + 0x280) == 3) {
    *(undefined4 *)(param_1 + 0x280) = 4;
  }
  return;
}

