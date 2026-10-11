/* Ghidra pseudocode. PS2 address: 0016a470. Not validated source. */

void FUN_0016a470(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xf;
  piVar2 = (int *)(param_1 + 0x290);
  iVar1 = *piVar2;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x284) + 0x44))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 0x40));
    }
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

