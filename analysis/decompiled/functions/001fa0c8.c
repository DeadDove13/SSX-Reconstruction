/* Ghidra pseudocode. PS2 address: 001fa0c8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001fa7dc) */
/* WARNING: Removing unreachable block (ram,0x001fa790) */
/* WARNING: Removing unreachable block (ram,0x001fa820) */

void FUN_001fa0c8(undefined8 param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  char acStack_9e0 [64];
  char acStack_9a0 [64];
  undefined1 auStack_960 [32];
  undefined1 auStack_940 [4];
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined1 auStack_130 [64];
  undefined1 auStack_f0 [64];
  uint uStack_b0;
  uint auStack_ac [3];
  
  pcVar8 = acStack_9e0;
  iVar9 = (int)param_1;
  *(undefined4 *)(iVar9 + 0xa4220) = 0xffffffff;
  FUN_002023f8();
  puVar7 = (undefined4 *)(iVar9 + 0x8bb58);
  iVar3 = 5;
  do {
    *puVar7 = 0xffffffff;
    iVar3 = iVar3 + -1;
    puVar7 = puVar7 + -1;
  } while (-1 < iVar3);
  FUN_002093a0(param_1);
  FUN_00209530(param_1,1,3,0x2bca28,iVar9 + 0x8b6e0,0xffffffffffffffff);
  uVar5 = FUN_0018ada0(0x28530c,*(undefined4 *)(DAT_002859e4 + 8));
  FUN_0025bbe4(acStack_9e0,uVar5);
  if (acStack_9e0[0] != '\0') {
    while( true ) {
      cVar1 = acStack_9e0[0] + -0x20;
      if (0x19 < (int)acStack_9e0[0] - 0x61U) {
        cVar1 = acStack_9e0[0];
      }
      *pcVar8 = cVar1;
      pcVar8 = pcVar8 + 1;
      if (*pcVar8 == '\0') break;
      acStack_9e0[0] = *pcVar8;
    }
  }
  FUN_00209530(param_1,0,0,acStack_9e0,iVar9 + 0x8b6e0,2);
  if ((-1 < DAT_0027ba84) && (DAT_0027ba84 < 9)) {
    FUN_00209630(param_1,0,0x2c55d8);
  }
  iVar3 = 0;
  FUN_001f9cb8(param_1);
  uVar5 = FUN_0018ada0(0x28530c,*(undefined4 *)(DAT_002859e4 + 8));
  FUN_0025bbe4(acStack_9a0,uVar5);
  pcVar8 = acStack_9a0;
  while (acStack_9a0[0] != '\0') {
    cVar1 = *pcVar8;
    cVar2 = cVar1 + -0x20;
    if (0x19 < (int)cVar1 - 0x61U) {
      cVar2 = cVar1;
    }
    *pcVar8 = cVar2;
    pcVar8 = pcVar8 + 1;
    iVar3 = iVar3 + 1;
    acStack_9a0[0] = *pcVar8;
  }
  FUN_00206a00(param_1,acStack_9a0);
  FUN_0018d378(*(int *)(DAT_002859e4 + 0x2a0) + 0x1230);
  uVar5 = FUN_0018ada0(0x28530c,*(undefined4 *)(DAT_002859e4 + 8));
  FUN_0025bbe4(acStack_9a0,uVar5);
  pcVar8 = acStack_9a0 + iVar3;
  if (*pcVar8 != '\0') {
    cVar1 = *pcVar8;
    while( true ) {
      cVar2 = cVar1 + ' ';
      if (0x19 < (int)cVar1 - 0x41U) {
        cVar2 = cVar1;
      }
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
      if (*pcVar8 == '\0') break;
      cVar1 = *pcVar8;
    }
  }
  *(undefined4 *)(iVar9 + 0x8b6f4) = 0;
  FUN_00204960(auStack_940,0x2bca38,0x10);
  auStack_ac[0] = 0xffffffff;
  DAT_002c552c = 1.0;
  uStack_b0 = 0xffffffff;
  DAT_002c5528 = 1.0;
  lVar6 = FUN_00204de8(auStack_940,0x2bca50);
  if (lVar6 != 0) {
    while (lVar6 = FUN_002051a8(auStack_940), lVar6 == 0) {
      FUN_00204f90(auStack_940);
      FUN_002052f0(auStack_940,0x2bca60,&uStack_b0);
      FUN_002052f0(auStack_940,0x2bca70,auStack_ac);
    }
  }
  if (uStack_b0 < 0x65) {
    DAT_002c5528 = (float)(int)uStack_b0 / 100.0;
  }
  if (auStack_ac[0] < 0x65) {
    DAT_002c552c = (float)(int)auStack_ac[0] / 100.0;
  }
  uStack_938 = uStack_93c;
  lVar6 = FUN_00204de8(auStack_940,0x2c55e0);
  if (lVar6 != 0) {
    while (lVar6 = FUN_002051a8(auStack_940), lVar6 == 0) {
      FUN_00204f90(auStack_940);
      FUN_00205210(auStack_940,0x2bca80,auStack_960);
    }
  }
  uStack_938 = uStack_93c;
  while (pcVar8 = (char *)FUN_00204d00(auStack_940), pcVar8 != (char *)0x0) {
    if (*pcVar8 != '\0') {
      cVar1 = *pcVar8;
      while( true ) {
        cVar2 = cVar1 + ' ';
        if (0x19 < (int)cVar1 - 0x41U) {
          cVar2 = cVar1;
        }
        *pcVar8 = cVar2;
        pcVar8 = pcVar8 + 1;
        if (*pcVar8 == '\0') break;
        cVar1 = *pcVar8;
      }
    }
    lVar6 = FUN_0025c288(acStack_9a0);
    if (lVar6 != 0) {
      while (lVar6 = FUN_002051a8(auStack_940), lVar6 == 0) {
        uVar5 = FUN_00204f90(auStack_940);
        lVar6 = FUN_0025b730(uVar5,0x2c55e8);
        if (lVar6 == 0) {
          FUN_00205210(auStack_940,0x2c55e8,auStack_130);
          FUN_0025b630(auStack_f0,0x2c55f0,auStack_960,auStack_130);
          uVar5 = 1;
LAB_001fa5ac:
          FUN_001f4a50(param_1,uVar5,auStack_f0,0x10);
        }
        else {
          lVar6 = FUN_0025b730(uVar5,0x2c55f8);
          if (lVar6 == 0) {
            FUN_00205210(auStack_940,0x2c55f8,auStack_130);
            FUN_0025b630(auStack_f0,0x2c55f0,auStack_960,auStack_130);
            uVar5 = 2;
            goto LAB_001fa5ac;
          }
          lVar6 = FUN_0025b730(uVar5,0x2c5600);
          if (lVar6 == 0) {
            FUN_00205210(auStack_940,0x2c5600,auStack_130);
            FUN_0025b630(auStack_f0,0x2c55f0,auStack_960,auStack_130);
            uVar5 = 3;
            goto LAB_001fa5ac;
          }
          lVar6 = FUN_0025b730(uVar5,0x2c5608);
          if (lVar6 == 0) {
            FUN_00205210(auStack_940,0x2c5608,auStack_130);
            FUN_0025b630(auStack_f0,0x2c55f0,auStack_960,auStack_130);
            iVar3 = *(int *)(iVar9 + 0x8b6f4);
            *(int *)(iVar9 + 0x8b6f4) = iVar3 + 1;
            FUN_0025bbe4(iVar9 + iVar3 * 0x40 + 0x8b6f8,auStack_f0);
          }
          else {
            (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
                      (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),0,0x2c5610
                       ,0x2bca90,0x5c5);
          }
        }
      }
    }
  }
  FUN_00204ab8(auStack_940,2);
  FUN_001fd400(param_1);
  FUN_001fc918(param_1);
  if (DAT_0027ba88 != 6) {
    uVar4 = (**(code **)(*(int *)(iVar9 + 0x32000) + 0x1c))
                      (iVar9 + *(short *)(*(int *)(iVar9 + 0x32000) + 0x18));
    for (uVar4 = ((uVar4 & 0x7fff) * 0x15) / 0x7fff; uVar4 != 0; uVar4 = uVar4 - 1) {
      FUN_00207268(param_1);
    }
    FUN_001fcda0(param_1);
    FUN_00206fb8(param_1);
    FUN_001fc990(param_1,0);
    goto LAB_001fa870;
  }
  switch(*(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_002859e4 + 0x2c) + 0x40) + 0x394) + 0x24)) {
  case 1:
    FUN_001f4a50(param_1,5,0x2bcb38,0);
    goto LAB_001fa768;
  case 2:
    uVar5 = 0x2bcaf8;
    break;
  default:
    uVar5 = 0x2bcab8;
    break;
  case 4:
    uVar5 = 0x2bcad8;
    break;
  case 6:
    uVar5 = 0x2bcb18;
  }
  FUN_001f4a50(param_1,5,uVar5,0);
LAB_001fa768:
  uVar4 = (**(code **)(*(int *)(iVar9 + 0x32000) + 0x1c))
                    (iVar9 + *(short *)(*(int *)(iVar9 + 0x32000) + 0x18));
  for (uVar4 = ((uVar4 & 0x7fff) * 0x15) / 0x7fff; uVar4 != 0; uVar4 = uVar4 - 1) {
    FUN_00207268(param_1);
  }
  FUN_001fcda0(param_1);
  iVar3 = FUN_002109b0();
  FUN_002070d8(param_1,iVar3 % 100);
LAB_001fa870:
  FUN_001f8b30(param_1,2);
  return;
}

