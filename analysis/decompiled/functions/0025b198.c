/* Ghidra pseudocode. PS2 address: 0025b198. Not validated source. */

long FUN_0025b198(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_002c5c08 = 0;
  lVar1 = FUN_00264c18(param_2);
  if ((lVar1 == -1) && (DAT_002c5c08 != 0)) {
    *param_1 = DAT_002c5c08;
  }
  return lVar1;
}

