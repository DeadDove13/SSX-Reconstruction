/* Ghidra pseudocode. PS2 address: 0023e6e0. Not validated source. */

void FUN_0023e6e0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = -1;
  iVar4 = 0;
  piVar5 = &DAT_002d0418;
  iVar3 = DAT_002c5a38;
  do {
    iVar1 = iVar4;
    if ((((*piVar5 != param_1) && (iVar1 = iVar2, *piVar5 == 0)) && (iVar2 == -1)) &&
       (iVar1 = iVar4, iVar3 != 0)) {
      iVar3 = iVar3 + -1;
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 4;
  } while (iVar4 < 0x10);
  if (iVar2 != -1) {
    iVar3 = iVar2 * 0x10;
    param_3 = DAT_002c5aa0 + param_3;
    *(undefined4 *)(&DAT_002d041c + iVar3) = param_2;
    *(int *)(&DAT_002d0420 + iVar3) = param_3;
    (&DAT_002d0418)[iVar2 * 4] = param_1;
    *(undefined4 *)(&DAT_002d0424 + iVar3) = 0;
  }
  return;
}

