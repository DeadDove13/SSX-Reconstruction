/* Ghidra pseudocode. PS2 address: 001fc990. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001fcc70) */
/* WARNING: Removing unreachable block (ram,0x001fcbc8) */
/* WARNING: Removing unreachable block (ram,0x001fcc0c) */
/* WARNING: Removing unreachable block (ram,0x001fcccc) */

void FUN_001fc990(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  char *pcVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  char acStack_960 [64];
  undefined1 auStack_920 [2064];
  undefined1 auStack_110 [64];
  undefined1 auStack_d0 [64];
  
  pcVar9 = acStack_960;
  uVar6 = FUN_0018ada0(0x28530c,*(undefined4 *)(DAT_002859e4 + 8));
  FUN_0025bbe4(acStack_960,uVar6);
  if (acStack_960[0] != '\0') {
    while( true ) {
      cVar2 = acStack_960[0] + ' ';
      if (0x19 < (int)acStack_960[0] - 0x41U) {
        cVar2 = acStack_960[0];
      }
      *pcVar9 = cVar2;
      pcVar9 = pcVar9 + 1;
      if (*pcVar9 == '\0') break;
      acStack_960[0] = *pcVar9;
    }
  }
  FUN_00204960(auStack_920,0x2bcbb8,0x10);
  lVar10 = 0;
  do {
    pcVar9 = (char *)FUN_00204d00(auStack_920);
    if (pcVar9 == (char *)0x0) goto LAB_001fcaf8;
    if (*pcVar9 != '\0') {
      cVar2 = *pcVar9;
      while( true ) {
        cVar3 = cVar2 + ' ';
        if (0x19 < (int)cVar2 - 0x41U) {
          cVar3 = cVar2;
        }
        *pcVar9 = cVar3;
        pcVar9 = pcVar9 + 1;
        if (*pcVar9 == '\0') break;
        cVar2 = *pcVar9;
      }
    }
    lVar7 = FUN_0025c288(acStack_960);
  } while ((lVar7 == 0) || (lVar7 = FUN_002051a8(auStack_920), lVar7 != 0));
  uVar6 = FUN_00204f90(auStack_920);
  lVar7 = FUN_0025b730(uVar6,0x2c5620);
  if (lVar7 == 0) {
    lVar10 = 1;
    FUN_00205210(auStack_920,0x2c5620,auStack_d0);
    FUN_0025b630(auStack_110,0x2bcbd8,auStack_d0);
  }
LAB_001fcaf8:
  if (lVar10 == 0) {
    FUN_00204ab8(auStack_920,2);
  }
  else {
    (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x14))
              (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x10),lVar10,0x2bcbe8,
               0x2bca90,0x7d1);
    iVar11 = (int)param_1;
    FUN_0020a318(param_1,2,iVar11 + 0x8b6dc,0x10,0x20000);
    FUN_0020a510(param_1,2,auStack_110);
    bVar1 = DAT_0027ba84 != 9;
    *(undefined4 *)(iVar11 + 0xa421c) = 0;
    if (bVar1) {
      if (param_2 == 0) {
        iVar12 = 1;
        uVar4 = (**(code **)(*(int *)(iVar11 + 0x32000) + 0x1c))
                          (iVar11 + *(short *)(*(int *)(iVar11 + 0x32000) + 0x18));
        uVar4 = ((uVar4 & 0x7fff) * 3) / 0x7fff;
        uVar5 = (**(code **)(*(int *)(iVar11 + 0x32000) + 0x1c))
                          (iVar11 + *(short *)(*(int *)(iVar11 + 0x32000) + 0x18));
        FUN_0020a780(param_1,2,1000,uVar4,0);
        FUN_0020a780(param_1,2,1000,((uVar5 & 0x7fff) * (5 - uVar4)) / 0x7fff + uVar4 + 1,0);
        iVar8 = *(int *)(iVar11 + 0x32000);
        while( true ) {
          iVar12 = iVar12 + -1;
          uVar4 = (**(code **)(iVar8 + 0x1c))(iVar11 + *(short *)(iVar8 + 0x18));
          FUN_0020a780(param_1,2,1000,((uVar4 & 0x7fff) << 2) / 0x7fff + 4,0);
          if (iVar12 < 0) break;
          iVar8 = *(int *)(iVar11 + 0x32000);
        }
      }
      else {
        uVar4 = (**(code **)(*(int *)(iVar11 + 0x32000) + 0x1c))
                          (iVar11 + *(short *)(*(int *)(iVar11 + 0x32000) + 0x18));
        FUN_0020a780(param_1,2,1000,((uVar4 & 0x7fff) << 2) / 0x7fff + 4,0);
      }
    }
    FUN_002096d0(param_1,0,1);
    FUN_00204ab8(auStack_920,2);
  }
  return;
}

