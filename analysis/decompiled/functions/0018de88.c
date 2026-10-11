/* Ghidra pseudocode. PS2 address: 0018de88. Not validated source. */

void FUN_0018de88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = param_1 + 0x10;
  iVar3 = *(int *)(param_1 + 8);
  while( true ) {
    iVar3 = (iVar3 + 1) % *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) == 0) {
      trap(7);
    }
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == iVar1) break;
    iVar3 = *(int *)(iVar5 + iVar3 * 4);
    iVar2 = *(int *)(iVar3 + 0xc);
    lVar4 = (**(code **)(iVar2 + 0x1c))(iVar3 + *(short *)(iVar2 + 0x18));
    if (lVar4 != 0) {
      iVar1 = *(int *)(iVar5 + iVar1 * 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      (**(code **)(iVar3 + 0x3c))(iVar1 + *(short *)(iVar3 + 0x38));
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 8) * 4);
      iVar3 = *(int *)(iVar1 + 0xc);
      (**(code **)(iVar3 + 0x34))(iVar1 + *(short *)(iVar3 + 0x30),0);
      return;
    }
    iVar3 = *(int *)(param_1 + 8);
  }
  iVar1 = *(int *)(iVar5 + iVar1 * 4);
  iVar3 = *(int *)(iVar1 + 0xc);
  (**(code **)(iVar3 + 0x1c))(iVar1 + *(short *)(iVar3 + 0x18));
  return;
}

