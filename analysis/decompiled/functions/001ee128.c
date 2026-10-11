/* Ghidra pseudocode. PS2 address: 001ee128. Not validated source. */

void FUN_001ee128(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar3 + 8)) {
    iVar5 = 0;
    iVar2 = *(int *)(iVar3 + 0xc);
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar2 = iVar5 + iVar2;
      iVar1 = *(int *)(iVar2 + 4);
      iVar5 = iVar5 + 0x34;
      (**(code **)(iVar1 + 0x44))(iVar2 + *(short *)(iVar1 + 0x40),param_1,param_2);
      if (*(int *)(iVar3 + 8) <= iVar4) break;
      iVar2 = *(int *)(iVar3 + 0xc);
    }
  }
  return;
}

