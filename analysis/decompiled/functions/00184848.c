/* Ghidra pseudocode. PS2 address: 00184848. Not validated source. */

void FUN_00184848(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar9 = (int)param_1;
  iVar7 = iVar9 + 0x80;
  FUN_002123b0(iVar7);
  uVar2 = FUN_00211ee0(iVar7,*(undefined4 *)(iVar9 + 0x8c));
  *(undefined4 *)(iVar9 + 0x50) = uVar2;
  uVar4 = FUN_001847c8(param_1);
  if (0 < *(int *)(iVar9 + 0x40)) {
    *(int *)(iVar9 + 0x40) = *(int *)(iVar9 + 0x40) + -1;
  }
  if (0 < *(int *)(iVar9 + 0x4c)) {
    *(int *)(iVar9 + 0x4c) = *(int *)(iVar9 + 0x4c) + -1;
  }
  if ((*(int *)(iVar9 + 0x3c) == 6) &&
     ((lVar5 = FUN_00211c98(iVar7), lVar5 == 0 || (*(int *)(iVar9 + 0x50) != 0)))) {
    FUN_00211458(iVar7);
  }
  iVar7 = iVar9 + 0x80;
  lVar5 = FUN_00211c98();
  if (lVar5 != 0) {
    iVar8 = *(int *)(iVar9 + 0x3c);
    goto LAB_001849bc;
  }
  if (*(int *)(iVar9 + 0x50) != 0) {
    *(undefined4 *)(iVar9 + 0x50) = 0;
switchD_001849d8_caseD_0:
    uVar6 = 1;
    goto LAB_00184f30;
  }
  if (*(int *)(iVar9 + 0x3c) != 1) {
    lVar5 = FUN_00211ca8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
    if (lVar5 == 0) {
      iVar8 = *(int *)(iVar9 + 0x3c);
      goto LAB_001849bc;
    }
    lVar5 = FUN_00211ca8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
    if (lVar5 == -10) {
      iVar8 = *(int *)(iVar9 + 0x3c);
      if (iVar8 == 0x11) goto LAB_001849bc;
      uVar6 = 0x11;
    }
    else {
      lVar5 = FUN_00211ca8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
      if (lVar5 == -0x2712) {
        iVar8 = *(int *)(iVar9 + 0x3c);
        if (iVar8 == 0x12) goto LAB_001849bc;
        uVar6 = 0x12;
      }
      else {
        lVar5 = FUN_00211ca8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
        if (lVar5 == -2) {
          iVar8 = *(int *)(iVar9 + 0x3c);
          uVar6 = 0xc;
          if (iVar8 == 0xc) goto LAB_001849bc;
        }
        else {
          uVar6 = 0x13;
        }
      }
    }
    goto LAB_00184f30;
  }
  iVar8 = *(int *)(iVar9 + 0x3c);
LAB_001849bc:
  switch(iVar8) {
  case 0:
    goto switchD_001849d8_caseD_0;
  case 1:
    lVar5 = FUN_00211c98(iVar7);
    if (lVar5 != 0) {
      return;
    }
    if (0 < *(int *)(iVar9 + 0x40)) {
      return;
    }
    goto LAB_00184e84;
  default:
    goto switchD_001849d8_caseD_2;
  case 3:
    lVar5 = FUN_00211c98(iVar7);
    if (lVar5 != 0) {
      return;
    }
    lVar5 = FUN_00211030(iVar7);
    if (lVar5 < 1) {
      *(undefined4 *)(iVar9 + 0x54) = 0;
      lVar5 = FUN_00211de8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
      if (0x8e < lVar5) goto LAB_00184da0;
      *(undefined4 *)(iVar9 + 0x44) = 0x8f;
      uVar6 = 0xe;
    }
    else {
      lVar5 = FUN_00212360(iVar7,0);
      if (lVar5 == 0) {
        *(undefined4 *)(iVar9 + 0x54) = 1;
        uVar6 = 5;
      }
      else {
        *(undefined4 *)(iVar9 + 0x54) = 0;
LAB_00184b08:
        uVar6 = 0xd;
      }
    }
    break;
  case 5:
    lVar5 = FUN_00211448(iVar7);
    if (lVar5 != 1) {
      return;
    }
    FUN_0023bbd0(iVar9 + 0x214c,0,0x1274);
    FUN_00211428(iVar7,iVar9 + 0x214c,0x1274);
    uVar6 = 6;
    break;
  case 6:
    lVar5 = FUN_00211448(iVar7);
    if (lVar5 != 1) {
      return;
    }
    FUN_00211468(iVar7);
    if (*(int *)(iVar9 + 0x28a4) != 0) {
      iVar7 = *(int *)(iVar9 + 0x33b8);
      *(undefined4 *)(iVar9 + 0x33b8) = 0;
      iVar8 = FUN_0023b924(iVar9 + 0x214c,0x1274);
      if (iVar8 != iVar7) goto LAB_00184b08;
      FUN_0023bac0(0x27a59c,iVar9 + 0x214c,0x1274);
      FUN_00152fc8(0x27a598);
      fVar10 = (float)DAT_002915dc * 0.0078125;
      fVar11 = (float)DAT_002915e0 * 0.0078125;
      if ((int)DAT_002915e4 < 0) {
        fVar12 = *(float *)(iVar9 + 0x28ac);
      }
      else {
        fVar12 = *(float *)(iVar9 + 0x28ac);
      }
      DAT_002915ec = fVar12 + 0.5;
      fVar12 = (float)DAT_002915e4 * 0.0078125;
      if (DAT_002915ec < 0.0) {
        DAT_002915ec = 0.0;
      }
      else if (2.0 < DAT_002915ec) {
        DAT_002915ec = 2.0;
      }
      if (fVar10 < 0.0) {
        fVar10 = 0.0;
      }
      else if (1.0 < fVar10) {
        fVar10 = 1.0;
      }
      DAT_002915dc = FUN_00258848(fVar10 * 128.0);
      fVar10 = 0.0;
      if ((0.0 <= fVar11) && (fVar10 = fVar11, 1.0 < fVar11)) {
        fVar10 = 1.0;
      }
      DAT_002915e0 = FUN_00258848(fVar10 * 128.0);
      fVar11 = 0.0;
      if ((0.0 <= fVar12) && (fVar11 = fVar12, 1.0 < fVar12)) {
        fVar11 = 1.0;
      }
      DAT_002915e4 = FUN_00258848(fVar11 * 128.0);
      if (*(int *)(iVar9 + 0x2884) == 0) {
        DAT_00292774 = 0;
      }
      else {
        DAT_00292774 = 1;
      }
    }
    uVar6 = 7;
    break;
  case 7:
    lVar5 = FUN_00211c98(iVar7);
    if (lVar5 != 0) {
      return;
    }
LAB_00184da0:
    uVar6 = 8;
    break;
  case 8:
    lVar5 = FUN_00211c98(iVar7);
    if (lVar5 != 0) {
      return;
    }
    if (0 < *(int *)(iVar9 + 0x40)) {
      return;
    }
    bVar1 = false;
    iVar8 = 0;
    while (iVar3 = FUN_00211030(iVar7), iVar8 < iVar3) {
      lVar5 = FUN_00212360(iVar7,iVar8);
      iVar8 = iVar8 + 1;
      if (lVar5 != 0) {
        bVar1 = true;
      }
    }
    if (bVar1) {
      *(undefined4 *)(iVar9 + 0x54) = 0;
      uVar6 = 0xf;
    }
    else {
      lVar5 = FUN_00211030(iVar7);
      if (lVar5 < 4) {
        uVar2 = FUN_00211030(iVar7);
        *(undefined4 *)(iVar9 + 0x48) = uVar2;
        lVar5 = FUN_00211de8(iVar7,*(undefined4 *)(iVar9 + 0x8c));
        if (lVar5 < 0x4ca) {
          *(undefined4 *)(iVar9 + 0x44) = 0x4ca;
          uVar6 = 0x10;
          break;
        }
      }
LAB_00184edc:
      uVar6 = 0x14;
    }
    break;
  case 10:
    lVar5 = FUN_00211c98(iVar7);
    if (lVar5 != 0) {
      return;
    }
    if (0 < *(int *)(iVar9 + 0x40)) {
      return;
    }
    uVar6 = 0xb;
    break;
  case 0xb:
LAB_00184e84:
    uVar6 = 2;
    break;
  case 0xc:
    if ((uVar4 & 0x880) != 0) {
      *(undefined4 *)(iVar9 + 0x40) = 0;
    }
    if (*(int *)(iVar9 + 0x40) < 1) goto LAB_00184edc;
    lVar5 = FUN_00211e08(iVar7,*(undefined4 *)(iVar9 + 0x8c));
    if (lVar5 != 0) {
      return;
    }
    uVar6 = 0x11;
    break;
  case 0xd:
  case 0xe:
    if ((uVar4 & 0x880) != 0) {
      uVar2 = 8;
LAB_00184f18:
      FUN_001851a8(param_1,uVar2);
    }
    goto LAB_00184f20;
  case 0xf:
  case 0x10:
  case 0x13:
    if ((uVar4 & 0x880) != 0) {
      uVar2 = 0x14;
      goto LAB_00184f18;
    }
LAB_00184f20:
    uVar4 = uVar4 & 0x120;
LAB_00184f24:
    if (uVar4 == 0) {
      return;
    }
    uVar6 = 10;
    break;
  case 0x11:
  case 0x12:
    if ((uVar4 & 0x880) != 0) {
      *(undefined4 *)(iVar9 + 0x40) = 0;
    }
    if (*(int *)(iVar9 + 0x40) < 1) goto LAB_00184edc;
    uVar4 = FUN_00211e08(iVar7,*(undefined4 *)(iVar9 + 0x8c));
    goto LAB_00184f24;
  }
LAB_00184f30:
  FUN_001851a8(param_1,uVar6);
switchD_001849d8_caseD_2:
  return;
}

