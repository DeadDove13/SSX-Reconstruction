/* Ghidra pseudocode. PS2 address: 0011f940. Not validated source. */

void FUN_0011f940(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [4];
  undefined1 auStack_70 [4];
  int aiStack_6c [3];
  
  piVar5 = (int *)param_1;
  iVar2 = FUN_00189b78(DAT_002859e4,piVar5[0x230]);
  iVar1 = *piVar5;
  fVar7 = *(float *)(iVar1 + piVar5[0x230] * 0x10 + 0x30) - *(float *)(iVar1 + 0x2e0);
  fVar6 = fVar7 * DAT_002c19a4 + 0.5;
  fVar8 = (float)(int)fVar6;
  if (fVar6 < fVar8) {
    fVar8 = fVar8 - 1.0;
  }
  fVar7 = fVar7 - fVar8 * DAT_002c19a8;
  if (DAT_002c19ac < ABS(fVar7)) {
    fVar6 = (float)FUN_0011f008(param_1,iVar1 + 0x2d0);
    if (*(float *)(*piVar5 + 0xe0) < *(float *)(iVar2 + 0xe0)) {
      FUN_00121a60(param_1,param_2);
      goto LAB_0011fb6c;
    }
  }
  else {
    fVar8 = *(float *)(iVar1 + piVar5[0x230] * 0x10 + 0x2c);
    fVar6 = DAT_002c19ac;
    if ((fVar8 != 0.0) && (fVar6 = (float)FUN_00218510(150.0 / fVar8), fVar8 < 0.0)) {
      fVar6 = fVar6 + DAT_002c19b0;
    }
    if ((ABS(fVar7) <= fVar6) && (*(float *)(iVar2 + 0xe0) < *(float *)(*piVar5 + 0xe0))) {
      if (0.0 < fVar7) {
        fVar6 = fVar7 - fVar6;
      }
      else {
        fVar6 = fVar6 - fVar7;
      }
      FUN_00218128(fVar6,&fStack_80,&fStack_7c);
      iVar1 = *piVar5;
      fVar6 = *(float *)(iVar1 + 0x2d0) - *(float *)(iVar1 + 0xc0);
      fVar7 = *(float *)(iVar1 + 0x2d4) - *(float *)(iVar1 + 0xc4);
      fStack_90 = (*(float *)(iVar1 + 0xc0) + fVar6 * fStack_7c) - fVar7 * fStack_80;
      fStack_8c = *(float *)(iVar1 + 0xc4) + fVar6 * fStack_80 + fVar7 * fStack_7c;
      uStack_88 = *(undefined4 *)(iVar1 + 0x2d8);
      uStack_84 = 0x3f800000;
      fVar6 = (float)FUN_0011f008(param_1,&fStack_90);
      FUN_00121a60(param_1,param_2);
      goto LAB_0011fb6c;
    }
    fVar6 = (float)FUN_0011f008(param_1,*piVar5 + 0x2d0);
  }
  FUN_001219d8(param_1,param_2);
LAB_0011fb6c:
  aiStack_6c[0] = 0;
  *(uint *)param_2 = *(uint *)param_2 & 0xffffc0ff | ((int)(fVar6 * 31.0) & 0x3fU) << 8;
  lVar3 = FUN_00120cf0(param_1,piVar5 + 0x226,auStack_78,auStack_74,auStack_70);
  if (lVar3 == 0) {
    lVar3 = FUN_001211a8(param_1,aiStack_6c);
    if (lVar3 == 0) {
      *(undefined8 *)(piVar5 + 0x234) = DAT_00277ba8;
      uVar4 = 1;
    }
    else {
      if (aiStack_6c[0] == 0) {
        return;
      }
      uVar4 = 3;
      *(undefined8 *)(piVar5 + 0x234) = DAT_00277bb8;
    }
    *(undefined2 *)(piVar5 + 0x233) = uVar4;
  }
  else {
    piVar5[0x230] = -1;
    *(undefined8 *)(piVar5 + 0x234) = DAT_00277ba0;
    *(undefined2 *)(piVar5 + 0x233) = 0;
  }
  return;
}

