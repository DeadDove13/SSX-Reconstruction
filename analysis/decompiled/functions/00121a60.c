/* Ghidra pseudocode. PS2 address: 00121a60. Not validated source. */

void FUN_00121a60(int *param_1,uint *param_2)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((float)param_1[0x227] != 1.0) {
    fVar1 = (float)param_1[0x227] / DAT_002c1a74;
  }
  if (*(float *)(*param_1 + 0xe0) < DAT_002c1a78) {
    fVar1 = 1.0;
  }
  *param_2 = *param_2 & 0xfff03fff | ((int)(fVar1 * 31.0) & 0x3fU) << 0xe | 0x10;
  return;
}

