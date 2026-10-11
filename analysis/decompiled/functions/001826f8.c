/* Ghidra pseudocode. PS2 address: 001826f8. Not validated source. */

void FUN_001826f8(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar3 = (int *)(param_1 + 0x18);
    iVar1 = *piVar3;
    while( true ) {
      iVar4 = iVar4 + 1;
      (**(code **)(*(int *)(iVar1 + 0x34) + 0x24))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x20),0,0xffffffffffffffff);
      iVar1 = *piVar3;
      piVar3 = piVar3 + 1;
      iVar2 = *(int *)(iVar1 + 0x34);
      (**(code **)(iVar2 + 0x2c))(0,iVar1 + *(short *)(iVar2 + 0x28),0xffffffffffffffff);
      if (*(int *)(param_1 + 0x14) <= iVar4) break;
      iVar1 = *piVar3;
    }
  }
  return;
}

