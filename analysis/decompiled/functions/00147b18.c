/* Ghidra pseudocode. PS2 address: 00147b18. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00147bc8) */

int FUN_00147b18(int param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x200) != 0) {
    return 3;
  }
  iVar2 = 1000;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1e4)) {
    pfVar3 = (float *)(param_1 + 0x1e8);
    do {
      iVar1 = *(int *)((int)pfVar3[0xf] + 8);
      iVar5 = (int)*pfVar3;
      if ((int)((*(uint *)(iVar1 + 0xc) >> 7 & 0xff) - iVar5) <= iVar2) {
        iVar2 = (*(uint *)(iVar1 + 0xc) >> 7 & 0xff) - iVar5;
      }
      if ((*(byte *)(iVar1 + 0x10) == 0) && (*(byte *)(iVar1 + 0x12) == 0)) {
        return 3;
      }
      iVar4 = iVar4 + 1;
      if (((int)(uint)*(byte *)(iVar1 + 0x10) <= iVar5) &&
         (iVar5 <= (int)(uint)*(byte *)(iVar1 + 0x12))) {
        return -1;
      }
      pfVar3 = pfVar3 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x1e4));
  }
  if (3 < iVar2) {
    iVar2 = 3;
  }
  return iVar2;
}

