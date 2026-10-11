/* Ghidra pseudocode. PS2 address: 001b4e90. Not validated source. */

void FUN_001b4e90(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined1 auStack_2e0 [128];
  undefined1 auStack_260 [256];
  undefined1 auStack_160 [128];
  
  uVar14 = 0x3f800000;
  uStack_320 = 0x3f000000;
  uStack_330 = 0x3f8000003f800000;
  uStack_328 = 0x3f8000003f800000;
  uStack_31c = 0x3f800000;
  uStack_318 = 0x3f800000;
  uStack_314 = 0x3f800000;
  uStack_310 = 0x3f8000003f800000;
  iVar9 = (int)param_1;
  uVar11 = DAT_002c3418;
  if (*(int *)(iVar9 + 0x44) != 8) {
    uStack_330 = CONCAT44(DAT_002c341c,0x3f800000);
    uStack_328 = CONCAT44(DAT_002c341c,DAT_002c341c);
    uStack_310 = CONCAT44(0x3f800000,DAT_002c341c);
    uStack_2f0 = DAT_002c341c;
    uStack_2ec = 0x3e200000;
    uStack_2e8 = 0x3e960000;
    uStack_2e4 = 0x3f480000;
    uVar11 = DAT_002c341c;
  }
  uStack_308 = 0x3f520000;
  uStack_2f8 = 0x3f4800003e960000;
  _uStack_300 = CONCAT44(0x3e200000,uVar11);
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  FUN_0011ed18(0x295e90,0xb);
  uVar16 = 0x42400000;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  DAT_0028ad3c = 0;
  DAT_0028ad30 = uVar14;
  FUN_0019f6d8(0,0,DAT_002c3420,uVar16,0x28ad30);
  FUN_0011ed18(0x295e90,0xc);
  uVar10 = 0x42440000;
  FUN_00176e38(0x28ad30,&uStack_330);
  uVar11 = DAT_002c3424;
  FUN_0019f6d8(0,uVar16,0x44000000,uVar14,0x28ad30);
  iVar2 = FUN_001a8df8(*(undefined4 *)(iVar9 + 0x174),0x54);
  FUN_001a90b8(0x43800000,uVar16,*(undefined4 *)(iVar2 + 8),uVar14,*(undefined4 *)(iVar9 + 0x174),
               0x4d,0xb);
  FUN_001a90b8(0x43800000,uVar16,*(undefined4 *)(iVar2 + 8),uVar14,*(undefined4 *)(iVar9 + 0x174),
               0x4d,2);
  FUN_001a90b8(0x43c00000,uVar10,*(undefined4 *)(iVar2 + 8),uVar14,*(undefined4 *)(iVar9 + 0x174),
               0x4d,0xd);
  FUN_001a90b8(uVar11,uVar10,*(undefined4 *)(iVar2 + 8),uVar14,*(undefined4 *)(iVar9 + 0x174),0x4d,4
              );
  FUN_001a90b8(512.0 - *(float *)(iVar2 + 8),uVar16,*(float *)(iVar2 + 8),uVar14,
               *(undefined4 *)(iVar9 + 0x174),0x4d,0xb);
  uStack_2f0 = 0;
  uStack_2ec = uVar14;
  uStack_2e8 = uVar14;
  uStack_2e4 = uVar14;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0019ff30(0x43800000,uVar16,0x43800000,0x43b40000,0x28ad30,&uStack_330,&uStack_2f0);
  FUN_0019fe18(uVar11,0,uVar11,DAT_002c3428,0x28ad30);
  FUN_0019ff30(DAT_002c342c,uVar16,DAT_002c342c,0x43b40000,0x28ad30,&uStack_330,&uStack_2f0);
  FUN_0011ed18(0x295e90,0xd);
  uVar4 = FUN_00234e80(DAT_002852fc,*(undefined4 *)(iVar9 + 0x17c));
  FUN_001a1170(DAT_002c3430,DAT_002c3434,DAT_002c3438,iVar1,uVar4);
  lVar5 = FUN_00211da0(*(int *)(iVar9 + 0x16c),*(undefined4 *)(*(int *)(iVar9 + 0x16c) + 0xc));
  if (lVar5 == 2) {
    FUN_00234e80(DAT_002852fc,0x7a);
  }
  else if (lVar5 < 3) {
    if (lVar5 == 1) {
      FUN_00234e80(DAT_002852fc,0x98);
    }
  }
  else if (lVar5 == 3) {
    FUN_00234e80(DAT_002852fc,0x99);
  }
  uVar4 = FUN_00234e80(DAT_002852fc,0x84);
  uVar11 = DAT_002c343c;
  FUN_0019a8f0(auStack_2e0,0x2c5200,uVar4,*(int *)(*(int *)(iVar9 + 0x16c) + 0xc) + 1);
  iVar3 = 0;
  iVar2 = FUN_001a0a88(0x3f800000,iVar1,auStack_2e0,0);
  fVar17 = 168.0;
  FUN_00176e38(0x28ad30,&uStack_330);
  FUN_001a1368(128.0 - (float)iVar2 * 0.5,DAT_002c3440,iVar1,auStack_2e0);
  FUN_0016c040(*(undefined4 *)(iVar9 + 0x16c),auStack_260);
  iVar2 = FUN_001a0a88(uVar11,iVar1,auStack_260,0);
  FUN_00176e38(0x28ad30,&uStack_330);
  FUN_001a1578(uVar11,128.0 - (float)iVar2 * 0.5,DAT_002c3444,iVar1,auStack_260);
  FUN_0011ed18(0x295e90,0xe);
  fVar13 = DAT_002c3448;
  if (0 < *(int *)(*(int *)(iVar9 + 0x16c) + 0x10)) {
    do {
      FUN_001d9548(param_1,iVar3,auStack_160);
      if ((iVar3 == *(int *)(iVar9 + 0x2c)) && (lVar5 = FUN_0019a7c0(auStack_160), lVar5 != 0)) {
        FUN_0011ed18(0x295e90,10);
        FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
        FUN_00176e38(0x28ad30,&uStack_300);
        FUN_0019f6d8(DAT_002c344c,fVar17 - fVar13,DAT_002c3450,0x42100000,0x28ad30);
        FUN_0011ed18(0x295e90,0xe);
        FUN_00176e38(0x28ad30,&uStack_310);
      }
      FUN_00176e38(0x28ad30,&uStack_330);
      iVar3 = iVar3 + 1;
      FUN_0019a8f0(auStack_2e0,0x2c5190,iVar3);
      FUN_001a1368(DAT_002c3454,fVar17,iVar1,auStack_2e0);
      FUN_001a1368(0x43900000,fVar17,iVar1,auStack_160);
      fVar17 = fVar17 + 36.0;
    } while (iVar3 < *(int *)(*(int *)(iVar9 + 0x16c) + 0x10));
  }
  fVar13 = DAT_002c3458;
  uVar4 = FUN_00234e80(DAT_002852fc,0x7c);
  uVar11 = DAT_002c345c;
  uVar6 = FUN_00234e80(DAT_002852fc,0x79);
  uVar14 = 0x3f800000;
  uVar7 = FUN_00234e80(DAT_002852fc,0x7b);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  fVar17 = (float)*(int *)(iVar1 + 0xc) + 4.0;
  puVar8 = (undefined8 *)&uStack_320;
  if (*(int *)(iVar9 + 0xc) != 0) {
    puVar8 = &uStack_330;
  }
  fVar15 = fVar17 + fVar17 + fVar13;
  fVar12 = fVar17 * 4.0 + fVar13;
  fVar13 = fVar17 * 3.0 + fVar13;
  FUN_00176e38(0x28ad30,puVar8);
  FUN_001a1368(uVar11,fVar15,iVar1,uVar4);
  puVar8 = (undefined8 *)&uStack_320;
  if (*(int *)(iVar9 + 0x14) != 0) {
    puVar8 = &uStack_330;
  }
  FUN_00176e38(0x28ad30,puVar8);
  FUN_001a1368(uVar11,fVar12,iVar1,uVar7);
  fVar12 = fVar12 + -2.0;
  puVar8 = (undefined8 *)&uStack_320;
  if (*(int *)(iVar9 + 0x18) != 0) {
    puVar8 = &uStack_330;
  }
  FUN_00176e38(0x28ad30,puVar8);
  FUN_001a1368(uVar11,fVar13,iVar1,uVar6);
  uVar11 = DAT_002c3460;
  puVar8 = (undefined8 *)&uStack_320;
  if (*(int *)(iVar9 + 0xc) != 0) {
    puVar8 = &uStack_330;
  }
  FUN_00176e38(0x28ad30,puVar8);
  FUN_001a90b8(uVar11,fVar15 + -2.0,uVar14,uVar14,*(undefined4 *)(iVar9 + 0x174),0x58,0);
  puVar8 = (undefined8 *)&uStack_320;
  if (*(int *)(iVar9 + 0x14) != 0) {
    puVar8 = &uStack_330;
  }
  FUN_00176e38(0x28ad30,puVar8);
  FUN_001a90b8(uVar11,fVar12,uVar14,uVar14,*(undefined4 *)(iVar9 + 0x174),0x56,0);
  FUN_00176e38(0x28ad30,&uStack_330);
  FUN_001a90b8(uVar11,fVar13 + -2.0,uVar14,uVar14,*(undefined4 *)(iVar9 + 0x174),0x57,0);
  if (*(int *)(iVar9 + 0x44) != 8) {
    FUN_0011ed48(0x295e90,3);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = DAT_002c3464;
    DAT_0028ad34 = 0;
    DAT_0028ad38 = 0;
    DAT_0028ad3c = 0;
    FUN_0019f6d8(0,0,0x44200000,0x43f00000,0x28ad30);
  }
  return;
}

