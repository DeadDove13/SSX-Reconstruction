/* Ghidra pseudocode. PS2 address: 0011c2f0. Not validated source. */

undefined8 FUN_0011c2f0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = 7;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_0010e148(0,(int)param_1 + 0x254);
  FUN_0011c378(param_1);
  return param_1;
}

