/* Ghidra pseudocode. PS2 address: 001c2850. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001c2de0) */
/* WARNING: Removing unreachable block (ram,0x001c2dc8) */

void FUN_001c2850(undefined8 param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined1 auStack_170 [4];
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_150;
  code *pcStack_14c;
  undefined4 *puStack_148;
  undefined4 uStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined8 auStack_120 [16];
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  
  FUN_00245358();
  FUN_00244a08();
  FUN_00244eb8();
  FUN_00243b50();
  FUN_00243f30(1);
  lVar5 = FUN_0023a448(0x2b6f20,24000,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,24000);
  }
  iVar6 = 499;
  puVar12 = (undefined4 *)param_1;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  puVar12[0x514] = (int)lVar5;
  puVar12[0x515] = 0;
  puVar12[0x4f0] = 0;
  puVar12[1] = 0;
  lVar5 = FUN_0023a448(0x2c52f0,0x331f40,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,0x331f40);
  }
  puVar12[0x518] = (int)lVar5;
  uVar7 = (int)lVar5 + 0x7fU & 0xffffff80;
  puVar12[0x51a] = 0;
  puVar12[0x516] = uVar7;
  puVar12[0x519] = uVar7;
  puVar12[0x517] = uVar7;
  lVar5 = FUN_0023a448(0x2b6f30,0x8000,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0ed,0x8000);
  }
  puVar12[0x51b] = (int)lVar5;
  FUN_001cb3d8(param_1);
  REG_DMAC_STAT = 0xa006;
  REG_DMAC_1_VIF1_CHCR = 0x81;
  REG_DMAC_2_GIF_CHCR = 0x81;
  REG_GIF_CTRL = 1;
  REG_VIF1_FBRST = 9;
  iVar6 = 9999;
  REG_VIF1_ERR = 0;
  do {
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  DAT_70000000 = 0;
  DAT_70000008 = 0;
  do {
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  } while ((uVar7 & 0x100) != 0);
  REG_DMAC_1_VIF1_MADR = 0x80000000;
  REG_DMAC_1_VIF1_QWC = 1;
  REG_DMAC_1_VIF1_CHCR = 0x101;
  do {
    uVar7 = REG_DMAC_1_VIF1_CHCR;
  } while ((uVar7 & 0x100) != 0);
  do {
    uVar7 = REG_DMAC_2_GIF_CHCR;
  } while ((uVar7 & 0x100) != 0);
  do {
    uVar7 = REG_VIF1_STAT;
  } while ((uVar7 & 0x1f000003) != 0);
  do {
    uVar1 = REG_GS_CSR;
  } while ((uVar1 & 0xc000) != 0x4000);
  puVar12[0xa0] = 0;
  puVar12[0xa1] = 0;
  puVar12[0xa2] = 0;
  puVar12[0xa3] = 0xffffffff;
  puVar12[0xa4] = 1;
  puVar12[0xa6] = 1;
  puVar12[0xa7] = 0;
  FUN_0025a60c(auStack_170,0,0x18);
  uStack_16c = 0x10;
  uStack_168 = 0;
  uVar2 = CreateSema(auStack_170);
  puVar12[0xaa] = uVar2;
  uStack_168 = 1;
  uStack_16c = 1;
  uVar2 = CreateSema(auStack_170);
  puVar12[0xab] = uVar2;
  FUN_0025a60c(&uStack_150,0,0x30);
  uStack_144 = 0x1000;
  uStack_150 = 0x10;
  pcStack_14c = FUN_001c3a68;
  uStack_138 = 5;
  puStack_140 = &_mips_gp0_value;
  uStack_13c = 5;
  uStack_134 = 0;
  uStack_130 = 0;
  puStack_148 = puVar12 + 0xb0;
  uVar2 = CreateThread(&uStack_150);
  puVar12[0xac] = uVar2;
  FUN_00265040(2);
  uVar2 = AddIntcHandler(2,0x1c3910,0,param_1);
  puVar12[0xa8] = uVar2;
  FUN_002650a8(2);
  FUN_00265110(1);
  uVar2 = AddDmacHandler(1,0x1c3990,0,param_1);
  puVar12[0xa9] = uVar2;
  FUN_00265178(1);
  _StartThread(puVar12[0xac],param_1);
  FUN_001c3048(param_1);
  lVar5 = FUN_0023a448(0x2c52f8,0x90,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0x90);
  }
  *puVar12 = (int)lVar5;
  FUN_001cf8b8(lVar5);
  lVar5 = FUN_0023a448(0x2b6f40,0xd0a0,0);
  if (lVar5 != 0) {
    FUN_0023bbd0(lVar5,0xffffffffdeadc0de,0xd0a0);
  }
  iVar6 = 7;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  puVar12[2] = (int)lVar5;
  FUN_001d2ea8(lVar5);
  FUN_001cf508(0x296620);
  FUN_001c50b8(param_1);
  ppuVar3 = (undefined **)&DAT_002b6f50;
  puVar12[0x87] = 1;
  puVar8 = auStack_120;
  do {
    uVar9 = *(undefined8 *)(ppuVar3 + 2);
    uVar10 = *(undefined8 *)(ppuVar3 + 4);
    uVar11 = *(undefined8 *)(ppuVar3 + 6);
    *puVar8 = *(undefined8 *)ppuVar3;
    puVar8[1] = uVar9;
    puVar8[2] = uVar10;
    puVar8[3] = uVar11;
    ppuVar3 = ppuVar3 + 8;
    puVar8 = puVar8 + 4;
  } while (ppuVar3 != &PTR_LAB_002b6fd0);
  FUN_001c31f8(param_1,auStack_120);
  fStack_98 = 0.0;
  uStack_a0 = 0;
  fStack_9c = 0.0;
  iVar6 = FUN_00258848(0);
  puVar12[0x4b5] = iVar6 << 0x10;
  uStack_a0 = 0x3f800000;
  fStack_98 = 1.0;
  fStack_9c = 1.0;
  puVar12[0x8a] = 1;
  puVar12[0x8f] = 0x3f800000;
  uVar2 = FUN_00258848(0x43000000);
  fVar13 = 0.0;
  puVar12[0x8b] = uVar2;
  if ((0.0 <= fStack_9c) && (fVar13 = fStack_9c, 1.0 < fStack_9c)) {
    fVar13 = 1.0;
  }
  uVar2 = FUN_00258848(fVar13 * 128.0);
  puVar12[0x8c] = uVar2;
  if (fStack_98 < 0.0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = fStack_98;
    if (1.0 < fStack_98) {
      fVar13 = 1.0;
    }
  }
  uVar2 = 0x3f800000;
  uVar4 = FUN_00258848(fVar13 * 128.0);
  puVar12[0x8d] = uVar4;
  FUN_00258848(0x43000000);
  puVar12[0x51c] = uVar2;
  puVar12[0x4f1] = 0;
  puVar12[0x8e] = 0x80;
  FUN_001c3160(param_1,3);
  return;
}

