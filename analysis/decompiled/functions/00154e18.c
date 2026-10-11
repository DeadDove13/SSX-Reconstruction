/* Ghidra pseudocode. PS2 address: 00154e18. Not validated source. */

bool FUN_00154e18(int param_1,undefined8 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  iVar2 = FUN_00156b78();
  piVar8 = (int *)(param_1 + 0x1524 + iVar2 * 0x50);
  iVar6 = param_3 * 4 + iVar2 * 0x10;
  piVar7 = (int *)(param_1 + 0x1990 + iVar6);
  iVar6 = param_1 + iVar6;
  bVar1 = *(int *)(iVar6 + 0x1a10) < *piVar7;
  if (bVar1) {
    piVar3 = (int *)(param_1 + 0x1970 + iVar2 * 4);
    pcVar4 = (char *)(*piVar8 + 0x10 + param_3);
    iVar5 = param_1 + iVar2 * 4;
    *piVar3 = *piVar3 + 1;
    *piVar7 = *piVar7 + -1;
    *pcVar4 = *pcVar4 + -1;
    piVar8 = (int *)*piVar8;
    iVar2 = **(int **)(param_1 + iVar2 * 0x50 + 0x1520);
    *piVar8 = (int)(((float)*piVar3 / (float)*(int *)(iVar5 + 0x1980)) *
                   (float)*(int *)(iVar5 + 0x1960));
    *(char *)((int)piVar8 + param_3 + 0xc) =
         (char)(int)(((float)*piVar7 / (float)*(int *)(iVar6 + 0x19d0)) *
                    (float)(byte)(&DAT_0027c398)[iVar2 * 0x3c + param_3]);
  }
  return bVar1;
}

