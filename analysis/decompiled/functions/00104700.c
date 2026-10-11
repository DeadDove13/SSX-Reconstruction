/* Ghidra pseudocode. PS2 address: 00104700. Not validated source. */

void FUN_00104700(int param_1,long param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_2 != 0xffff) {
    iVar6 = *(int *)((int)param_2 * 8 + DAT_00299cd4);
  }
  piVar1 = (int *)(param_1 + 0x36c);
  if (iVar6 != 0) {
    piVar4 = (int *)0x0;
    piVar2 = (int *)(param_1 + 0xc);
    piVar5 = (int *)0x0;
    iVar3 = 0;
    do {
      if (*piVar2 == iVar6) {
        *(undefined2 *)(piVar2 + 1) = 1;
        return;
      }
      iVar3 = iVar3 + 1;
      if ((piVar4 == (int *)0x0) && (*piVar2 == 0)) {
        piVar5 = piVar1;
        piVar4 = piVar2;
      }
      piVar2 = piVar2 + 2;
      piVar1 = piVar1 + 1;
    } while (iVar3 < 0x6c);
    *piVar5 = (int)param_2;
    *(undefined2 *)((int)piVar4 + 6) = 1;
    *piVar4 = iVar6;
    *(undefined2 *)(piVar4 + 1) = 1;
  }
  return;
}

