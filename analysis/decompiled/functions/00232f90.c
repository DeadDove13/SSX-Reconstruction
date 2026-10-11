/* Ghidra pseudocode. PS2 address: 00232f90. Not validated source. */

void FUN_00232f90(int param_1,int param_2,int param_3)

{
  *(float *)(param_1 + 0x10) = (float)param_2 / (float)param_3;
  if (0.49 < (float)param_2 / (float)param_3) {
    *(undefined4 *)(param_1 + 0x10) = 0x3efae148;
  }
  if (*(float *)(param_1 + 0x14) < *(float *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x18) = 0x3dcccccd;
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xbdcccccd;
  return;
}

