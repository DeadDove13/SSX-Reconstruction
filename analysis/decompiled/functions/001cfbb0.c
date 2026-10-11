/* Ghidra pseudocode. PS2 address: 001cfbb0. Not validated source. */

void FUN_001cfbb0(int param_1)

{
  if (*(int *)(param_1 + 0x44) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00103710();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

