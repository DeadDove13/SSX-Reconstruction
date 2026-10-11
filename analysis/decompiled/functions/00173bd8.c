/* Ghidra pseudocode. PS2 address: 00173bd8. Not validated source. */

void FUN_00173bd8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  
  fVar6 = DAT_002c2880;
  uVar11 = 0x3f800000;
  iVar4 = (int)param_2;
  fVar14 = *(float *)(iVar4 + 0x44) * 30.0;
  fVar13 = 11.0;
  fVar12 = (fVar14 * *(float *)(iVar4 + 0x40)) / *(float *)(iVar4 + 0x3c);
  FUN_00173278();
  uStack_120 = DAT_002c4938;
  uStack_11f = DAT_002c4939;
  uStack_110 = DAT_002c4940;
  uStack_10f = DAT_002c4941;
  iVar1 = FUN_001a0840(uVar11,param_3,&uStack_120,0);
  iVar5 = (int)((float)iVar1 * fVar6);
  iVar1 = FUN_001a0840(uVar11,param_3,&uStack_110,0);
  iStack_e0 = (int)((float)iVar1 * fVar6);
  iVar1 = (int)param_4;
  if (*(int *)(iVar4 + 0xc) != 0) {
    iVar8 = (int)fVar12;
    uStack_fc = 0x3f400000;
    uStack_f8 = 0x3f400000;
    uStack_100 = uVar11;
    uStack_f4 = uVar11;
    FUN_00172e10(param_1,param_2,param_3,param_4,param_5 + 1,&uStack_100,&uStack_120,0);
    uStack_f8 = 0x3f400000;
    uStack_fc = 0x3f400000;
    uStack_100 = uVar11;
    uStack_f4 = uVar11;
    FUN_00172e10(param_1,param_2,param_3,iVar1 + 0xc + iVar8 + iVar5,param_5 + 1,&uStack_100,
                 &uStack_110,0);
  }
  if (*(int *)(iVar4 + 0x88) != 0) {
    fVar6 = 0.0;
    iVar8 = iVar1 + 0x12 + (int)fVar14 + iVar5 + iStack_e0;
    if (*(float **)(iVar4 + 0x30) != (float *)0x0) {
      fVar6 = **(float **)(iVar4 + 0x30);
    }
    if (*(float **)(iVar4 + 0x2c) == (float *)0x0) {
      fVar6 = fVar6 + 0.0;
      fVar9 = *(float *)(iVar4 + 0x40);
    }
    else {
      fVar6 = fVar6 + **(float **)(iVar4 + 0x2c);
      fVar9 = *(float *)(iVar4 + 0x40);
    }
    FUN_0025b630(&uStack_100,0x2c4948,(int)fVar6,(int)fVar9);
    uStack_f0 = 0x3f800000;
    uStack_e8 = 0x3f400000;
    uStack_e4 = 0x3f800000;
    uStack_ec = 0x3f400000;
    FUN_00172e10(param_1,param_2,param_3,iVar8,param_5 + 1,&uStack_f0,&uStack_100,0);
  }
  param_5 = param_5 + 1;
  iVar5 = iVar1 + 6 + iVar5;
  iVar1 = iVar4 + 0x48;
  iVar8 = 1;
  FUN_00173010(param_2,iVar5,param_5,(int)(fVar12 + 1.0),(int)fVar13,iVar1);
  do {
    fVar6 = (float)iVar8;
    iVar10 = (int)((float)param_5 + fVar6);
    iVar7 = (int)(fVar13 - (fVar6 + fVar6));
    FUN_00173010(param_2,iVar5 - iVar8,iVar10,1,iVar7,iVar1);
    FUN_00173010(param_2,iVar5 - iVar8,iVar10,1,iVar7,iVar4 + 0x68);
    iVar2 = iVar5 + iVar8;
    iVar8 = iVar8 + 1;
    FUN_00173010(param_2,(int)((float)iVar2 + fVar12),iVar10,1,iVar7,iVar1);
  } while (iVar8 < 4);
  fVar6 = 0.0;
  iVar8 = (int)(fVar12 / *(float *)(iVar4 + 0x44));
  iVar1 = 0;
  if (0 < iVar8) {
    iVar2 = (int)fVar13;
    do {
      fVar12 = (float)iVar1;
      iVar1 = iVar1 + 2;
      FUN_00173010(param_2,(int)((float)iVar5 + fVar12 * *(float *)(iVar4 + 0x44)),param_5,1,iVar2,
                   iVar4 + 0x58);
    } while (iVar1 < iVar8);
  }
  if (*(float **)(iVar4 + 0x30) == (float *)0x0) {
    pfVar3 = *(float **)(iVar4 + 0x2c);
  }
  else {
    fVar6 = (fVar14 * **(float **)(iVar4 + 0x30)) / *(float *)(iVar4 + 0x3c) - 1.0;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    FUN_00173010(param_2,iVar5 + 1,param_5,(int)fVar6,(int)fVar13,iVar4 + 0x68);
    pfVar3 = *(float **)(iVar4 + 0x2c);
  }
  if (pfVar3 != (float *)0x0) {
    fVar12 = (fVar14 * *pfVar3) / *(float *)(iVar4 + 0x3c);
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    FUN_00173010(param_2,(int)((float)(iVar5 + 1) + fVar6),param_5,(int)fVar12,(int)fVar13,
                 iVar4 + 0x78);
  }
  return;
}

