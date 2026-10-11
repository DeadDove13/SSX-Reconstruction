/* Ghidra pseudocode. PS2 address: 001e4508. Not validated source. */

void FUN_001e4508(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  
  uStack_110 = CONCAT44(0x3f800000,DAT_002c37ec);
  uStack_108 = 0x3f8000003f800000;
  uStack_100 = 0x3f8000003f800000;
  uStack_f8 = 0x3f8000003f800000;
  iVar3 = (int)param_1;
  uStack_f0 = 0x3f8000003f800000;
  uStack_e8 = 0x3f8000003f800000;
  if (*(int *)(iVar3 + 0x42c) != 0) {
    uStack_110 = CONCAT44(DAT_002c37f4,DAT_002c37f0);
    uStack_108 = CONCAT44(DAT_002c37f4,DAT_002c37f4);
    uStack_100 = CONCAT44(DAT_002c37f4,DAT_002c37f0);
    uStack_f8 = CONCAT44(DAT_002c37f4,DAT_002c37f4);
    uStack_e0 = DAT_002c37f0;
    uStack_d4 = DAT_002c37f4;
    uStack_dc = DAT_002c37f4;
    uStack_d8 = DAT_002c37f4;
    uStack_f0 = CONCAT44(DAT_002c37f4,DAT_002c37f0);
    uStack_e8 = CONCAT44(DAT_002c37f4,DAT_002c37f4);
  }
  fVar12 = 20.0;
  fVar13 = 130.0;
  FUN_0011ed18(0x295e90,0xd);
  uVar11 = DAT_002c37fc;
  uStack_d0 = 0x43d20000;
  fVar9 = DAT_002c37f8;
  FUN_0011ed48(0x295e90,3);
  FUN_00176e38(0x28ad30,&uStack_100);
  fVar10 = (float)*(int *)(*(int *)(iVar3 + 0xec) + 0xc) * 0.5;
  if (DAT_00285308 == 1) {
    fVar10 = fVar10 - 1.0;
    fVar13 = 150.0;
    uStack_d0 = 0x43e10000;
    fVar9 = DAT_002c3800;
    uVar11 = DAT_002c3804;
  }
  fVar6 = *(float *)(iVar3 + 0xf0) + 40.0;
  fVar4 = *(float *)(iVar3 + 0xf0) + 88.0;
  FUN_001a90b8(fVar13,fVar6,0x3f800000,0x3f800000,param_1,0x5a,0x20);
  fVar8 = 10.0;
  uVar5 = DAT_002c3808;
  FUN_001a90b8(fVar13,fVar6,0x3f800000,0x3f800000,param_1,0x58,0x20);
  FUN_001a90b8(fVar13,fVar4,0x3f800000,0x3f800000,param_1,0x72,0x20);
  FUN_001a90b8(fVar13,fVar4,0x3f800000,0x3f800000,param_1,0x5e,0x20);
  FUN_001a90b8(fVar9,fVar6 - 1.0,0x3f800000,0x3f800000,param_1,0x73,0x20);
  FUN_001a90b8(fVar9,fVar6 - 1.0,0x3f800000,0x3f800000,param_1,0x5d,0x20);
  FUN_001a90b8(uVar11,fVar6,0x3f800000,0x3f800000,param_1,0x76,0x20);
  fVar7 = fVar6 - fVar10;
  FUN_001a90b8(uVar11,fVar6 + 1.0,0x3f800000,0x3f800000,param_1,100,0x20);
  FUN_001a90b8(uVar11,fVar4,0x3f800000,0x3f800000,param_1,0x76,0x20);
  FUN_001a90b8(uVar11,fVar4 + 1.0,0x3f800000,0x3f800000,param_1,0x62,0x20);
  fVar6 = fVar4 - 6.0;
  FUN_001a90b8(fVar9 + 22.0,fVar6,0x3f800000,0x3f800000,param_1,0x6f,0);
  FUN_001a90b8(fVar9 - 22.0,fVar6,0x3f800000,0x3f800000,param_1,0x6e,8);
  FUN_001a90b8(fVar9,fVar4,0x3f800000,0x3f800000,param_1,0x74,0x20);
  FUN_00176e38(0x28ad30,&uStack_110);
  FUN_0011ed18(0x295e90,0xe);
  FUN_001a90b8(fVar9 + 1.0,fVar4,0x3f800000,0x3f800000,param_1,0x60,0x20);
  FUN_00176e38(0x28ad30,&uStack_100);
  FUN_0011ed18(0x295e90,0xf);
  FUN_001a90b8(fVar9 - fVar8,fVar4,0x3f800000,0x3f800000,param_1,0x78,0x20);
  fVar10 = fVar4 - fVar10;
  FUN_001a90b8(fVar9 + fVar8,fVar4,0x3f800000,0x3f800000,param_1,0x79,0x20);
  FUN_0011ed18(0x295e90,0xd);
  uVar2 = FUN_00234e80(DAT_002852fc,199);
  FUN_001a1368(fVar12,fVar7,*(undefined4 *)(iVar3 + 0xec),uVar2);
  uVar2 = FUN_00234e80(DAT_002852fc,0xc0);
  FUN_001a1368(fVar12,fVar10,*(undefined4 *)(iVar3 + 0xec),uVar2);
  uVar2 = FUN_00234e80(DAT_002852fc,0xbf);
  FUN_001a1368(0x433e0000,fVar7,*(undefined4 *)(iVar3 + 0xec),uVar2);
  uVar2 = FUN_00234e80(DAT_002852fc,0xc3);
  FUN_001a1368(0x433e0000,fVar10,*(undefined4 *)(iVar3 + 0xec),uVar2);
  uVar2 = FUN_00234e80(DAT_002852fc,0xbe);
  FUN_001a1368(uStack_d0,fVar7,*(undefined4 *)(iVar3 + 0xec),uVar2);
  uVar2 = FUN_00234e80(DAT_002852fc,0xbd);
  FUN_001a1368(uStack_d0,fVar10,*(undefined4 *)(iVar3 + 0xec),uVar2);
  iVar1 = FUN_001a0840(uVar5,*(undefined4 *)(iVar3 + 0xec),0x2c5398,0);
  FUN_001a1470(uVar5,fVar13 - (float)iVar1 * 0.5,fVar10 + fVar12,*(undefined4 *)(iVar3 + 0xec),
               0x2c5398);
  iVar1 = FUN_001a0840(uVar5,*(undefined4 *)(iVar3 + 0xec),0x2c53a0,0);
  FUN_001a1470(uVar5,fVar9 - (float)iVar1 * 0.5,fVar7 + fVar12,*(undefined4 *)(iVar3 + 0xec),
               0x2c53a0);
  return;
}

