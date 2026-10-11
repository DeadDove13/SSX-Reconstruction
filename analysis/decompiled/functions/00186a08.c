/* Ghidra pseudocode. PS2 address: 00186a08. Not validated source. */

void FUN_00186a08(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  FUN_001868a0(param_1,param_2);
  lVar3 = FUN_001867d0(param_1,param_2);
  while (lVar2 = lVar3, lVar2 != 0) {
    lVar3 = FUN_00186830(param_1,lVar2,param_2);
    if (lVar2 != 0) {
      iVar1 = *(int *)((int)lVar2 + 8);
      (**(code **)(iVar1 + 0xc))((int)lVar2 + (int)*(short *)(iVar1 + 8),3);
    }
  }
  return;
}

