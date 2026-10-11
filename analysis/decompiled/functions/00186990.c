/* Ghidra pseudocode. PS2 address: 00186990. Not validated source. */

void FUN_00186990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_001867d0();
  if (lVar2 != 0) {
    iVar1 = *(int *)((int)lVar2 + 8);
    while( true ) {
      (**(code **)(iVar1 + 0x1c))((int)lVar2 + (int)*(short *)(iVar1 + 0x18));
      lVar2 = FUN_00186830(param_1,lVar2,param_2);
      if (lVar2 == 0) break;
      iVar1 = *(int *)((int)lVar2 + 8);
    }
  }
  return;
}

