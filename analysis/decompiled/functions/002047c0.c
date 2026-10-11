/* Ghidra pseudocode. PS2 address: 002047c0. Not validated source. */

void FUN_002047c0(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_1;
  if ((*piVar5 != 0) && (iVar1 = piVar5[2], piVar5[2] = iVar1 + -10, iVar1 + -10 < 5)) {
    if (*(short *)((int)piVar5 + 0xe) < 1) {
      pcVar3 = (code *)piVar5[4];
      iVar1 = (int)(short)piVar5[3];
    }
    else {
      uVar4 = *(undefined8 *)
               (*(short *)((int)piVar5 + 0xe) * 8 + *(int *)(param_2 + (short)piVar5[4]) + -8);
      pcVar3 = (code *)((ulong)uVar4 >> 0x20);
      iVar1 = (int)(short)uVar4 + (int)(short)piVar5[3];
    }
    lVar2 = (*pcVar3)(param_2 + iVar1,param_1);
    if (lVar2 != 0) {
      FUN_002054b0(param_1);
      return;
    }
    piVar5[2] = piVar5[2] + piVar5[1];
  }
  return;
}

