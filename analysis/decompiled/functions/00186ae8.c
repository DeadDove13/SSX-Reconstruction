/* Ghidra pseudocode. PS2 address: 00186ae8. Not validated source. */

void FUN_00186ae8(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  
  while( true ) {
    lVar1 = FUN_001867d0(param_1,param_2);
    iVar6 = 0;
    lVar5 = lVar1;
    if (lVar1 != 0) {
      iVar4 = *(int *)((int)lVar1 + 8);
      while( true ) {
        iVar6 = iVar6 + 1;
        uVar2 = (**(code **)(iVar4 + 0x3c))((int)lVar1 + (int)*(short *)(iVar4 + 0x38));
        iVar4 = *(int *)((int)lVar5 + 8);
        uVar3 = (**(code **)(iVar4 + 0x3c))((int)lVar5 + (int)*(short *)(iVar4 + 0x38));
        if (uVar2 <= uVar3) {
          lVar5 = lVar1;
        }
        lVar1 = FUN_00186830(param_1,lVar1,param_2);
        if (lVar1 == 0) break;
        iVar4 = *(int *)((int)lVar1 + 8);
      }
    }
    if (iVar6 < param_3) break;
    if (lVar5 != 0) {
      iVar4 = *(int *)((int)lVar5 + 8);
      (**(code **)(iVar4 + 0xc))((int)lVar5 + (int)*(short *)(iVar4 + 8),3);
    }
    if (iVar6 + -1 < param_3) {
      return;
    }
  }
  return;
}

