/* Ghidra pseudocode. PS2 address: 0023c088. Not validated source. */

int FUN_0023c088(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0023ba54(param_2,4);
  iVar4 = *(int *)(param_1 + 8);
  if (iVar4 == 0) {
    param_1 = 0;
  }
  else {
    iVar2 = iVar4 * 8;
    piVar3 = (int *)(iVar2 + 0x10 + param_1);
    do {
      piVar3 = piVar3 + -2;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + -8;
      if (iVar4 == 0) {
        iVar2 = 0;
        iVar4 = param_1;
        goto LAB_0023c0ec;
      }
    } while (*piVar3 != iVar1);
    iVar4 = iVar2 + param_1;
LAB_0023c0ec:
    if (*(int *)(iVar4 + 0x10) == iVar1) {
      param_1 = param_1 + *(int *)(param_1 + iVar2 + 0x14);
    }
    else {
      param_1 = 0;
    }
  }
  return param_1;
}

