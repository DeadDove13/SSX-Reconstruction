/* Ghidra pseudocode. PS2 address: 00136a70. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00136ad8) */

int FUN_00136a70(int param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x20) * DAT_002c1c90;
  if (fVar1 < 0.0) {
    return 0;
  }
  iVar2 = (int)(fVar1 * DAT_002c1c94 + 5.0);
  return iVar2 - iVar2 % 10;
}

