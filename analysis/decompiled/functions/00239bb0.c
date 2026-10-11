/* Ghidra pseudocode. PS2 address: 00239bb0. Not validated source. */

undefined8 FUN_00239bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_002398a0(param_1,0,param_2,0,0);
  if (lVar1 == 0) {
    *(undefined1 *)param_3 = 0;
    param_3 = 0;
  }
  else {
    FUN_0025bbe4(param_3,lVar1);
  }
  return param_3;
}

