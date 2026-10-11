/* Ghidra pseudocode. PS2 address: 0018df90. Not validated source. */

void FUN_0018df90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar5 = param_1 + 0x10;
  iVar3 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar3 == 0) {
      trap(7);
    }
    iVar3 = (*(int *)(param_1 + 8) + iVar3 + -1) % iVar3;
    *(int *)(param_1 + 8) = iVar3;
    if (iVar3 == iVar1) break;
    iVar3 = *(int *)(iVar5 + iVar3 * 4);
    iVar2 = *(int *)(iVar3 + 0xc);
    lVar4 = (**(code **)(iVar2 + 0x1c))(iVar3 + *(short *)(iVar2 + 0x18));
    if (lVar4 != 0) {
      iVar3 = *(int *)(iVar5 + iVar1 * 4);
      iVar1 = *(int *)(iVar3 + 0xc);
      (**(code **)(iVar1 + 0x3c))(iVar3 + *(short *)(iVar1 + 0x38));
      iVar3 = *(int *)(iVar5 + *(int *)(param_1 + 8) * 4);
      iVar1 = *(int *)(iVar3 + 0xc);
      (**(code **)(iVar1 + 0x34))(iVar3 + *(short *)(iVar1 + 0x30),1);
      return;
    }
    iVar3 = *(int *)(param_1 + 4);
  }
  iVar3 = *(int *)(iVar5 + iVar1 * 4);
  iVar1 = *(int *)(iVar3 + 0xc);
  (**(code **)(iVar1 + 0x1c))(iVar3 + *(short *)(iVar1 + 0x18));
  return;
}

