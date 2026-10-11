/* Ghidra pseudocode. PS2 address: 00155d30. Not validated source. */

void FUN_00155d30(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 auStack_d0 [12];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_b0;
  
  if (((*(int *)(param_1 + 0x14f0) == 3) || (*(int *)(param_1 + 0x14f0) == 5)) &&
     (iVar9 = 0, iVar6 = param_1, 0 < *(int *)(param_1 + 0x1278))) {
    do {
      if (*(char *)(iVar6 + 0x12d0) < '\0') {
        iVar8 = *(int *)(param_1 + 0x1278);
      }
      else {
        iVar8 = FUN_00189b78(DAT_002859e4,iVar9);
        if (*(int *)(iVar8 + 0x348) < 1) {
          FUN_001560d8(param_1,*(undefined1 *)(iVar6 + 0x12d0));
          iVar8 = *(int *)(param_1 + 0x1278);
        }
        else {
          iVar8 = *(int *)(param_1 + 0x1278);
        }
      }
      iVar9 = iVar9 + 1;
      iVar6 = iVar6 + 0x68;
    } while (iVar9 < iVar8);
  }
  iVar10 = 0;
  FUN_001595e8(param_1 + 0x1648);
  iVar6 = *(int *)(param_1 + 0x14f0);
  iVar9 = *(int *)(param_1 + 0x14ec);
  iVar8 = 0;
  do {
    piVar5 = (int *)(iVar8 + param_1 + 0x1518);
    iVar7 = 1;
    do {
      if (*piVar5 != 0) {
        *(undefined4 *)(param_1 + 0x1664) = 1;
      }
      *piVar5 = 0;
      iVar7 = iVar7 + -1;
      piVar5 = piVar5 + 1;
    } while (-1 < iVar7);
    iVar10 = iVar10 + 1;
    iVar8 = iVar8 + 0x50;
  } while (iVar10 < 4);
  iVar8 = 4;
  puVar2 = &DAT_0027c370;
  do {
    *puVar2 = 0xffffffff;
    iVar8 = iVar8 + -1;
    puVar2 = puVar2 + -4;
  } while (-1 < iVar8);
  iVar8 = 0;
  iStack_b0 = param_1 + iVar9 * 0x100 + 0x770;
  if (iVar6 == 3) {
LAB_00155ebc:
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1278)) {
      piVar5 = &DAT_0027c330;
      iVar9 = 0;
      do {
        iVar9 = *(int *)(param_1 + iVar9 + 0x1674);
        iVar10 = param_1 + iVar9 * 0x68 + 0x127c;
        if (*(char *)(iVar10 + 0x54) < '\0') {
          iVar10 = *(int *)(param_1 + 0x1278);
        }
        else {
          iVar7 = FUN_00156b78(param_1);
          iVar11 = iStack_b0 + 0x80;
          uVar3 = FUN_00155370(param_1,*(undefined1 *)(iVar10 + 0x54));
          FUN_0025bbe4(auStack_d0,uVar3);
          uStack_c4 = *(undefined4 *)(iVar10 + 0x50);
          uStack_c0 = **(undefined4 **)(iVar7 * 0x50 + param_1 + 0x1520);
          lVar4 = FUN_00156f00(iVar11,*(undefined4 *)(iVar9 * 0x74 + param_1 + 0x1714),auStack_d0);
          iVar9 = iVar8 * 0x10;
          if (lVar4 != 0) {
            *piVar5 = (int)*(char *)(iVar10 + 0x54);
            piVar5[3] = (int)lVar4;
            iVar8 = iVar8 + 1;
            *(int *)(&DAT_0027c338 + iVar9) = iVar11;
            piVar5 = piVar5 + 4;
            *(undefined4 *)(iVar9 + 0x27c334) = 1;
          }
          iVar10 = *(int *)(param_1 + 0x1278);
        }
        iVar6 = iVar6 + 1;
        iVar9 = iVar6 * 4;
      } while (iVar6 < iVar10);
    }
  }
  else {
    if (iVar6 < 4) {
      if (iVar6 != 2) goto LAB_0015609c;
      iVar6 = *(int *)(param_1 + 0x1278);
    }
    else {
      if (iVar6 != 4) {
        if (iVar6 != 5) goto LAB_0015609c;
        goto LAB_00155ebc;
      }
      iVar6 = *(int *)(param_1 + 0x1278);
    }
    iVar9 = 0;
    if (0 < iVar6) {
      piVar12 = (int *)(param_1 + 0x1674);
      piVar5 = &DAT_0027c330;
      do {
        iVar6 = *piVar12;
        iVar10 = param_1 + iVar6 * 0x68 + 0x127c;
        if (*(char *)(iVar10 + 0x54) < '\0') {
          iVar6 = *(int *)(param_1 + 0x1278);
        }
        else {
          iVar7 = FUN_00156b78(param_1);
          uVar3 = FUN_00155370(param_1,*(undefined1 *)(iVar10 + 0x54));
          FUN_0025bbe4(auStack_d0,uVar3);
          uStack_c4 = *(undefined4 *)(iVar10 + 0x50);
          uStack_c0 = **(undefined4 **)(iVar7 * 0x50 + param_1 + 0x1520);
          lVar4 = FUN_00156f00(iStack_b0,*(undefined4 *)(param_1 + iVar6 * 4 + 0x168c),auStack_d0);
          iVar6 = iVar8 * 0x10;
          if (lVar4 != 0) {
            cVar1 = *(char *)(iVar10 + 0x54);
            piVar5[3] = (int)lVar4;
            *piVar5 = (int)cVar1;
            *(undefined4 *)(iVar6 + 0x27c334) = 0;
            iVar8 = iVar8 + 1;
            piVar5 = piVar5 + 4;
            *(int *)(&DAT_0027c338 + iVar6) = iStack_b0;
          }
          iVar6 = *(int *)(param_1 + 0x1278);
        }
        iVar9 = iVar9 + 1;
        piVar12 = piVar12 + 1;
      } while (iVar9 < iVar6);
    }
  }
LAB_0015609c:
  if (0 < iVar8) {
    *(undefined4 *)(param_1 + 0x1664) = 1;
  }
  return;
}

