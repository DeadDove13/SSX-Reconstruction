/* Ghidra pseudocode. PS2 address: 00240498. Not validated source. */

bool FUN_00240498(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 auStack_40 [2];
  int iStack_38;
  
  FUN_00240370(param_1,auStack_40,(uint)auStack_40 | 4);
  lVar1 = FUN_002403d8(auStack_40[0],(uint)auStack_40 | 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(iStack_38 + 4);
  }
  return lVar1 != 0;
}

