/* Ghidra pseudocode. PS2 address: 00204520. Not validated source. */

long FUN_00204520(int param_1,char param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int aiStack_60 [4];
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  if (DAT_0029a888 == '\0') {
    lVar2 = -10;
  }
  else {
    FUN_002250c0();
    lVar2 = FUN_00229330(uVar1);
    if (-1 < lVar2) {
      aiStack_60[0] = -1;
      while( true ) {
        lVar3 = FUN_00229690(lVar2,aiStack_60);
        if (lVar3 == 0) break;
        iVar4 = DAT_0029a8f0 + aiStack_60[0] * 0x6c;
        if (*(char *)(iVar4 + 0x3b) == param_2) {
          lVar2 = 0;
          break;
        }
        if (*(short *)(iVar4 + 0x62) == 0) {
          lVar2 = 0;
          break;
        }
        *(char *)(iVar4 + 0x3b) = param_2;
        *(undefined2 *)(iVar4 + 0x66) = 0;
        FUN_00229480(aiStack_60[0]);
        FUN_0022bbc8(aiStack_60[0]);
      }
    }
    FUN_002250a0();
  }
  return lVar2;
}

