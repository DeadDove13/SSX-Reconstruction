/* Ghidra pseudocode. PS2 address: 001ee2b0. Not validated source. */

void FUN_001ee2b0(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    iVar4 = 0;
    iVar2 = *(int *)(param_1 + 0xc);
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar4 + iVar2;
      iVar1 = *(int *)(iVar2 + 4);
      iVar4 = iVar4 + 0x34;
      (**(code **)(iVar1 + 0x24))(iVar2 + *(short *)(iVar1 + 0x20),param_2);
      if (*(int *)(param_1 + 8) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0xc);
    }
  }
  return;
}

