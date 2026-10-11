/* Ghidra pseudocode. PS2 address: 00225218. Not validated source. */

int FUN_00225218(int param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = param_1 + 0xfU & 0xfffffff0;
  iVar5 = 0;
  if (DAT_0029a908[5] == 0) {
    iVar7 = 0;
    if (DAT_0029a908[3] < (int)uVar8) {
      return 0;
    }
    iVar6 = 0;
  }
  else {
    if (DAT_0029a908[5] < 0) {
      iVar9 = 8;
      iVar6 = 0;
      do {
        piVar3 = (int *)(DAT_0029a908[1] + iVar6);
        if (iVar5 == 0) {
          iVar4 = *piVar3;
          iVar7 = 0;
        }
        else {
          piVar1 = (int *)(DAT_0029a908[1] + iVar9);
          iVar7 = *piVar1 + piVar1[1];
          iVar4 = *piVar3 - iVar7;
        }
        if (DAT_0029a908[3] < iVar7 + iVar4) {
          iVar4 = DAT_0029a908[3] - iVar7;
        }
        if ((int)uVar8 <= iVar4) {
          for (iVar9 = DAT_0029a908[5]; iVar9 < iVar5; iVar9 = iVar9 + 1) {
            puVar2 = (undefined8 *)(iVar9 * 8 + DAT_0029a908[1]);
            *puVar2 = puVar2[1];
          }
          goto LAB_00225370;
        }
        iVar5 = iVar5 + -1;
        iVar9 = iVar9 + -8;
        iVar6 = iVar6 + -8;
      } while (DAT_0029a908[5] < iVar5);
    }
    iVar6 = iVar5 * 8;
    piVar3 = (int *)(DAT_0029a908[1] + iVar6 + 8);
    iVar7 = *piVar3 + piVar3[1];
    if (DAT_0029a908[3] - iVar7 < (int)uVar8) {
      return 0;
    }
  }
LAB_00225370:
  piVar3 = DAT_0029a908;
  iVar5 = DAT_0029a908[1];
  iVar9 = *DAT_0029a908;
  ((int *)(iVar5 + iVar6))[1] = uVar8;
  *(int *)(iVar5 + iVar6) = iVar7;
  iVar5 = (piVar3[3] + -8) - (iVar7 + uVar8);
  piVar3[5] = piVar3[5] + -1;
  piVar3[3] = piVar3[3] + -8;
  if (iVar5 < piVar3[4]) {
    piVar3[4] = iVar5;
  }
  return iVar9 + iVar7;
}

