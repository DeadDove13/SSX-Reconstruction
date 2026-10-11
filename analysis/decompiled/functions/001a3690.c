/* Ghidra pseudocode. PS2 address: 001a3690. Not validated source. */

void FUN_001a3690(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0xe;
  piVar2 = (int *)(param_1 + 0xc);
  iVar1 = *piVar2;
  while( true ) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
    (**(code **)(*(int *)(iVar1 + 0x18) + 0x3c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x18) + 0x38));
    if (iVar3 < 0) break;
    iVar1 = *piVar2;
  }
  return;
}

