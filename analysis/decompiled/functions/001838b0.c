/* Ghidra pseudocode. PS2 address: 001838b0. Not validated source. */

void FUN_001838b0(int param_1)

{
  TerminateThread(*(undefined4 *)(param_1 + 0x4000));
  DeleteThread(*(undefined4 *)(param_1 + 0x4000));
  DeleteSema(*(undefined4 *)(param_1 + 0x4004));
  return;
}

