/* Ghidra pseudocode. PS2 address: 00159178. Not validated source. */

void FUN_00159178(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = 0;
  do {
    iVar7 = iVar3 + 1;
    iVar6 = 0;
    iVar1 = *(int *)(&DAT_0027e808 + iVar3 * 0x10);
    if (0 < iVar1) {
      piVar5 = (int *)(&DAT_0027e80c + iVar3 * 0x10);
      iVar4 = iVar1;
      do {
        iVar2 = *piVar5;
        iVar4 = iVar4 + -1;
        piVar5 = piVar5 + 1;
        iVar6 = iVar6 + (uint)*(byte *)(param_3 + iVar2);
      } while (iVar4 != 0);
    }
    if (iVar1 == 0) {
      trap(7);
    }
    *(char *)(param_2 + iVar3) = (char)(iVar6 / iVar1);
    iVar3 = iVar7;
  } while (iVar7 < 4);
  return;
}

