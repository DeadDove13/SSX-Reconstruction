/* Ghidra pseudocode. PS2 address: 00255cb0. Not validated source. */

int FUN_00255cb0(void)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_002a5d2c)();
  return iVar1 + 4;
}

