/* Ghidra pseudocode. PS2 address: 001989e0. Not validated source. */

void FUN_001989e0(int param_1)

{
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00195ff0();
    FUN_001f9c28(DAT_002c56e8);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xd;
  return;
}

