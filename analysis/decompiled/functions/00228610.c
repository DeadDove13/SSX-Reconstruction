/* Ghidra pseudocode. PS2 address: 00228610. Not validated source. */

long FUN_00228610(undefined8 param_1,int param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int aiStack_60 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar2 = -10;
  }
  else {
    FUN_002250c0();
    lVar2 = FUN_00229330(param_1);
    if (-1 < lVar2) {
      aiStack_60[0] = -1;
      while( true ) {
        lVar3 = FUN_00229690(lVar2,aiStack_60);
        if (lVar3 == 0) break;
        iVar1 = DAT_0029a8f0 + aiStack_60[0] * 0x6c;
        if (*(int *)(iVar1 + 0x28) == param_2 << 0x10) {
          lVar2 = 0;
          break;
        }
        *(int *)(iVar1 + 0x28) = param_2 << 0x10;
        *(undefined4 *)(iVar1 + 0x20) = 0;
        FUN_002293d0(aiStack_60[0]);
        FUN_0022be90(aiStack_60[0]);
      }
    }
    FUN_002250a0();
  }
  return lVar2;
}

