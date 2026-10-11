/* Ghidra pseudocode. PS2 address: 00243bb8. Not validated source. */

uint FUN_00243bb8(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 in_vc13;
  
  uVar6 = 0;
  if (param_1 == 0) {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
    while ((uVar4 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x2be978;
        goto LAB_00243d4c;
      }
      uVar4 = REG_DMAC_1_VIF1_CHCR;
    }
    uVar4 = REG_DMAC_2_GIF_CHCR;
    while ((uVar4 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x2bea58;
        goto LAB_00243d4c;
      }
      uVar4 = REG_DMAC_2_GIF_CHCR;
    }
    uVar4 = REG_VIF1_STAT;
    while ((uVar4 & 0x1f000003) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x2bea88;
        goto LAB_00243d4c;
      }
      uVar4 = REG_VIF1_STAT;
    }
    uVar7 = _cfc2(in_vc13);
    while ((uVar7 & 0x100) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x2beab8;
        goto LAB_00243d4c;
      }
      uVar7 = _cfc2(in_vc13);
    }
    uVar4 = REG_GIF_STAT;
    while ((uVar4 & 0xc00) != 0) {
      bVar1 = 0x1000000 < uVar6;
      uVar6 = uVar6 + 1;
      if (bVar1) {
        uVar5 = 0x2beae0;
LAB_00243d4c:
        FUN_0025a720(uVar5);
        uVar2 = REG_DMAC_1_VIF1_CHCR;
        FUN_0025a720(0x2be9a8,uVar2);
        uVar2 = REG_DMAC_1_VIF1_TADR;
        FUN_0025a720(0x2be9b8,uVar2);
        uVar2 = REG_DMAC_1_VIF1_MADR;
        FUN_0025a720(0x2be9c8,uVar2);
        uVar2 = REG_DMAC_1_VIF1_QWC;
        FUN_0025a720(0x2be9d8,uVar2);
        uVar2 = REG_DMAC_2_GIF_CHCR;
        FUN_0025a720(0x2be9e8,uVar2);
        uVar2 = REG_DMAC_2_GIF_TADR;
        FUN_0025a720(0x2be9f8,uVar2);
        uVar2 = REG_DMAC_2_GIF_MADR;
        FUN_0025a720(0x2bea08,uVar2);
        uVar2 = REG_DMAC_2_GIF_QWC;
        FUN_0025a720(0x2bea18,uVar2);
        uVar2 = REG_VIF1_STAT;
        FUN_0025a720(0x2bea28,uVar2);
        uVar2 = REG_GIF_STAT;
        FUN_0025a720(0x2bea40,uVar2);
        return 0xffffffff;
      }
      uVar4 = REG_GIF_STAT;
    }
    uVar4 = 0;
  }
  else {
    uVar4 = REG_DMAC_1_VIF1_CHCR;
    uVar3 = REG_DMAC_2_GIF_CHCR;
    uVar6 = REG_VIF1_STAT;
    uVar4 = (uint)((uVar4 & 0x100) != 0);
    if ((uVar3 & 0x100) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar6 & 0x1f000003) != 0) {
      uVar4 = uVar4 | 4;
    }
    uVar7 = _cfc2(in_vc13);
    uVar6 = REG_GIF_STAT;
    if ((uVar7 & 0x100) != 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar6 & 0xc00) != 0) {
      uVar4 = uVar4 | 0x10;
    }
  }
  return uVar4;
}

