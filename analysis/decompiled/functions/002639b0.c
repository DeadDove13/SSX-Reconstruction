/* Ghidra pseudocode. PS2 address: 002639b0. Not validated source. */

long FUN_002639b0(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  DAT_002c5c08 = 0;
  lVar1 = FUN_00264ae0(param_2,param_3,param_4);
  if ((lVar1 == -1) && (DAT_002c5c08 != 0)) {
    *param_1 = DAT_002c5c08;
  }
  return lVar1;
}

