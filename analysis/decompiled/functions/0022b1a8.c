/* Ghidra pseudocode. PS2 address: 0022b1a8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022b88c) */
/* WARNING: Removing unreachable block (ram,0x0022b890) */
/* WARNING: Removing unreachable block (ram,0x0022b364) */
/* WARNING: Removing unreachable block (ram,0x0022b368) */
/* WARNING: Removing unreachable block (ram,0x0022b384) */
/* WARNING: Removing unreachable block (ram,0x0022b27c) */
/* WARNING: Removing unreachable block (ram,0x0022b280) */
/* WARNING: Removing unreachable block (ram,0x0022b29c) */
/* WARNING: Removing unreachable block (ram,0x0022b44c) */
/* WARNING: Removing unreachable block (ram,0x0022b450) */
/* WARNING: Removing unreachable block (ram,0x0022b46c) */

undefined4 FUN_0022b1a8(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uStack_130;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 *puStack_128;
  char acStack_120 [128];
  
  DAT_0029e6c4 = 0x8000;
  DAT_0029e6c2 = 0x141;
  if (DAT_0029ac94 == 0) {
    FUN_00266a80(0);
    FUN_00268138();
  }
  if (DAT_0029a830._4_1_ != '\0') {
    if (DAT_0029ac94 != 0) goto LAB_0022b564;
    cVar1 = *(char *)DAT_0029a830;
    pcVar5 = (char *)DAT_0029a830;
    pcVar7 = acStack_120;
    if (cVar1 != '\0') {
      do {
        *pcVar7 = cVar1;
        cVar1 = pcVar5[1];
        pcVar7 = pcVar7 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar7 = '\0';
    }
    acStack_120[0] = '\0';
    pcVar7 = "libsd.irx";
    pcVar5 = acStack_120;
    cVar1 = DAT_002be1e0;
    if (DAT_002be1e0 != '\0') {
      do {
        *pcVar5 = cVar1;
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar5 = '\0';
    }
    lVar2 = FUN_00268630(acStack_120,0,0);
    if ((lVar2 < 0) && (lVar2 = FUN_00268630(0x2be1f0,0,0), lVar2 < 0)) {
      return 0xffffffff;
    }
    cVar1 = *(char *)DAT_0029a830;
    pcVar5 = (char *)DAT_0029a830;
    pcVar7 = acStack_120;
    if (cVar1 != '\0') {
      do {
        *pcVar7 = cVar1;
        cVar1 = pcVar5[1];
        pcVar7 = pcVar7 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar7 = '\0';
    }
    acStack_120[0] = '\0';
    pcVar7 = "sdrdrv.irx";
    pcVar5 = acStack_120;
    cVar1 = DAT_002be220;
    if (DAT_002be220 != '\0') {
      do {
        *pcVar5 = cVar1;
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar5 = '\0';
    }
    lVar2 = FUN_00268630(acStack_120,0,0);
    if ((lVar2 < 0) && (lVar2 = FUN_00268630(0x2be230,0,0), lVar2 < 0)) {
      return 0xffffffff;
    }
    cVar1 = *(char *)DAT_0029a830;
    pcVar5 = (char *)DAT_0029a830;
    pcVar7 = acStack_120;
    if (cVar1 != '\0') {
      do {
        *pcVar7 = cVar1;
        cVar1 = pcVar5[1];
        pcVar7 = pcVar7 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar7 = '\0';
    }
    acStack_120[0] = '\0';
    pcVar7 = "snddrv.irx";
    pcVar5 = acStack_120;
    cVar1 = DAT_002be260;
    if (DAT_002be260 != '\0') {
      do {
        *pcVar5 = cVar1;
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      *pcVar5 = '\0';
    }
    lVar2 = FUN_00268630(acStack_120,0,0);
    if ((lVar2 < 0) && (lVar2 = FUN_00268630(0x2be270,0,0), lVar2 < 0)) {
      return 0xffffffff;
    }
  }
  if (DAT_0029ac94 == 0) {
    uVar9 = 0;
    FUN_002463c8();
    FUN_00246510(1,0x8000,0);
    uVar8 = 0x980;
    do {
      FUN_00246510(1,0x8010,uVar8,0x3fff);
      FUN_00246510(1,0x8010,uVar9 | 0xa80,0x3fff);
      uVar9 = uVar9 + 1;
      uVar8 = uVar9 | 0x980;
    } while ((int)uVar9 < 2);
    DAT_0029b00c = FUN_002681c8(0x3000);
    DAT_0029b014 = 0;
    DAT_0029e8cc = FUN_00246720(5);
  }
LAB_0022b564:
  DAT_0029a888 = 1;
  FUN_002251e0(0x22d418);
  DAT_0029a888 = 0;
  if (DAT_0029ac94 == 0) {
    DAT_002cffd4 = &LAB_0022b060;
    DAT_002cffd8 = &DAT_0029fac0;
    DAT_002cffdc = 0x2000;
    DAT_002cffe4 = 10;
    DAT_002cffe0 = &_mips_gp0_value;
    DAT_002cfff0 = 0;
    uVar3 = CreateThread(0x2cffd0);
    DAT_002a1ac0 = (undefined4)uVar3;
    _StartThread(uVar3,0);
    FUN_0022d150(0x29ac80,0x5000,0x10,1);
    uVar3 = GetThreadId();
    ChangeThreadPriority(uVar3,100);
  }
  FUN_0022c7a0(DAT_0029e8d1 | 0x40,DAT_0029a8f8);
  if (DAT_0029a830._7_1_ != 0) {
    puVar6 = &DAT_0029a808;
    iVar10 = 0;
    do {
      if ((*(byte *)(puVar6 + 6) & 4) != 0) {
        uStack_12b = 2;
        uStack_12c = DAT_0029a828._1_1_;
        uStack_130 = (uint)DAT_0029a820._6_2_;
        puStack_128 = &LAB_0022ad90;
        uStack_12a = 0;
        FUN_0022efc8(&uStack_130);
        DAT_0029fab8 = 0;
        DAT_0029e8d8 = FUN_002681c8(0x800);
        DAT_0029e8f0 = 0x400;
        DAT_0029e8f4 = 0;
        DAT_0029e8e8 = &DAT_2029e9c0;
        DAT_0029e8e0 = &DAT_2029e9c0;
        DAT_0029e8dc = &DAT_2029ebc0;
        FUN_0022d8c8(0x29e9c0,0x400);
        FlushCache(0);
        DAT_002d0000 = &DAT_0029e9c0;
        DAT_002d0004 = DAT_0029e8d8;
        DAT_002d0008 = 0x400;
        DAT_002d000c = 0;
        lVar2 = sceSifSetDma(0x2d0000,1);
        if (lVar2 != 0) {
          do {
            lVar4 = sceSifDmaStat(lVar2);
          } while (-1 < lVar4);
        }
        DAT_002d0000 = &DAT_0029e9c0;
        DAT_002d0004 = DAT_0029e8d8 + 0x400;
        DAT_002d0008 = 0x400;
        DAT_002d000c = 0;
        lVar2 = sceSifSetDma(0x2d0000,1);
        if (lVar2 != 0) {
          do {
            lVar4 = sceSifDmaStat(lVar2);
          } while (-1 < lVar4);
        }
        FUN_00246510(1,0x8010,0xf81,0x7fff);
        FUN_00246510(1,0x8010,0x1081,0x7fff);
        if (DAT_0029ac94 != 0) {
          DAT_0029ac94 = 1;
          return 0;
        }
        FUN_00246510(1,0x8110,1,0x22c620);
        FUN_00246510(1,0x80e0,1,0x10,DAT_0029e8d8,0x800);
        break;
      }
      iVar11 = iVar10 + 1;
      puVar6 = (undefined8 *)(iVar10 + 0x29a809);
      iVar10 = iVar11;
    } while (iVar11 < (int)(uint)DAT_0029a830._7_1_);
  }
  if (DAT_0029ac94 == 0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    FUN_00266668(0x2d0010,0x10);
    FUN_00266698(1,0x22b020,0x2d0090);
    EI();
    DAT_0029e980 = 0x18;
    DAT_0029e98c = 0x601;
    DAT_0029e990 = 0;
    DAT_0029e994 = &DAT_002d0220;
    FUN_00266830(0,0x29e980,0x18,0,0,0);
  }
  DAT_0029ac94 = 1;
  return 0;
}

