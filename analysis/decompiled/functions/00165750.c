/* Ghidra pseudocode. PS2 address: 00165750. Not validated source. */

int FUN_00165750(int param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  lVar1 = FUN_0025bcf8(param_1);
  if (lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}

