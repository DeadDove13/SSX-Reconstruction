/* Ghidra pseudocode. PS2 address: 00121560. Not validated source. */

bool FUN_00121560(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  piVar6 = (int *)param_1;
  fVar9 = *(float *)(*piVar6 + 0x2e0) - *(float *)(*piVar6 + 0x140);
  fVar7 = fVar9 * DAT_002c1a54 + 0.5;
  fVar8 = (float)(int)fVar7;
  if (fVar7 < fVar8) {
    fVar8 = fVar8 - 1.0;
  }
  if (piVar6[0x230] < 0) {
    if (DAT_002c1a5c < ABS(fVar9 - fVar8 * DAT_002c1a58)) {
      piVar6[0x232] = piVar6[0x232] + 1;
    }
    else {
      piVar6[0x232] = 0;
    }
  }
  else {
    piVar6[0x232] = 0;
  }
  iVar5 = *piVar6;
  bVar1 = 0x3c < piVar6[0x232];
  if (*(int *)(iVar5 + 0x34c) == 5) {
    iVar3 = piVar6[0x231];
    bVar1 = false;
LAB_001216e4:
    piVar6[0x231] = iVar3 + 1;
  }
  else {
    if ((*(int *)(iVar5 + 0x34c) == 3) && (0 < piVar6[0x232])) {
      return true;
    }
    if (DAT_0027ba88 == 0) {
      if (DAT_002c1a60 <= *(float *)(iVar5 + 0x2b8)) {
        iVar3 = piVar6[0x231];
        goto LAB_001216e4;
      }
      piVar6[0x231] = 0;
    }
    else {
      if (*(int *)(iVar5 + 0x34c) == 1) {
LAB_001216a4:
        iVar3 = *(int *)(iVar5 + 0x34c);
      }
      else {
        if (*(int *)(iVar5 + 0x34c) != 6) {
          if (1000.0 <= *(float *)(iVar5 + 0x2b8)) {
            iVar3 = piVar6[0x231];
            goto LAB_001216e4;
          }
          goto LAB_001216a4;
        }
        iVar3 = *(int *)(iVar5 + 0x34c);
      }
      bVar1 = false;
      piVar6[0x231] = 0;
      if ((iVar3 == 1) && (30.0 < *(float *)(iVar5 + 0x834c))) {
        return true;
      }
    }
  }
  bVar2 = false;
  if (!bVar1) {
    if ((float)piVar6[0x227] == 1.0) {
      if ((float)piVar6[0x231] <= 222.0) {
        iVar5 = *(int *)(iVar5 + 0x350);
        goto LAB_00121770;
      }
    }
    else if ((float)piVar6[0x231] * ((float)piVar6[0x227] / DAT_002c1a64) <= 222.0) {
      iVar5 = *(int *)(iVar5 + 0x350);
      goto LAB_00121770;
    }
  }
  bVar2 = true;
  iVar5 = *(int *)(iVar5 + 0x350);
LAB_00121770:
  if ((iVar5 < 0x16) && (0x13 < iVar5)) {
    if ((!bVar2) && (lVar4 = FUN_00121460(param_1), lVar4 == 0)) {
      return false;
    }
    lVar4 = FUN_001214e0(param_1);
    bVar2 = lVar4 == 0;
  }
  else {
    bVar2 = bVar2 && piVar6[0x230] < 0;
  }
  return bVar2;
}

