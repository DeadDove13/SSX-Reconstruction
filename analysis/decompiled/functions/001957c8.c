/* Ghidra pseudocode. PS2 address: 001957c8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00195924) */
/* WARNING: Removing unreachable block (ram,0x001959c0) */

void FUN_001957c8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  lVar3 = FUN_00187d68(DAT_002859e4);
  if (lVar3 != 0) {
    return;
  }
  iVar7 = (int)param_1;
  if (0 < *(int *)(iVar7 + 0x34)) {
    *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + -1;
  }
  *(undefined4 *)(iVar7 + 0x40) = 0;
  if (*(int *)(iVar7 + 0x20) == 7) {
    *(undefined4 *)(iVar7 + 0x18) = 3;
  }
  switch(*(undefined4 *)(iVar7 + 0x18)) {
  case 0:
  case 0xc:
    *(undefined4 *)(iVar7 + 0x18) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0;
    if (*(int *)(iVar7 + 0x48) == 0) {
      iVar9 = *(int *)(iVar7 + 0x24);
      if (*(int *)(iVar7 + 0x30) == 0) {
        trap(7);
      }
      if (iVar9 % *(int *)(iVar7 + 0x30) == 0) {
        FUN_00193c38(param_1,0,iVar9,0);
        iVar9 = *(int *)(iVar7 + 0x38);
      }
      else if (iVar9 % 10 == 0) {
        lVar3 = FUN_00195d60(param_1);
        if (lVar3 == 0) {
          FUN_00132490(*(undefined4 *)(DAT_002859e4 + 0x28));
          FUN_00132a98(*(undefined4 *)(DAT_002859e4 + 0x28));
          iVar9 = *(int *)(iVar7 + 0x38);
        }
        else {
          iVar9 = *(int *)(iVar7 + 0x38);
        }
      }
      else {
        iVar9 = *(int *)(iVar7 + 0x38);
      }
      if (iVar9 == 0) {
        *(int *)(iVar7 + 0x28) = *(int *)(iVar7 + 0x28) + 1;
        iVar9 = *(int *)(iVar7 + 0x24);
      }
      else {
        iVar9 = *(int *)(iVar7 + 0x24);
      }
      *(int *)(iVar7 + 0x24) = iVar9 + 1;
    }
    else {
      if (*(int *)(iVar7 + 0x44) != 0) {
        return;
      }
      FUN_00193c38(param_1,0,*(undefined4 *)(iVar7 + 0x24),1);
      *(undefined4 *)(iVar7 + 0x18) = 0xd;
    }
    break;
  default:
    FUN_00195b78(param_1);
    break;
  case 2:
    if (*(int *)(iVar7 + 0x30) == 0) {
      trap(7);
    }
    if ((*(int *)(iVar7 + 0x2c) % *(int *)(iVar7 + 0x30) != 0) && (*(int *)(iVar7 + 0x2c) % 10 == 0)
       ) {
      lVar3 = FUN_001965b8(param_1);
      uVar1 = 1;
      if (lVar3 == 0) {
        uVar1 = 3;
      }
      *(undefined4 *)(iVar7 + 0x18) = uVar1;
    }
    goto LAB_001959ec;
  case 3:
    FUN_00196768(param_1);
LAB_001959ec:
    FUN_00195b78(param_1);
    return;
  case 8:
    FUN_00195b78(param_1);
  case 4:
  case 5:
  case 6:
  case 7:
    *(undefined4 *)(iVar7 + 0x18) = 3;
    break;
  case 9:
    iVar4 = iVar7 + 0x38e0;
    FUN_0018a0e0();
    iVar9 = *(int *)(DAT_002859e4 + 0x54);
    *(int *)(iVar7 + 0x1c) = iVar9;
    if (iVar9 < 0) {
      *(undefined4 *)(iVar7 + 0x1c) = 0;
    }
    piVar8 = (int *)(iVar7 + *(int *)(iVar7 + 0x1c) * 4 + 0x392c);
    iVar9 = 0;
    if (*piVar8 != 0) {
      iVar5 = 0;
      iVar2 = *piVar8;
      while( true ) {
        if (*(int *)(iVar2 + iVar5 * 4 + 0xc) != 0) {
          iVar9 = iVar9 + 1;
          FUN_0019a558(iVar4);
        }
        iVar5 = iVar5 + 1;
        if (2 < iVar5) break;
        iVar2 = *piVar8;
      }
    }
    iVar2 = *(int *)(iVar7 + 0x1c);
    iVar5 = 0;
    while( true ) {
      if ((iVar5 != iVar2) && (piVar8 = (int *)(iVar7 + iVar5 * 4 + 0x392c), *piVar8 != 0)) {
        iVar6 = 0;
        iVar2 = *piVar8;
        while( true ) {
          if (*(int *)(iVar2 + iVar6 * 4 + 0xc) != 0) {
            iVar9 = iVar9 + 1;
            FUN_0019a558(iVar4);
          }
          iVar6 = iVar6 + 1;
          if (2 < iVar6) break;
          iVar2 = *piVar8;
        }
      }
      if (3 < iVar5 + 1) break;
      iVar2 = *(int *)(iVar7 + 0x1c);
      iVar5 = iVar5 + 1;
    }
    FUN_001952c8(param_1);
    FUN_0015f700(1);
    if (iVar9 < 1) {
      FUN_00195f68(param_1,0,0);
    }
    else {
      FUN_00195f68(param_1,0,iVar4);
    }
    *(undefined4 *)(iVar7 + 0x4c) = 1;
    *(undefined4 *)(iVar7 + 0x18) = 1;
    break;
  case 10:
  case 0xd:
    break;
  case 0xb:
    FUN_00186a08(0x2c4dd8,3);
    FUN_00186a08(0x2c4dd8,0xd);
    FUN_00186a08(0x2c4dd8,4);
    FUN_00104050(*(undefined4 *)(DAT_002859e4 + 0xc));
    FUN_00104210(*(undefined4 *)(DAT_002859e4 + 0xc));
    FUN_001952c8(param_1);
    *(undefined4 *)(iVar7 + 0x18) = 0xc;
  }
  return;
}

