/* Ghidra pseudocode. PS2 address: 001eafd8. Not validated source. */

void FUN_001eafd8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x7f;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  iVar1 = (iVar1 >> 7) * 0x80 + 0x80;
  *(int *)(&DAT_00298088 + param_1 * 4) = *(int *)(&DAT_00298088 + param_1 * 4) + iVar1;
  *(int *)(&DAT_002cfe08 + param_1 * 4) = *(int *)(&DAT_002cfe08 + param_1 * 4) + iVar1;
  return;
}

