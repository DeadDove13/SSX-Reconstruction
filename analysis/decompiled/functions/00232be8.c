/* Ghidra pseudocode. PS2 address: 00232be8. Not validated source. */

void FUN_00232be8(int param_1)

{
  *(code **)(param_1 + 4) = FUN_00232c38;
  *(undefined1 **)(param_1 + 0x18) = &LAB_00232cc8;
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}

