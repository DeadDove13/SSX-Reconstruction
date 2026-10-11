/* Ghidra pseudocode. PS2 address: 001ea840. Not validated source. */

void FUN_001ea840(int param_1,int param_2)

{
  char cVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  cVar1 = *(char *)(param_2 + 0x1c);
  lVar6 = (long)cVar1;
  fVar11 = *(float *)(param_2 + 8);
  if (*(int *)(param_2 + 0x18) == -1) {
    if (*(int *)(param_1 + 0x218) == 0) {
      *(float *)(param_1 + 0x224) = fVar11;
      iVar3 = *(int *)(param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(param_2 + 0x1c4);
      *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_2 + 0x1c8);
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_2 + 0x1cc);
      if (iVar3 != 0) {
        pfVar2 = (float *)(param_2 + 0xc4);
        if (0 < lVar6) {
          pfVar4 = (float *)(param_1 + 0x94);
          do {
            lVar6 = (long)((int)lVar6 + -1);
            pfVar4[-2] = pfVar2[-2] * *(float *)(param_1 + 0x240);
            pfVar4[-1] = pfVar2[-1] * *(float *)(param_1 + 0x244);
            fVar11 = *pfVar2;
            pfVar2 = pfVar2 + 3;
            *pfVar4 = fVar11 * *(float *)(param_1 + 0x248);
            pfVar4 = pfVar4 + 3;
          } while (lVar6 != 0);
        }
        *(undefined4 *)(param_1 + 0x23c) = 1;
      }
      FUN_0023bac0(param_1 + 8,param_2 + 0x38,cVar1 * 6);
      iVar3 = *(int *)(param_1 + 0x218);
    }
    else {
      fVar9 = *(float *)(param_1 + 0x224);
      fVar7 = fVar11 + fVar9;
      iVar3 = *(int *)(param_2 + 0x2c);
      fVar8 = 1.0 / fVar7;
      *(float *)(param_1 + 0x224) = fVar7;
      fVar9 = fVar9 * fVar8;
      fVar11 = fVar11 * fVar8;
      if ((iVar3 != 0) && (*(undefined4 *)(param_1 + 0x23c) = 1, 0 < lVar6)) {
        pfVar2 = (float *)(param_1 + 0x8c);
        pfVar4 = (float *)(param_2 + 0xbc);
        lVar5 = lVar6;
        do {
          fVar8 = *pfVar4;
          lVar5 = (long)((int)lVar5 + -1);
          fVar7 = pfVar4[1];
          fVar10 = pfVar4[2];
          pfVar4 = pfVar4 + 3;
          *pfVar2 = fVar8 * fVar11 + *pfVar2 * fVar9;
          pfVar2[1] = fVar7 * fVar11 + pfVar2[1] * fVar9;
          pfVar2[2] = fVar10 * fVar11 + pfVar2[2] * fVar9;
          pfVar2 = pfVar2 + 3;
        } while (lVar5 != 0);
      }
      FUN_001ea570(fVar11,param_1 + 8,param_2 + 0x38,lVar6);
      fVar8 = *(float *)(param_2 + 0x1cc);
      fVar7 = *(float *)(param_2 + 0x1c8);
      *(float *)(param_1 + 0x230) =
           *(float *)(param_2 + 0x1c4) * fVar11 + *(float *)(param_1 + 0x230) * fVar9;
      *(float *)(param_1 + 0x238) = fVar8 * fVar11 + *(float *)(param_1 + 0x238) * fVar9;
      *(float *)(param_1 + 0x234) = fVar7 * fVar11 + *(float *)(param_1 + 0x234) * fVar9;
      iVar3 = *(int *)(param_1 + 0x218);
    }
    *(int *)(param_1 + 0x218) = iVar3 + 1;
  }
  else {
    *(int *)(param_1 + 0x220) = *(int *)(param_2 + 0x18);
    *(float *)(param_1 + 0x22c) = fVar11;
    *(int *)(param_1 + 0x228) = (int)cVar1;
    FUN_0023bac0(param_1 + 0x194,param_2 + 0x38,cVar1 * 6);
    *(int *)(param_1 + 0x21c) = *(int *)(param_1 + 0x21c) + 1;
  }
  return;
}

