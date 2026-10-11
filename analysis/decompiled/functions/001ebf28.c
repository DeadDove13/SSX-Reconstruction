/* Ghidra pseudocode. PS2 address: 001ebf28. Not validated source. */

void FUN_001ebf28(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  float fVar5;
  
  fVar5 = *param_2;
  if (fVar5 < 0.0) {
    if (*(char *)(*(int *)(param_1 + 0x18) + 0x2c) == '\x01') {
      iVar2 = *(int *)(param_1 + 0x18);
      fVar5 = DAT_002c3894;
      goto LAB_001ebf7c;
    }
    fVar5 = -fVar5;
  }
  iVar2 = *(int *)(param_1 + 0x18);
LAB_001ebf7c:
  lVar4 = 0;
  iVar3 = *(int *)(param_1 + 0x2c);
  if (0 < *(short *)(iVar2 + 0x28)) {
    do {
      lVar4 = (long)((int)lVar4 + 1);
      FUN_001ebb68(fVar5,iVar3,*(undefined4 *)(param_1 + 0x1c));
      iVar3 = iVar3 + 0x1c;
    } while (lVar4 < *(short *)(*(int *)(param_1 + 0x18) + 0x28));
  }
  iVar2 = *(int *)(param_1 + 0x18);
  lVar4 = (long)*(short *)(iVar2 + 0x2a);
  if (0 < lVar4) {
    pfVar1 = (float *)(*(int *)(param_1 + 0x24) + 0x14);
    do {
      lVar4 = (long)((int)lVar4 + -1);
      *pfVar1 = *pfVar1 * fVar5;
      pfVar1[1] = pfVar1[1] * fVar5;
      pfVar1[2] = pfVar1[2] * fVar5;
      pfVar1 = pfVar1 + 8;
    } while (lVar4 != 0);
  }
  lVar4 = 0;
  if ('\0' < *(char *)(iVar2 + 0x2f)) {
    pfVar1 = *(float **)(param_1 + 0x28);
    do {
      lVar4 = (long)((int)lVar4 + 1);
      *pfVar1 = *pfVar1 * fVar5;
      pfVar1[1] = pfVar1[1] * fVar5;
      pfVar1[2] = pfVar1[2] * fVar5;
      pfVar1 = pfVar1 + 4;
    } while (lVar4 < *(char *)(iVar2 + 0x2f));
  }
  return;
}

