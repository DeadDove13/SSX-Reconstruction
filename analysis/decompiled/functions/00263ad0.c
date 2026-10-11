/* Ghidra pseudocode. PS2 address: 00263ad0. Not validated source. */

long FUN_00263ad0(int *param_1,undefined8 param_2)

{
  long lVar1;
  
  DAT_002c5c08 = 0;
  lVar1 = FUN_00264c00(param_2);
  if ((lVar1 == -1) && (DAT_002c5c08 != 0)) {
    *param_1 = DAT_002c5c08;
  }
  return lVar1;
}

