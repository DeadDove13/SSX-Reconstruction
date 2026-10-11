/* Ghidra pseudocode. PS2 address: 00228870. Not validated source. */

long FUN_00228870(undefined8 param_1,ulong param_2)

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
      if (*(ushort *)(iVar3 + 0x68) == param_2) {
        return 0;
      }
      *(short *)(iVar3 + 0x68) = (short)param_2;
      FUN_00229480(aiStack_60[0]);
      FUN_0022bbc8(aiStack_60[0]);
    }
  }
  return lVar1;
}

