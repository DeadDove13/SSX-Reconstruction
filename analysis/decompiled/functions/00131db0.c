/* Ghidra pseudocode. PS2 address: 00131db0. Not validated source. */

void FUN_00131db0(undefined4 *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x10) == 0) {
    *param_1 = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10) = *(undefined4 *)(param_2 + 0x10);
    return;
  }
  param_1[1] = *(undefined4 *)(param_2 + 0x10);
  return;
}

