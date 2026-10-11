/* Ghidra pseudocode. PS2 address: 0023bed8. Not validated source. */

void FUN_0023bed8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  if (DAT_002a360c < param_1) {
    piVar8 = &DAT_002a360c;
    iVar1 = 1;
    do {
      iVar10 = iVar1;
      piVar8 = piVar8 + 1;
      iVar1 = iVar10 + 1;
    } while (*piVar8 < param_1);
  }
  else {
    iVar10 = 0;
  }
  do {
    iVar1 = *(int *)(&DAT_002a3608 + iVar10 * 4);
    iVar5 = iVar1;
    while (iVar5 < param_1) {
      iVar9 = iVar5 - iVar1;
      uVar2 = *(undefined4 *)(iVar5 * 4 + param_3);
      iVar3 = *(int *)(iVar5 * 4 + param_2);
      do {
        iVar6 = iVar9 * 4;
        iVar7 = (iVar9 + iVar1) * 4;
        iVar4 = *(int *)(iVar6 + param_2);
        if (iVar3 <= iVar4) break;
        *(int *)(iVar7 + param_2) = iVar4;
        iVar9 = iVar9 - iVar1;
        *(undefined4 *)(iVar7 + param_3) = *(undefined4 *)(iVar6 + param_3);
      } while (-1 < iVar9);
      iVar9 = (iVar9 + iVar1) * 4;
      *(int *)(iVar9 + param_2) = iVar3;
      *(undefined4 *)(iVar9 + param_3) = uVar2;
      iVar5 = iVar5 + 1;
    }
    iVar10 = iVar10 + -1;
    if (iVar1 < 2) {
      return;
    }
  } while( true );
}

