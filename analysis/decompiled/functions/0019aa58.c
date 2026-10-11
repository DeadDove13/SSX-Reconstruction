/* Ghidra pseudocode. PS2 address: 0019aa58. Not validated source. */

void FUN_0019aa58(int param_1)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  iVar4 = *(int *)(param_1 + 0x141c);
  fVar6 = *(float *)(param_1 + 0x1408);
  if ((0x7f < iVar4) || (piVar2 = (int *)(param_1 + iVar4 * 4), *piVar2 == 0)) {
    return;
  }
  uVar9 = 0x3f800000;
  fVar8 = 2.0;
  iVar3 = *(int *)(param_1 + 0x1420);
  do {
    fVar7 = *(float *)(param_1 + 0x1404);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1424) != 0) {
        fVar5 = *(float *)(param_1 + 0x140c) - (float)piVar2[0x480];
        goto LAB_0019ab30;
      }
      if (iVar4 != 0) {
        fVar5 = *(float *)(param_1 + 0x142c);
        goto LAB_0019ab30;
      }
      psVar1 = (short *)*piVar2;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x140c) * 0.5 - (float)piVar2[0x480] * 0.5;
LAB_0019ab30:
      fVar7 = fVar7 + fVar5;
      psVar1 = (short *)*piVar2;
    }
    if (*psVar1 == 0) {
      fVar7 = *(float *)(param_1 + 0x1414);
    }
    else {
      if (*(int *)(param_1 + 0x1428) != 0) {
        DAT_0028ad34 = 0;
        DAT_0028ad38 = 0;
        DAT_0028ad3c = 0;
        DAT_0028ad30 = uVar9;
        FUN_001a1d88(fVar7 + fVar8,fVar6 + fVar8,*(undefined4 *)(param_1 + 0x1418),
                     *(undefined4 *)(param_1 + 0x1400));
      }
      FUN_00176e38(0x28ad30,param_1 + 0x1430);
      FUN_001a1d88(fVar7,fVar6,*(undefined4 *)(param_1 + 0x1418),*(undefined4 *)(param_1 + 0x1400),
                   *piVar2);
      if (iVar4 == *(int *)(param_1 + 0x141c)) {
        *(int *)(param_1 + 0x1440) = (int)fVar7;
        *(int *)(param_1 + 0x1444) = (int)fVar6;
        fVar7 = *(float *)(param_1 + 0x1414);
      }
      else {
        fVar7 = *(float *)(param_1 + 0x1414);
      }
    }
    iVar4 = iVar4 + 1;
    piVar2 = piVar2 + 1;
    fVar6 = fVar6 + fVar7;
    if (0x7f < iVar4) {
      return;
    }
    if (*piVar2 == 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x1420);
  } while( true );
}

