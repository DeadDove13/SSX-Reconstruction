/* Ghidra pseudocode. PS2 address: 00241a48. Not validated source. */

undefined4 FUN_00241a48(ushort *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((uint)*param_1 == *(uint *)(&DAT_002a4f98 + param_2 * 8)) && (0 < (long)(char)param_1[4]))
     && ((long)(char)param_1[4] <= (long)*(int *)(&DAT_002a4f9c + param_2 * 8))) {
    uVar1 = 0;
  }
  return uVar1;
}

