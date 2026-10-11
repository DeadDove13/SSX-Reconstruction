/* Ghidra pseudocode. PS2 address: 001eae80. Not validated source. */

void FUN_001eae80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (&DAT_002cfdf0)[param_1] + 0x7f;
  iVar1 = (&DAT_002cfdf0)[param_1] + 0xfe;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(undefined4 *)(&DAT_00298088 + param_1 * 4) = 0;
  *(int *)(&DAT_002cfe08 + param_1 * 4) = (iVar1 >> 7) << 7;
  return;
}

