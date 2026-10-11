/* Ghidra pseudocode. PS2 address: 00258a20. Not validated source. */

void FUN_00258a20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  
  iVar1 = param_2[1];
  if (iVar1 != 0) {
    iVar2 = param_1[1];
    iVar3 = *param_1;
    iVar6 = iVar2 * 4 + -4;
    piVar9 = (int *)(iVar1 * 4 + *param_2);
    iVar8 = iVar1 * 4 + iVar3;
    piVar14 = (int *)(iVar6 + iVar3);
    iVar15 = iVar1;
    iVar13 = iVar2;
    do {
      piVar9 = piVar9 + -1;
      iVar8 = iVar8 + -4;
      iVar4 = *piVar9;
      iVar15 = iVar15 + -1;
      if (iVar13 != 0) {
        iVar5 = *(int *)(iVar4 + 8);
        if (0 < *(int *)(*piVar14 + 8) - iVar5) {
          puVar12 = (undefined4 *)(iVar13 * 4 + iVar8);
          piVar11 = (int *)(iVar6 + iVar3);
          puVar10 = (undefined4 *)(iVar6 + iVar3);
          uVar7 = *puVar10;
          while( true ) {
            piVar11 = piVar11 + -1;
            puVar10 = puVar10 + -1;
            piVar14 = piVar14 + -1;
            *puVar12 = uVar7;
            iVar6 = iVar6 + -4;
            iVar13 = iVar13 + -1;
            puVar12 = puVar12 + -1;
            if ((iVar13 == 0) || (*(int *)(*piVar11 + 8) - iVar5 < 1)) break;
            uVar7 = *puVar10;
          }
        }
      }
      *(int *)((iVar13 + iVar15) * 4 + iVar3) = iVar4;
    } while (iVar15 != 0);
    param_1[1] = iVar2 + iVar1;
  }
  return;
}

