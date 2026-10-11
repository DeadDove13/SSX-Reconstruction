/* Ghidra pseudocode. PS2 address: 0010af80. Not validated source. */

int FUN_0010af80(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x348);
  if (iVar1 < 0) {
    iVar1 = (int)(*(float *)(*(int *)(DAT_002859e4 + 0x14) + 0x14) * 100.0);
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}

