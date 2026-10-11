/* Ghidra pseudocode. PS2 address: 0019a7f8. Not validated source. */

short * FUN_0019a7f8(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  psVar2 = param_1;
  sVar1 = *param_2;
  while (sVar1 != 0) {
    *param_1 = sVar1;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    sVar1 = *param_2;
  }
  *param_1 = 0;
  return psVar2;
}

