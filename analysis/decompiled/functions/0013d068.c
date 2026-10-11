/* Ghidra pseudocode. PS2 address: 0013d068. Not validated source. */

void FUN_0013d068(undefined8 param_1)

{
  bool bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  iVar6 = (int)param_1;
  iVar3 = *(int *)(iVar6 + 0xc) + 1;
  bVar1 = iVar3 < 0x12d;
  *(int *)(iVar6 + 0xc) = iVar3;
  switch(*(undefined4 *)(iVar6 + 8)) {
  case 0:
    FUN_00111248(0,0x3f800000,*(undefined4 *)(iVar6 + 0x10));
    if (((bVar1) && (ABS(*(float *)(*(int *)(iVar6 + 0x10) + 0x18c)) != 1.0)) &&
       (DAT_002c1f7c <= *(float *)(*(int *)(iVar6 + 0x10) + 0xe0))) {
      return;
    }
    FUN_001110f0(0,*(undefined4 *)(iVar6 + 0x10));
    uVar4 = 1;
    break;
  case 1:
    FUN_001112f8(0,*(undefined4 *)(iVar6 + 0x10));
    FUN_001110f0(0,*(undefined4 *)(iVar6 + 0x10));
    FUN_00111360(0,*(undefined4 *)(iVar6 + 0x10));
    fVar2 = DAT_002c1f80;
    auVar8 = _lqc2(*(undefined1 (*) [16])(*(int *)(iVar6 + 0x10) + 0xd0));
    auVar7 = _qmtc2(DAT_002c1f80);
    auVar7 = _vmulbc(auVar8,auVar7);
    auVar7 = _sqc2(auVar7);
    *(undefined1 (*) [16])(*(int *)(iVar6 + 0x10) + 0xd0) = auVar7;
    iVar3 = *(int *)(iVar6 + 0x10);
    *(float *)(iVar3 + 0xe0) = *(float *)(iVar3 + 0xe0) * fVar2;
    if (bVar1) {
      if (*(float *)(iVar3 + 0x18c) != 0.0) {
        return;
      }
      if (*(float *)(iVar3 + 0x1a4) != 0.0) {
        return;
      }
    }
    FUN_0014cd18(*(undefined4 *)(iVar3 + 0x6cf4),0xec,0,5);
    *(undefined4 *)(iVar6 + 8) = 2;
    iVar3 = *(int *)(iVar6 + 0x10);
    *(undefined4 *)(iVar3 + 0xd0) = 0;
    *(undefined4 *)(iVar3 + 0xd4) = 0;
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0xe0) = 0;
    return;
  case 2:
    iVar3 = *(int *)(iVar6 + 0x10);
    *(undefined4 *)(iVar3 + 0xd0) = 0;
    *(undefined4 *)(iVar3 + 0xd4) = 0;
    *(undefined4 *)(iVar3 + 0xd8) = 0;
    *(undefined4 *)(iVar3 + 0xdc) = 0;
    iVar3 = *(int *)(iVar6 + 0x10);
    *(undefined4 *)(iVar3 + 0xe0) = 0;
    if ((bVar1) && (lVar5 = FUN_00150f10(*(undefined4 *)(iVar3 + 0x6cf4)), lVar5 == 0)) {
      return;
    }
    if ((DAT_0027ba88 == 5) || (DAT_0027ba88 == 3)) {
      lVar5 = FUN_00159328(*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x8440),DAT_0027ba84);
      if (lVar5 != 3) {
        iVar3 = *(int *)(*(int *)(iVar6 + 0x10) + 0x394);
        goto LAB_0013d2b4;
      }
      FUN_0013d3c0(param_1,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x394) + 0x44));
      uVar4 = *(undefined4 *)(iVar6 + 0x10);
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x10);
      if (*(int *)(iVar3 + 0x9c) < (DAT_0027b810 + 1) / 2) {
        iVar3 = *(int *)(iVar3 + 0x394);
LAB_0013d2b4:
        FUN_0013d320(param_1,*(undefined4 *)(iVar3 + 0x44));
        uVar4 = *(undefined4 *)(iVar6 + 0x10);
      }
      else {
        FUN_0013d3c0(param_1,*(undefined4 *)(*(int *)(iVar3 + 0x394) + 0x44));
        uVar4 = *(undefined4 *)(iVar6 + 0x10);
      }
    }
    FUN_0010b340(uVar4,4);
    uVar4 = 3;
    break;
  case 3:
    lVar5 = FUN_00150f10(*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x6cf4));
    if (lVar5 == 0) {
      return;
    }
    FUN_0013d500(param_1);
    uVar4 = 4;
    break;
  default:
    goto switchD_0013d0b4_caseD_4;
  }
  *(undefined4 *)(iVar6 + 8) = uVar4;
switchD_0013d0b4_caseD_4:
  return;
}

