/* Ghidra pseudocode. PS2 address: 0025b548. Not validated source. */

long FUN_0025b548(int *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  DAT_002c5c08 = 0;
  lVar1 = FUN_00264ce8(param_2,param_3);
  if ((lVar1 == -1) && (DAT_002c5c08 != 0)) {
    *param_1 = DAT_002c5c08;
  }
  return lVar1;
}

