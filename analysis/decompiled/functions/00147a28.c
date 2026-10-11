/* Ghidra pseudocode. PS2 address: 00147a28. Not validated source. */

void FUN_00147a28(int param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x200) == 0) {
    iVar3 = *(int *)(*(int *)(param_1 + 0x224) + 8);
    if (*(char *)(iVar3 + 0x10) == '\0') {
      fVar4 = *(float *)(param_1 + 0x10);
    }
    else if (*(char *)(iVar3 + 0x12) == '\0') {
      fVar4 = *(float *)(param_1 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x1e4);
      if (iVar3 < 1) {
        fVar4 = *(float *)(param_1 + 0x10);
      }
      else {
        pfVar2 = (float *)(param_1 + 0x1e8);
        do {
          pfVar1 = pfVar2 + 0xf;
          iVar3 = iVar3 + -1;
          fVar4 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          iVar5 = (int)((float)(int)((*(uint *)(*(int *)((int)*pfVar1 + 8) + 0xc) >> 7 & 0xff) - 1)
                       - fVar4);
          if (iVar5 <= param_2) {
            param_2 = iVar5;
          }
        } while (iVar3 != 0);
        fVar4 = *(float *)(param_1 + 0x10);
      }
    }
  }
  else {
    fVar4 = *(float *)(param_1 + 0x10);
  }
  if (fVar4 < 0.0) {
    fVar4 = -fVar4;
  }
  *(float *)(param_1 + 0xc) =
       (1.0 - *(float *)(param_1 + 8)) * ((fVar4 * 30.0) / (float)(param_2 * 0x3c));
  return;
}

