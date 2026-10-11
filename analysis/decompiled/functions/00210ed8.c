/* Ghidra pseudocode. PS2 address: 00210ed8. Not validated source. */

void FUN_00210ed8(int param_1,long param_2)

{
  *(int *)(param_1 + 4) = (int)param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xae) = DAT_002c5830;
    *(undefined4 *)(param_1 + 0x10) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0x16;
  *(undefined4 *)(param_1 + 0xae) = DAT_002c5838;
  *(undefined4 *)(param_1 + 0x10) = 4;
  return;
}

