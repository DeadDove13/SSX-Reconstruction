/* Ghidra pseudocode. PS2 address: 00228a60. Not validated source. */

long FUN_00228a60(undefined8 param_1,undefined2 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int aiStack_70 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar2 = -10;
  }
  else {
    if (param_3 < 0x4000) {
      if (param_3 < -0x4000) {
        param_3 = -0x4000;
      }
    }
    else {
      param_3 = 0x3fff;
    }
    FUN_002250c0();
    lVar2 = FUN_00229330(param_1);
    if (-1 < lVar2) {
      aiStack_70[0] = -1;
      while( true ) {
        lVar3 = FUN_00229690(lVar2,aiStack_70);
        if (lVar3 == 0) break;
        iVar1 = DAT_0029a8f0 + aiStack_70[0] * 0x6c;
        *(short *)(iVar1 + 0x12) = (short)param_3;
        *(undefined2 *)(iVar1 + 0x10) = param_2;
        FUN_0022ca48();
      }
    }
    FUN_002250a0();
  }
  return lVar2;
}

