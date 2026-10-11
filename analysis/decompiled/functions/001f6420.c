/* Ghidra pseudocode. PS2 address: 001f6420. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001f68e0) */
/* WARNING: Removing unreachable block (ram,0x001f6984) */

undefined4 FUN_001f6420(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uStack_b0;
  
  iVar7 = (int)param_1;
  iVar5 = iVar7 + 0x320a0;
  iVar6 = *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
  if (*(int *)(iVar7 + *(int *)(iVar7 + 0x3201c) * 4 + 0x32080) == 0) {
    if (*(int *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4) == 0) goto LAB_001f67b8;
    fVar9 = **(float **)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4);
    piVar3 = (int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
    if ((((float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * fVar9 < 127.0) &&
        (iVar4 = 0, (float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * fVar9 < 0.0)) ||
       (iVar4 = 0x7f, 127.0 <= (float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * fVar9)) {
      *piVar3 = iVar4;
    }
    else {
      *piVar3 = (int)((float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * fVar9);
    }
    iVar5 = iVar7 + 0x320a0;
    if ((0x7e < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4)) ||
       (uVar1 = 0, -1 < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4))) {
      if (*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) < 0x7f) {
        uVar1 = *(undefined1 *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
      }
      else {
        uVar1 = 0x7f;
      }
    }
    *(undefined1 *)(*(int *)(iVar7 + 0x3201c) * 0x18 + iVar7 + 0x32020) = uVar1;
    iVar5 = iVar7 + 0x320a0;
    piVar3 = (int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
    if ((((float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * DAT_002c5528 < 127.0) &&
        (iVar4 = 0, (float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * DAT_002c5528 < 0.0)) ||
       (iVar4 = 0x7f, 127.0 <= (float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * DAT_002c5528
       )) {
      *piVar3 = iVar4;
    }
    else {
      *piVar3 = (int)((float)*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) * DAT_002c5528);
    }
    iVar5 = iVar7 + 0x320a0;
    iVar4 = *(int *)(iVar7 + 0x3201c) * 0x18 + iVar7 + 0x30000;
    if ((0x7e < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4)) ||
       (uVar1 = 0, -1 < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4))) {
      if (*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) < 0x7f) {
        uVar1 = *(undefined1 *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
      }
      else {
        uVar1 = 0x7f;
      }
    }
  }
  else {
    *(undefined4 *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) = 0;
    iVar4 = *(int *)(iVar7 + 0x3201c) * 0x18 + iVar7 + 0x30000;
    if ((0x7e < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4)) ||
       (uVar1 = 0, -1 < *(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4))) {
      if (*(int *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4) < 0x7f) {
        uVar1 = *(undefined1 *)(iVar5 + *(int *)(iVar7 + 0x3201c) * 4);
      }
      else {
        uVar1 = 0x7f;
      }
    }
  }
  *(undefined1 *)(iVar4 + 0x2020) = uVar1;
LAB_001f67b8:
  uStack_b0 = 0xffffffff;
  iVar5 = *(int *)(iVar7 + 0x3201c);
  if (*(float *)(iVar7 + 0x30000 + *(int *)(iVar7 + 0x3201c) * 4 + 0x2110) == 0.0) {
    piVar3 = (int *)(*(int *)(iVar7 + 0x30000 + iVar5 * 4 + 0x51d0) * 0x1c +
                    *(int *)(iVar7 + 0x351c4));
    iVar4 = -1;
    if (*piVar3 == 1) {
      iVar4 = piVar3[1];
    }
    uStack_b0 = FUN_00225bb0(iVar4,*(undefined4 *)(iVar7 + iVar5 * 4 + 0x351e0),
                             iVar7 + *(int *)(iVar7 + 0x3201c) * 0x18 + 0x32020);
  }
  lVar2 = FUN_001f5a20(param_1,uStack_b0,iVar6,1);
  if (lVar2 != 0) {
    piVar3 = (int *)(*(int *)(iVar7 + iVar5 * 4 + 0x351d0) * 0x1c + *(int *)(iVar7 + 0x351c4));
    iVar4 = -1;
    if (*piVar3 == 1) {
      iVar4 = piVar3[1];
    }
    FUN_001f5070(lVar2,iVar4,*(undefined4 *)(iVar7 + 0x351e0 + iVar5 * 4));
  }
  iVar8 = 0;
  piVar3 = (int *)(iVar7 + *(int *)(iVar7 + 0x3201c) * 0x10 + 0x32120);
  iVar4 = piVar3[1];
  iVar6 = (iVar6 * piVar3[3]) / 100;
  if (0 < iVar4) {
    do {
      piVar3[1] = iVar4 + -1;
      iVar8 = iVar8 + *piVar3;
      FUN_00205720(param_1,iVar8,DAT_002c5500,
                   *(undefined4 *)(iVar7 + 0x320b0 + *(int *)(iVar7 + 0x3201c) * 4),
                   *(undefined4 *)(iVar7 + 0x351d0 + iVar5 * 4),
                   *(undefined4 *)(iVar7 + 0x351e0 + iVar5 * 4),iVar6,0);
      iVar6 = (iVar6 * piVar3[2]) / 100;
      if (0x7f < iVar6) {
        iVar6 = 0x7f;
      }
      if (iVar6 < 0) {
        iVar6 = 0;
      }
    } while ((iVar6 != 0) && (iVar4 = piVar3[1], 0 < iVar4));
  }
  *(int *)(iVar7 + 0x3201c) = *(int *)(iVar7 + 0x3201c) + -1;
  return uStack_b0;
}

