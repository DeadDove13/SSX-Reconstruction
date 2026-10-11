/* Ghidra pseudocode. PS2 address: 001a0a88. Not validated source. */

int FUN_001a0a88(float param_1,undefined8 param_2,short *param_3,int *param_4)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int aiStack_80 [4];
  
  piVar5 = aiStack_80;
  if (param_4 != (int *)0x0) {
    piVar5 = param_4;
  }
  *piVar5 = 0;
  iVar4 = (int)param_2;
  fVar7 = *(float *)(iVar4 + 0x18);
  piVar5[1] = 0;
  piVar5[2] = 0;
  fVar7 = param_1 * fVar7;
  piVar5[3] = 0;
  param_1 = param_1 * *(float *)(iVar4 + 0x1c);
  fVar9 = (float)*(int *)(iVar4 + 0x10) * fVar7;
  fVar10 = (float)*(int *)(iVar4 + 0x14) * param_1;
  if (*param_3 != 0) {
    sVar1 = *param_3;
    while( true ) {
      lVar2 = FUN_001a07a8(param_2,sVar1);
      if (lVar2 != 0) {
        iVar4 = (int)lVar2;
        fVar8 = fVar9 + (float)(int)*(char *)(iVar4 + 9) * fVar7;
        fVar6 = (float)(int)fVar8;
        if (fVar8 < fVar6) {
          fVar6 = fVar6 - 1.0;
        }
        iVar3 = *piVar5;
        if ((int)fVar6 <= *piVar5) {
          iVar3 = (int)fVar6;
        }
        *piVar5 = iVar3;
        fVar8 = fVar10 + (float)(int)((int)*(char *)(iVar4 + 10) + (uint)*(byte *)(iVar4 + 3)) *
                         param_1;
        fVar6 = (float)(int)fVar8;
        if (fVar8 < fVar6) {
          fVar6 = fVar6 - 1.0;
        }
        iVar3 = piVar5[1];
        if ((int)fVar6 <= piVar5[1]) {
          iVar3 = (int)fVar6;
        }
        piVar5[1] = iVar3;
        fVar8 = fVar9 + (float)(int)((int)*(char *)(iVar4 + 9) + (uint)*(byte *)(iVar4 + 2)) * fVar7
        ;
        fVar6 = (float)(int)fVar8;
        if (fVar6 < fVar8) {
          fVar6 = fVar6 + 1.0;
        }
        iVar3 = piVar5[2];
        if (piVar5[2] <= (int)fVar6) {
          iVar3 = (int)fVar6;
        }
        piVar5[2] = iVar3;
        fVar8 = fVar10 + (float)(int)*(char *)(iVar4 + 10) * param_1;
        fVar6 = (float)(int)fVar8;
        if (fVar6 < fVar8) {
          fVar6 = fVar6 + 1.0;
        }
        iVar3 = piVar5[3];
        if (piVar5[3] <= (int)fVar6) {
          iVar3 = (int)fVar6;
        }
        piVar5[3] = iVar3;
        fVar9 = fVar9 + (float)(int)*(char *)(iVar4 + 8) * fVar7;
      }
      param_3 = param_3 + 1;
      if (*param_3 == 0) break;
      sVar1 = *param_3;
    }
  }
  iVar4 = piVar5[2];
  piVar5[2] = iVar4 - *piVar5;
  piVar5[3] = piVar5[3] - piVar5[1];
  return iVar4 - *piVar5;
}

