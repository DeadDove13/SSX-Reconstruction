/* Ghidra pseudocode. PS2 address: 0022abf0. Not validated source. */

long FUN_0022abf0(undefined8 param_1,char param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int aiStack_60 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar1 = -10;
  }
  else {
    FUN_002250c0();
    lVar1 = FUN_00229330(param_1);
    if (-1 < lVar1) {
      aiStack_60[0] = -1;
      while( true ) {
        lVar2 = FUN_00229690(lVar1,aiStack_60);
        if (lVar2 == 0) break;
        iVar3 = DAT_0029a8f0 + aiStack_60[0] * 0x6c;
        if (*(char *)(iVar3 + 0x3b) == param_2) {
          lVar1 = 0;
          break;
        }
        if (*(short *)(iVar3 + 0x62) == 0) {
          lVar1 = 0;
          break;
        }
        *(char *)(iVar3 + 0x3b) = param_2;
        *(undefined2 *)(iVar3 + 0x66) = 0;
        FUN_00229480(aiStack_60[0]);
        FUN_0022bbc8(aiStack_60[0]);
      }
    }
    FUN_002250a0();
  }
  return lVar1;
}

