/* Ghidra pseudocode. PS2 address: 00228918. Not validated source. */

long FUN_00228918(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 auStack_30 [4];
  
  if (DAT_0029a888 == '\0') {
    lVar1 = -10;
  }
  else {
    FUN_002250c0();
    lVar1 = FUN_00229330(param_1);
    if (-1 < lVar1) {
      auStack_30[0] = 0xffffffff;
      while (lVar2 = FUN_00229690(lVar1,auStack_30), lVar2 != 0) {
        FUN_0022bab0(auStack_30[0]);
      }
    }
    FUN_002250a0();
  }
  return lVar1;
}

