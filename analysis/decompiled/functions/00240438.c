/* Ghidra pseudocode. PS2 address: 00240438. Not validated source. */

undefined8 FUN_00240438(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [2];
  undefined4 *puStack_38;
  
  uVar2 = 0;
  FUN_00240370(param_1,auStack_40,(uint)auStack_40 | 4);
  lVar1 = FUN_002403d8(auStack_40[0],(uint)auStack_40 | 8);
  if (lVar1 != 0) {
    uVar2 = FUN_00240398(*puStack_38,param_1);
  }
  return uVar2;
}

