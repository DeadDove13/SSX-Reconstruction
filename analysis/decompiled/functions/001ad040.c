/* Ghidra pseudocode. PS2 address: 001ad040. Not validated source. */

bool FUN_001ad040(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  
  iVar15 = (int)param_1;
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  uVar2 = FUN_00234e80(DAT_002852fc,0x1c9);
  lVar13 = 0;
  iVar14 = 2;
  uVar3 = FUN_00234e80(DAT_002852fc,0x1ca);
  uVar4 = FUN_00234e80(DAT_002852fc,0x1cb);
  uVar5 = FUN_00234e80(DAT_002852fc,0x1cd);
  uVar6 = FUN_00234e80(DAT_002852fc,0x1ce);
  uVar7 = FUN_00234e80(DAT_002852fc,0x1cf);
  uVar8 = FUN_00234e80(DAT_002852fc,0x1d0);
  uVar9 = FUN_00234e80(DAT_002852fc,0x1d1);
  *(undefined4 *)(iVar15 + 0x2d4) = 6;
  *(undefined4 *)(iVar15 + 0x3c4) = uVar2;
  *(undefined4 *)(iVar15 + 0x2e8) = uVar3;
  *(undefined4 *)(iVar15 + 0x2d8) = 0x43790000;
  puVar12 = &DAT_0028aeb0;
  *(undefined4 *)(iVar15 + 0x2e0) = 0x32;
  *(undefined4 *)(iVar15 + 0x2e4) = 0;
  *(undefined4 *)(iVar15 + 0x2dc) = 0;
  do {
    uVar2 = *puVar12;
    puVar12 = puVar12 + 1;
    iVar14 = iVar14 + -1;
    lVar11 = FUN_001a0a88(0x3f800000,uVar1,uVar2,0);
    iVar10 = DAT_002c56e8;
    if (lVar13 < lVar11) {
      lVar13 = lVar11;
    }
  } while (-1 < iVar14);
  lVar11 = 0;
  *(undefined4 *)(iVar15 + 0x2fc) = 1;
  *(undefined4 *)(iVar15 + 0x2ec) = 7;
  *(float *)(iVar15 + 0x2f0) = (float)(int)lVar13 + 10.0 + 35.0;
  *(undefined4 *)(iVar15 + 0x300) = uVar4;
  *(undefined4 *)(iVar15 + 0x2f8) = 3;
  *(undefined4 *)(iVar15 + 0x2f4) = 0;
  iVar10 = FUN_00207178(iVar10);
  FUN_002071b8(DAT_002c56e8,0);
  iVar14 = iVar10;
  if (0 < iVar10) {
    do {
      iVar14 = iVar14 + -1;
      lVar13 = FUN_001a0840(0x3f800000,uVar1,
                            DAT_002c56e8 + *(int *)(DAT_002c56e8 + 0x35f80) * 0x20 + 0x35b7c,0);
      if (lVar11 < lVar13) {
        lVar11 = lVar13;
      }
      FUN_00207268(DAT_002c56e8);
    } while (iVar14 != 0);
  }
  FUN_002071b8(DAT_002c56e8,0);
  *(undefined4 *)(iVar15 + 0x304) = 9;
  *(int *)(iVar15 + 0x310) = iVar10;
  *(undefined4 *)(iVar15 + 0x30c) = 0;
  *(undefined4 *)(iVar15 + 0x31c) = 10;
  *(undefined4 *)(iVar15 + 0x328) = 0x32;
  *(undefined4 *)(iVar15 + 0x324) = 0;
  *(undefined4 *)(iVar15 + 0x334) = 0xc;
  *(undefined4 *)(iVar15 + 0x340) = 0x32;
  *(undefined4 *)(iVar15 + 0x33c) = 0;
  *(undefined4 *)(iVar15 + 0x314) = 1;
  *(undefined4 *)(iVar15 + 0x34c) = 0xf;
  *(undefined4 *)(iVar15 + 0x318) = uVar5;
  *(float *)(iVar15 + 0x308) = (float)(int)lVar11 + 10.0 + 35.0;
  *(undefined4 *)(iVar15 + 0x358) = 0x32;
  *(undefined4 *)(iVar15 + 0x354) = 0;
  *(undefined4 *)(iVar15 + 0x330) = uVar6;
  *(undefined4 *)(iVar15 + 0x32c) = 0;
  *(undefined4 *)(iVar15 + 800) = 0x43790000;
  *(undefined4 *)(iVar15 + 0x344) = 0;
  *(undefined4 *)(iVar15 + 0x348) = uVar7;
  *(undefined4 *)(iVar15 + 0x364) = 0xb;
  *(undefined4 *)(iVar15 + 0x338) = 0x43790000;
  *(undefined4 *)(iVar15 + 0x35c) = 0;
  *(undefined4 *)(iVar15 + 0x360) = uVar8;
  *(undefined4 *)(iVar15 + 0x370) = 0x32;
  *(undefined4 *)(iVar15 + 0x36c) = 0;
  *(undefined4 *)(iVar15 + 0x350) = 0x43790000;
  *(undefined4 *)(iVar15 + 0x378) = uVar9;
  *(undefined4 *)(iVar15 + 0x368) = 0x43790000;
  *(undefined4 *)(iVar15 + 0x374) = 0;
  *(undefined4 *)(iVar15 + 0x2d0) = 7;
  *(undefined8 *)(iVar15 + 0x3c8) = DAT_002c5178;
  *(undefined8 *)(iVar15 + 0x3d0) = DAT_002c5180;
  *(undefined8 *)(iVar15 + 0x3d8) = DAT_002c5188;
  FUN_001ac838(param_1,iVar15 + 0x2b8);
  return *(int *)(iVar15 + 0x2d0) < 0xb;
}

