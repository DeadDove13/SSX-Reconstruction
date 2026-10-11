/* Ghidra pseudocode. PS2 address: 001bf350. Not validated source. */

void FUN_001bf350(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  
  iVar9 = (int)param_1;
  if (*(float *)(iVar9 + 100) < 0.0) {
    *(undefined4 *)(iVar9 + 100) = 0x41f00000;
  }
  iVar5 = DAT_002859d4 - *(int *)(iVar9 + 0x60);
  *(int *)(iVar9 + 0x60) = DAT_002859d4;
  if (0 < iVar5) {
    *(float *)(iVar9 + 100) =
         *(float *)(iVar9 + 100) * DAT_002c353c + (60.0 / (float)iVar5) * DAT_002c3540;
  }
  fVar13 = DAT_002c3548;
  if (*(int *)(iVar9 + 0x68) == 0) {
    *(undefined4 *)(iVar9 + 0x6c) = 0x3f800000;
  }
  else {
    fVar11 = *(float *)(iVar9 + 0x6c) * ((*(float *)(iVar9 + 100) - 30.0) * DAT_002c3544 + 1.0);
    bVar1 = DAT_002c3548 <= fVar11;
    *(float *)(iVar9 + 0x6c) = fVar11;
    if ((bVar1) && (fVar13 = fVar11, 4.0 < fVar11)) {
      fVar13 = 4.0;
    }
    *(float *)(iVar9 + 0x6c) = fVar13;
  }
  fVar13 = DAT_002c354c;
  if ((*(int *)(DAT_002859e4 + 0x38) == 0) ||
     (iVar5 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar5 == 0 || 9 < iVar5)) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x24) == 1) {
      fVar13 = *(float *)(*(int *)(iVar9 + 0x24) + 0x60);
      fVar11 = DAT_002c3550;
      if (DAT_002c3550 <= fVar13) {
        fVar11 = fVar13;
      }
    }
    else {
      iVar5 = *(int *)(iVar9 + 0x24);
      if (iVar5 == 0) goto LAB_001bf52c;
      if (*(int *)(iVar9 + 0x298) < 2) {
        fVar11 = *(float *)(iVar5 + 0x60);
      }
      else {
        fVar11 = *(float *)(iVar5 + 100);
      }
    }
  }
  else {
    fVar11 = *(float *)(*(int *)(iVar9 + 0x24) + 0x60);
    if (fVar11 < DAT_002c354c) goto LAB_001bf52c;
  }
  fVar13 = fVar11;
LAB_001bf52c:
  fVar11 = 0.0;
  FUN_0011ecf8(0x295e90,0);
  iVar5 = 0;
  FUN_001cb610(0x2913b0);
  if (0 < *(int *)(iVar9 + 0x298)) {
    iVar10 = iVar9 + 0x90;
    do {
      *(int *)(iVar9 + 0x290) = iVar5;
      FUN_001c0958(0x295e90,iVar10);
      iVar6 = *(int *)(iVar9 + 0x290) * 0x80 + iVar9;
      FUN_00131958(*(undefined4 *)(iVar6 + 0x100),*(undefined4 *)(iVar6 + 0x104),fVar13,0x295e90);
      puVar3 = DAT_00296264;
      iVar6 = *(int *)(iVar9 + 0x290) * 0x80 + iVar9;
      *DAT_00296264 = *(undefined8 *)(iVar6 + 0xc0);
      puVar3[1] = *(undefined8 *)(iVar6 + 200);
      puVar3[2] = *(undefined8 *)(iVar6 + 0xd0);
      puVar3[3] = *(undefined8 *)(iVar6 + 0xd8);
      puVar3[4] = *(undefined8 *)(iVar6 + 0xe0);
      puVar3[5] = *(undefined8 *)(iVar6 + 0xe8);
      puVar3[6] = *(undefined8 *)(iVar6 + 0xf0);
      puVar3[7] = *(undefined8 *)(iVar6 + 0xf8);
      DAT_00292690 = *DAT_00296264;
      DAT_00292698 = DAT_00296264[1];
      DAT_002926a0 = DAT_00296264[2];
      DAT_002926a8 = DAT_00296264[3];
      DAT_002926b0 = DAT_00296264[4];
      DAT_002926b8 = DAT_00296264[5];
      DAT_002926c0 = DAT_00296264[6];
      DAT_002926c8 = DAT_00296264[7];
      DAT_00292770 = 0;
      FUN_00131838(0x295e90);
      FUN_0011ed48(0x295e90,0);
      uVar2 = DAT_002913c4;
      FUN_0011ed18(0x295e90,3);
      FUN_001bf300(param_1);
      FUN_0011ed18(0x295e90,uVar2);
      uVar2 = DAT_002913c4;
      FUN_0011ed18(0x295e90,2);
      FUN_001d6ab0(DAT_002859d0);
      FUN_0011ed18(0x295e90,uVar2);
      fVar12 = *(float *)(iVar9 + *(int *)(iVar9 + 0x290) * 0x80 + 0x108);
      if (fVar11 < fVar12) {
        fVar11 = fVar12;
      }
      iVar5 = iVar5 + 1;
      iVar10 = iVar10 + 0x80;
    } while (iVar5 < *(int *)(iVar9 + 0x298));
  }
  lVar7 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  if (lVar7 == 0) {
    fVar13 = 0.0;
    if ((0.0 <= fVar11) && (fVar13 = fVar11, 1.0 < fVar11)) {
      fVar13 = 1.0;
    }
    fVar11 = 0.0;
    if ((0.0 <= fVar13) && (fVar11 = fVar13, 1.0 < fVar13)) {
      fVar11 = 1.0;
    }
    DAT_002915e8 = FUN_00258848((1.0 - fVar11) * 128.0);
  }
  else {
    FUN_00258848(0x43000000);
    DAT_002915e8 = 0x80;
  }
  uVar14 = 0;
  FUN_001319b0(0,0,(float)DAT_002915f0,(float)DAT_002915f4,0x295e90);
  iVar5 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295e90 + iVar5) = 1;
  *(undefined4 *)(&DAT_00295eb0 + iVar5) = uVar14;
  *(undefined4 *)(&DAT_00295eb4 + iVar5) = uVar14;
  *(undefined4 *)(&DAT_00295eb8 + iVar5) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar5) = 0x43f00000;
  *(undefined4 *)(&DAT_00295ea4 + iVar5) = uVar14;
  *(undefined4 *)(&DAT_00295ea8 + iVar5) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar5),*(undefined4 *)(&DAT_00295e98 + iVar5),
               *(undefined4 *)(&DAT_00295e9c + iVar5),*(undefined4 *)(&DAT_00295ea0 + iVar5),uVar14,
               0x447a0000,uVar14,uVar14,0x2913b0);
  uVar4 = DAT_002c3554;
  uVar2 = DAT_002913c4;
  if (DAT_00285a7c != 0) {
    FUN_0011ed18(0x295e90,0x13);
    FUN_0011ed38(0x295e90,1);
    FUN_0011ed28(uVar4,0x295e90,2,2);
    uStack_c0 = 0x3f800000;
    DAT_0028ad40 = DAT_002c3558;
    uStack_bc = 0x3f800000;
    uStack_b8 = uVar14;
    FUN_00168720(0x28ad30,&uStack_c0);
    uVar8 = FUN_00258948(*(undefined4 *)(iVar9 + 100));
    FUN_001a1260(0x41200000,0x42c80000,*(undefined4 *)(iVar9 + 0x58),0x2b6d00,uVar8);
    FUN_0011ed28(uVar4,0x295e90,1,2);
    FUN_0011ed38(0x295e90,0);
    FUN_0011ed18(0x295e90,uVar2);
  }
  lVar7 = FUN_0018e858(0x28abe0);
  if (lVar7 == 0) {
    iVar9 = *(int *)(iVar9 + 0x2c);
  }
  else {
    FUN_0018ea28(0x28abe0);
    iVar9 = *(int *)(iVar9 + 0x2c);
  }
  if (iVar9 != 0) {
    (**(code **)(*(int *)(iVar9 + 8) + 0x1c))(iVar9 + *(short *)(*(int *)(iVar9 + 8) + 0x18));
  }
  FUN_001689a8(0x295e90);
  return;
}

