/* Ghidra pseudocode. PS2 address: 001838e8. Not validated source. */

void FUN_001838e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4008) = param_2;
  iSignalSema(*(undefined4 *)(param_1 + 0x4004));
  return;
}

