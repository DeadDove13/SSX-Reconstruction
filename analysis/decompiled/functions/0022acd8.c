/* Ghidra pseudocode. PS2 address: 0022acd8. Not validated source. */

long FUN_0022acd8(undefined8 param_1,char param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int aiStack_60 [4];
  
  lVar1 = FUN_00229330();
  if (-1 < lVar1) {
    aiStack_60[0] = -1;
    while (lVar2 = FUN_00229690(lVar1,aiStack_60), lVar2 != 0) {
      iVar3 = DAT_0029a8f0 + aiStack_60[0] * 0x6c;
      if (*(char *)(iVar3 + 0x3b) == param_2) {
        return 0;
      }
      if (*(short *)(iVar3 + 0x62) == 0) {
        return 0;
      }
      *(char *)(iVar3 + 0x3b) = param_2;
      *(undefined2 *)(iVar3 + 0x66) = 0;
      FUN_00229480(aiStack_60[0]);
      FUN_0022bbc8(aiStack_60[0]);
    }
  }
  return lVar1;
}

