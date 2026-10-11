/* Ghidra pseudocode. PS2 address: 00129170. Not validated source. */

uint FUN_00129170(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  
  iVar8 = *(int *)(param_2 + 0xcc);
  piVar9 = (int *)param_1;
  *piVar9 = param_2;
  iVar10 = 0;
  piVar1 = *(int **)(iVar8 * 8 + DAT_00299ce0);
  piVar9[2] = 0;
  piVar7 = piVar1 + 9;
  if (0 < *piVar1) {
    iVar8 = *piVar7;
    do {
      iVar10 = iVar10 + 1;
      iVar8 = DAT_00299ce8 + *(int *)(iVar8 + 0x24) * 0xc;
      piVar7 = piVar7 + 1;
      if (*(short *)(iVar8 + 6) == -1) {
LAB_0012928c:
        iVar8 = *piVar1;
      }
      else {
        iVar2 = piVar9[2];
        if (iVar2 < 1) {
LAB_0012925c:
          iVar6 = FUN_00223350(0x299cc8,*(undefined2 *)(iVar8 + 6));
          iVar2 = piVar9[2];
          piVar9[iVar2 + 3] = iVar6;
          piVar9[iVar2 + 7] = iVar8;
          piVar9[2] = iVar2 + 1;
          goto LAB_0012928c;
        }
        bVar3 = 0 < iVar2;
        if (piVar9[7] != iVar8) {
          piVar5 = piVar9 + 7;
          iVar6 = 1;
          while( true ) {
            piVar5 = piVar5 + 1;
            if (iVar2 <= iVar6) break;
            if (*piVar5 == iVar8) {
              bVar3 = iVar6 < iVar2;
              goto LAB_00129254;
            }
            iVar6 = iVar6 + 1;
          }
          goto LAB_0012925c;
        }
LAB_00129254:
        if (!bVar3) goto LAB_0012925c;
        iVar8 = *piVar1;
      }
      if ((iVar8 <= iVar10) || (3 < piVar9[2])) break;
      iVar8 = *piVar7;
    } while( true );
  }
  FUN_001293c8(param_1,param_3);
  uVar4 = piVar9[2];
  if (-1 < piVar9[1]) {
    uVar4 = (uint)(piVar9[1] < *(int *)piVar9[3]);
  }
  return uVar4;
}

