/* Ghidra pseudocode. PS2 address: 00154cc8. Not validated source. */

undefined4 FUN_00154cc8(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = FUN_00156b78();
  piVar5 = (int *)(param_1 + 0x1524 + iVar2 * 0x50);
  piVar7 = (int *)(param_1 + 0x1970 + iVar2 * 4);
  iVar1 = *piVar5;
  if (0 < *piVar7) {
    iVar3 = param_3 * 4 + iVar2 * 0x10;
    piVar6 = (int *)(param_1 + 0x1990 + iVar3);
    piVar8 = (int *)(param_1 + 0x19d0 + iVar3);
    if (*piVar6 < *piVar8) {
      *piVar7 = *piVar7 + -1;
      pcVar4 = (char *)(iVar1 + 0x10 + param_3);
      iVar3 = param_1 + iVar2 * 4;
      *piVar6 = *piVar6 + 1;
      *pcVar4 = *pcVar4 + '\x01';
      piVar5 = (int *)*piVar5;
      iVar1 = **(int **)(param_1 + iVar2 * 0x50 + 0x1520);
      *piVar5 = (int)(((float)*piVar7 / (float)*(int *)(iVar3 + 0x1980)) *
                     (float)*(int *)(iVar3 + 0x1960));
      *(char *)((int)piVar5 + param_3 + 0xc) =
           (char)(int)(((float)*piVar6 / (float)*piVar8) *
                      (float)(byte)(&DAT_0027c398)[iVar1 * 0x3c + param_3]);
      return 1;
    }
  }
  return 0;
}

