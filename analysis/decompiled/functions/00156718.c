/* Ghidra pseudocode. PS2 address: 00156718. Not validated source. */

void FUN_00156718(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iStack_b0;
  uint uStack_ac;
  
  iStack_b0 = 0;
  uStack_ac = 0;
  iVar13 = 0;
  iVar14 = param_1 + 0x1508;
  iVar12 = 0;
  iVar9 = 0;
  iVar10 = param_1;
  do {
    iVar5 = param_1 + 0x1520;
    iVar15 = iVar9;
    if (-1 < *(char *)(iVar10 + 0x1508)) {
      iVar15 = iVar9 + 1;
      uVar1 = *(undefined4 *)(*(int *)(iVar5 + iVar12) + 0x10);
      if (0 < iVar9) {
        iVar8 = 0;
        do {
          if (iVar8 == iVar13) {
LAB_00156818:
            iVar8 = iVar8 + 1;
          }
          else {
            if (*(char *)(param_1 + iVar8 * 0x50 + 0x1508) < '\0') goto LAB_00156818;
            piVar2 = *(int **)(iVar13 * 0x50 + iVar5);
            piVar3 = *(int **)(iVar5 + iVar8 * 0x50);
            if (*piVar3 == *piVar2) {
              iVar7 = piVar3[4];
              if (iVar7 == piVar2[4]) {
                iVar6 = iVar7 + 1;
                iVar7 = iVar7 + 4;
                if (-1 < iVar6) {
                  iVar7 = iVar6;
                }
                piVar2[4] = iVar6 + (iVar7 >> 2) * -4;
              }
              else {
                iVar8 = iVar8 + 1;
              }
            }
            else {
              iVar8 = iVar8 + 1;
            }
          }
        } while (iVar8 < 4);
      }
      uVar4 = **(uint **)(iVar5 + iVar12);
      *(undefined4 *)(param_1 + 0x150c + iVar12) =
           *(undefined4 *)(param_1 + 0x744 + *(char *)(iVar10 + 0x1508) * 4);
      uStack_ac = uStack_ac | 1 << (uVar4 & 0x1f);
      iStack_b0 = *(int *)(param_1 + 0x1524 + iVar12);
      FUN_00158808(param_1,iVar14,param_1 + iVar9 * 0x68 + 0x127c);
      *(undefined4 *)(*(int *)(iVar5 + iVar12) + 0x10) = uVar1;
      if (*(int *)(param_1 + 0x1278) + -1 < iVar15) {
        return;
      }
    }
    iVar13 = iVar13 + 1;
    iVar14 = iVar14 + 0x50;
    iVar10 = iVar10 + 0x50;
    iVar12 = iVar12 + 0x50;
    iVar9 = iVar15;
    if (3 < iVar13) {
      puVar11 = &DAT_0027c380;
      iVar12 = 0;
      iVar10 = iStack_b0 + 100;
      iVar9 = iVar15 * 0x68 + 0x127c + param_1;
      do {
        if (((int)uStack_ac >> (*puVar11 & 0x1f) & 1U) == 0) {
          if (iStack_b0 == 0) {
            FUN_00158c78(param_1,puVar11,0,iVar9);
            iVar13 = *(int *)(param_1 + 0x1278);
          }
          else {
            FUN_00158c78(param_1,puVar11,iVar10,iVar9);
            iVar13 = *(int *)(param_1 + 0x1278);
          }
          iVar15 = iVar15 + 1;
          iVar9 = iVar9 + 0x68;
          if (iVar13 + -1 < iVar15) {
            return;
          }
        }
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 4;
        puVar11 = puVar11 + 0xf;
        if (0x17 < iVar12) {
          return;
        }
      } while( true );
    }
  } while( true );
}

