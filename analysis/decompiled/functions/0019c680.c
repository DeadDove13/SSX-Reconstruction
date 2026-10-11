/* Ghidra pseudocode. PS2 address: 0019c680. Not validated source. */

int FUN_0019c680(int *param_1,undefined8 param_2,int *param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float afStack_180 [52];
  
  fVar1 = DAT_002c2a8c;
  pfVar5 = afStack_180;
  iVar9 = *param_1;
  iVar6 = 0;
  iVar4 = 0;
  if (iVar9 < param_4) {
    param_4 = iVar9;
  }
  if (0 < iVar9) {
    fVar11 = 0.0;
    iVar9 = 0;
    piVar8 = param_3;
    do {
      fVar10 = (float)FUN_0019bb78(param_1[1] + iVar9,param_2);
      iVar3 = param_1[1];
      *pfVar5 = fVar10;
      if (fVar10 == fVar11) {
        *pfVar5 = fVar1;
        *piVar8 = iVar3 + iVar9;
        iVar4 = iVar4 + 1;
        piVar8 = piVar8 + 1;
        if (iVar4 == param_4) break;
      }
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 1;
      iVar9 = iVar9 + 0x3c;
    } while (iVar6 < *param_1);
  }
  fVar1 = DAT_002c2a90;
  if (iVar4 < param_4) {
    iVar9 = *param_1;
    iVar6 = iVar4;
    do {
      iVar7 = 1;
      iVar4 = iVar6 + 1;
      iVar3 = 0;
      if (1 < iVar9) {
        pfVar5 = afStack_180;
        fVar11 = afStack_180[0];
        iVar2 = iVar3;
        do {
          pfVar5 = pfVar5 + 1;
          fVar10 = *pfVar5;
          iVar3 = iVar7;
          if (fVar11 <= fVar10) {
            fVar10 = fVar11;
            iVar3 = iVar2;
          }
          iVar7 = iVar7 + 1;
          fVar11 = fVar10;
          iVar2 = iVar3;
        } while (iVar7 < iVar9);
      }
      param_3[iVar6] = iVar3 * 0x3c + param_1[1];
      afStack_180[iVar3] = fVar1;
      iVar6 = iVar4;
    } while (iVar4 < param_4);
  }
  return iVar4;
}

