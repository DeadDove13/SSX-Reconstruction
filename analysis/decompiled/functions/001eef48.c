/* Ghidra pseudocode. PS2 address: 001eef48. Not validated source. */

void FUN_001eef48(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x6610)) {
    iVar4 = 0;
    iVar2 = *(int *)(param_1 + 0x6584);
    while( true ) {
      iVar3 = iVar3 + 1;
      iVar2 = iVar4 + iVar2;
      iVar1 = *(int *)(iVar2 + 4);
      iVar4 = iVar4 + 0x14;
      (**(code **)(iVar1 + 0x1c))(iVar2 + *(short *)(iVar1 + 0x18),param_2);
      if (*(int *)(param_1 + 0x6610) <= iVar3) break;
      iVar2 = *(int *)(param_1 + 0x6584);
    }
  }
  return;
}

