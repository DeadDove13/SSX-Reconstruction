/* Ghidra pseudocode. PS2 address: 00228528. Not validated source. */

long FUN_00228528(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int aiStack_70 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar1 = -10;
  }
  else {
    FUN_002250c0();
    lVar1 = FUN_00229330(param_1);
    if (-1 < lVar1) {
      if (param_2 < 1) {
        param_2 = 1;
      }
      aiStack_70[0] = -1;
      while( true ) {
        lVar2 = FUN_00229690(lVar1,aiStack_70);
        if (lVar2 == 0) break;
        iVar3 = DAT_0029a8f0 + aiStack_70[0] * 0x6c;
        *(int *)(iVar3 + 0x24) = param_3 * 0x10000;
        if (param_2 == 0) {
          trap(7);
        }
        *(int *)(iVar3 + 0x20) = (param_3 * 0x10000 - *(int *)(iVar3 + 0x28)) / (int)param_2;
      }
    }
    FUN_002250a0();
  }
  return lVar1;
}

