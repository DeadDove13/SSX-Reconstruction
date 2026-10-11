/* Ghidra pseudocode. PS2 address: 00234e80. Not validated source. */

int FUN_00234e80(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 8) & 1) != 0) {
    param_2 = FUN_00234e40(param_2 & 0xffff,param_1 + *(int *)(param_1 + 4));
  }
  param_1 = param_1 + *(int *)((uint)*(ushort *)(param_1 + 0xe) * 4 + param_1 + 0x10);
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0xc) <= (int)param_2)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + *(int *)(param_2 * 4 + param_1 + 0x10);
  }
  return param_1;
}

