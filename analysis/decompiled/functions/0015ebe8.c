/* Ghidra pseudocode. PS2 address: 0015ebe8. Not validated source. */

void FUN_0015ebe8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int *piVar10;
  int *piVar11;
  char *pcVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  undefined *puStack_b0;
  int iStack_ac;
  
  FUN_0015bd30();
  iVar1 = DAT_002c473c;
  piVar11 = (int *)param_1;
  if (piVar11[0x3e3] == 1) {
    if (piVar11[0x3e5] == 0) {
      iVar13 = 1;
      do {
        uVar8 = 0x2c4728;
        if (iVar13 != 1) {
          uVar8 = 0x2c4730;
        }
        lVar6 = FUN_001609c8(uVar8,4);
        while (lVar6 != 0) {
          puStack_b0 = &DAT_002afaa8;
          iStack_ac = (int)lVar6;
          if (((iVar1 == 0) && (*(int *)(iStack_ac + 0x160) == 1)) ||
             ((iVar1 == 1 && ((piVar11[0x106] == 7 && (*(int *)(iStack_ac + 0x164) == 1)))))) {
            piVar10 = piVar11 + 0x293;
            iVar2 = piVar10[*(int *)(iStack_ac + 0x150) * 8];
            bVar3 = false;
            if (iVar2 != 0) {
              if (*(int *)(iStack_ac + 0x168) == 1) {
                bVar3 = *(int *)(iVar2 + 0x348) < 0;
                iVar4 = *(int *)(iStack_ac + 0x16c);
              }
              else {
                iVar4 = *(int *)(iStack_ac + 0x16c);
              }
              if ((iVar4 != 0) && (*(int *)(iVar2 + 0xa0) == 0)) {
                bVar3 = true;
              }
            }
            if (!bVar3) {
              if ((*(int *)(iStack_ac + 0x158) == 0) ||
                 (lVar7 = FUN_00163c68(&puStack_b0,piVar10,piVar11 + 0x303,0), lVar7 == 0)) {
                if ((*(int *)(iStack_ac + 0x154) == 0) ||
                   (lVar7 = FUN_00163c68(&puStack_b0,piVar10,piVar11 + 0x303,1), lVar7 == 0)) {
                  if (((*(int *)(iStack_ac + 0x15c) == 0) ||
                      (lVar7 = FUN_0015da60(param_1,lVar6), lVar7 != 0)) ||
                     (lVar7 = FUN_00163c68(&puStack_b0,piVar10,piVar11 + 0x303,2), lVar7 == 0))
                  goto LAB_0015ee18;
                  if ((piVar11[10] == 0) ||
                     (lVar6 = FUN_0025baa0(iStack_ac + 0x13a,piVar11 + 0x10), lVar6 != 0)) {
                    FUN_0015da00(param_1,iStack_ac + 0x13a);
                  }
                }
                else {
                  FUN_0015da00(param_1,iStack_ac + 299);
                }
              }
              else {
                FUN_0015da00(param_1,iStack_ac + 0x11c);
              }
              FUN_0015f240(&puStack_b0,2);
              break;
            }
          }
LAB_0015ee18:
          lVar6 = FUN_00160a20(uVar8,lVar6,4);
          FUN_0015f240(&puStack_b0,2);
        }
        if (1 < iVar13) goto code_r0x0015ee44;
        iVar13 = iVar13 + 1;
      } while( true );
    }
    fVar15 = (float)piVar11[3];
  }
  else {
    fVar15 = (float)piVar11[3];
  }
LAB_0015ee48:
  iVar13 = DAT_002859e4;
  iVar1 = piVar11[10];
  piVar11[3] = (int)(fVar15 + DAT_002c253c);
  iVar13 = *(int *)(iVar13 + 0x38);
  if (iVar13 == 0) {
LAB_0015eeb8:
    FUN_0015db48(param_1);
    FUN_0015d8d0(param_1);
    FUN_0015eb90(param_1);
  }
  else {
    iVar2 = *(int *)(iVar13 + 0x18);
    bVar3 = false;
    if ((iVar2 != 3) && (bVar3 = true, iVar2 != 0 && iVar2 < 10)) {
      bVar3 = *(int *)(iVar13 + 0x2c) != *(int *)(iVar13 + 0x28);
    }
    if ((bVar3) || (*piVar11 != 0)) goto LAB_0015eeb8;
    FUN_0015c8c0(param_1);
  }
  fVar15 = DAT_002c2544;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = piVar11[0x106];
  iVar13 = piVar11[0x293];
  if (iVar1 != 1) {
    if (DAT_002c473c != 0) {
      iVar13 = *(int *)(iVar13 + 0x34c);
      goto LAB_0015ef8c;
    }
    if (iVar13 == 0) goto LAB_0015ef88;
    if (*(int *)(iVar13 + 0x350) == 0x12) {
      iVar13 = *(int *)(iVar13 + 0x34c);
      goto LAB_0015ef8c;
    }
    if (piVar11[0x3e6] == 0) {
      if ((*(int *)(iVar13 + 0x34c) != 5) && (*(int *)(iVar13 + 0x34c) != 6)) {
        fVar14 = (float)piVar11[5];
        goto LAB_0015ef58;
      }
      bVar3 = DAT_002c2544 < (float)piVar11[5] + DAT_002c2540;
      piVar11[5] = (int)((float)piVar11[5] + DAT_002c2540);
    }
    else {
      fVar14 = (float)piVar11[5];
LAB_0015ef58:
      fVar15 = 0.0;
      if (fVar14 <= 0.0) {
        iVar13 = *(int *)(iVar13 + 0x34c);
        goto LAB_0015ef8c;
      }
      bVar3 = fVar14 - DAT_002c2548 < 0.0;
      piVar11[5] = (int)(fVar14 - DAT_002c2548);
    }
    if (bVar3) {
      piVar11[5] = (int)fVar15;
    }
  }
LAB_0015ef88:
  iVar13 = *(int *)(iVar13 + 0x34c);
LAB_0015ef8c:
  if ((iVar13 != 5) && (iVar13 != 6)) {
    piVar11[0x3e6] = 0;
  }
  pcVar12 = "replay cam";
  if (DAT_002c473c == 0) {
    piVar11 = &DAT_0027fc60;
    iVar13 = DAT_0027fc60;
    while (iVar13 != 0xd) {
      if (*piVar11 == iVar1) {
        pcVar12 = (char *)piVar11[1];
      }
      piVar11 = piVar11 + 2;
      iVar13 = *piVar11;
    }
  }
  switch(iVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_0015c9a8(param_1);
    break;
  default:
    FUN_0015c9a8(param_1,0x2af920);
    break;
  case 8:
    FUN_0015c9a8(param_1,0x2af950);
    break;
  case 10:
    puVar5 = (undefined4 *)FUN_0015bbb0(PTR_DAT_002c46b0,pcVar12);
    FUN_00160530(&puStack_b0,0x2afa70,0x2c4728,0x2c4730);
    uVar8 = FUN_00160570(&puStack_b0);
    uVar9 = FUN_00160580(&puStack_b0);
    FUN_00162448(*puVar5,puVar5[1],puVar5[2],uVar8);
    FUN_00164b00(0,0,0,puVar5[6],uVar9);
    FUN_0015f350(&puStack_b0,2);
    FUN_0015c9a8(param_1,0x2afa70);
  }
  return;
code_r0x0015ee44:
  fVar15 = (float)piVar11[3];
  goto LAB_0015ee48;
}

