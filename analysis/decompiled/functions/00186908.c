/* Ghidra pseudocode. PS2 address: 00186908. Not validated source. */

void FUN_00186908(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_001867d0();
  while (lVar2 != 0) {
    lVar3 = FUN_00186830(param_1,lVar2,param_2);
    iVar1 = *(int *)((int)lVar2 + 8);
    (**(code **)(iVar1 + 0x14))((int)lVar2 + (int)*(short *)(iVar1 + 0x10));
    lVar2 = lVar3;
  }
  return;
}

