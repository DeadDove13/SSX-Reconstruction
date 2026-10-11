/* Ghidra pseudocode. PS2 address: 001cb6a0. Not validated source. */

void FUN_001cb6a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  
  piVar6 = (int *)(param_2 + 0x14b8 +
                  *(int *)(param_2 + 0x1474) * 4 + *(int *)(param_2 + 0x1468) * 8);
  iVar1 = *piVar6;
  iVar5 = param_2 + *(int *)(param_2 + 0x1468) * 0x1400 + 0x14d0 +
          *(int *)(param_2 + 0x1474) * 0xa00;
  if (iVar1 < 10) {
    iVar2 = iVar1 << 8;
    *piVar6 = iVar1 + 1;
  }
  else {
    fVar9 = 0.0;
    iVar2 = -1;
    iVar4 = 0;
    if (0 < iVar1) {
      pfVar8 = (float *)(iVar5 + 0xc);
      fVar10 = fVar9;
      iVar7 = iVar2;
      do {
        fVar9 = *pfVar8;
        iVar2 = iVar4;
        if (fVar9 <= fVar10) {
          fVar9 = fVar10;
          iVar2 = iVar7;
        }
        iVar4 = iVar4 + 1;
        pfVar8 = pfVar8 + 0x40;
        fVar10 = fVar9;
        iVar7 = iVar2;
      } while (iVar4 < iVar1);
    }
    iVar2 = iVar2 * 0x100;
    if (fVar9 < 0.0) {
      return;
    }
  }
  puVar3 = (undefined4 *)(iVar2 + iVar5);
  puVar3[3] = param_1;
  *puVar3 = param_3;
  return;
}

