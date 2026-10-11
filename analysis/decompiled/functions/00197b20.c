/* Ghidra pseudocode. PS2 address: 00197b20. Not validated source. */

int FUN_00197b20(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (param_1 = (undefined4 *)*param_1; param_1 != (undefined4 *)0x0;
      param_1 = (undefined4 *)*param_1) {
    iVar1 = iVar1 + 0x3fc;
  }
  return iVar1;
}

