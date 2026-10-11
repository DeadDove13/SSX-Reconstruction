/* Ghidra pseudocode. PS2 address: 0022ea40. Not validated source. */

long FUN_0022ea40(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lVar2;
  int aiStack_70 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar1 = -10;
  }
  else {
    FUN_002250c0();
    lVar1 = FUN_00229330(param_1);
    if (-1 < lVar1) {
      aiStack_70[0] = -1;
      while( true ) {
        lVar2 = FUN_00229690(lVar1,aiStack_70);
        if (lVar2 == 0) break;
        *(undefined1 *)(aiStack_70[0] * 0x6c + DAT_0029a8f0 + (int)param_2 + 0x41) = param_3;
        FUN_0022ebb0(param_2,aiStack_70[0]);
        FUN_0022bd38(aiStack_70[0],param_2);
      }
    }
    FUN_002250a0();
  }
  return lVar1;
}

