/* Ghidra pseudocode. PS2 address: 00240528. Not validated source. */

undefined2 FUN_00240528(undefined8 param_1)

{
  long lVar1;
  undefined2 uVar2;
  undefined4 auStack_30 [2];
  int *piStack_28;
  
  FUN_00240370(param_1,auStack_30,(uint)auStack_30 | 4);
  uVar2 = 0;
  lVar1 = FUN_002403d8(auStack_30[0],(uint)auStack_30 | 8);
  if (lVar1 != 0) {
    uVar2 = *(undefined2 *)(*piStack_28 + 0xc);
  }
  return uVar2;
}

