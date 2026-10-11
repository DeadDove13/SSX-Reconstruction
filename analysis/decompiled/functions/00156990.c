/* Ghidra pseudocode. PS2 address: 00156990. Not validated source. */

void FUN_00156990(undefined8 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = 0;
  iVar9 = 0;
  iVar8 = 0;
  do {
    iVar10 = (int)param_1;
    iVar12 = iVar9 + 1;
    iVar11 = iVar8;
    if (-1 < *(char *)(iVar10 + iVar7 + 0x1508)) {
      iVar4 = iVar10 + 0x1520;
      iVar11 = iVar8 + 1;
      uVar1 = *(undefined4 *)(*(int *)(iVar4 + iVar7) + 0x10);
      if (0 < iVar8) {
        iVar7 = 0;
        do {
          if (iVar7 == iVar9) {
LAB_00156a78:
            iVar7 = iVar7 + 1;
          }
          else {
            if (*(char *)(iVar10 + iVar7 * 0x50 + 0x1508) < '\0') goto LAB_00156a78;
            piVar2 = *(int **)(iVar9 * 0x50 + iVar4);
            piVar3 = *(int **)(iVar4 + iVar7 * 0x50);
            if (*piVar3 == *piVar2) {
              iVar6 = piVar3[4];
              if (iVar6 == piVar2[4]) {
                iVar5 = iVar6 + 1;
                iVar6 = iVar6 + 4;
                if (-1 < iVar5) {
                  iVar6 = iVar5;
                }
                piVar2[4] = iVar5 + (iVar6 >> 2) * -4;
              }
              else {
                iVar7 = iVar7 + 1;
              }
            }
            else {
              iVar7 = iVar7 + 1;
            }
          }
        } while (iVar7 < 4);
      }
      iVar9 = iVar9 * 0x50;
      *(undefined4 *)(iVar10 + 0x150c + iVar9) =
           *(undefined4 *)(iVar10 + 0x744 + *(char *)(iVar10 + iVar9 + 0x1508) * 4);
      FUN_00158808(param_1,iVar10 + iVar9 + 0x1508,iVar10 + iVar8 * 0x68 + 0x127c);
      *(undefined4 *)(*(int *)(iVar4 + iVar9) + 0x10) = uVar1;
    }
    iVar7 = iVar12 * 0x50;
    iVar9 = iVar12;
    iVar8 = iVar11;
    if (3 < iVar12) {
      *(int *)(iVar10 + 0x1278) = iVar11;
      return;
    }
  } while( true );
}

