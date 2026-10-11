/* Ghidra pseudocode. PS2 address: 00150ee0. Not validated source. */

uint FUN_00150ee0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
  return *(int *)(iVar1 + 0x218) >> 1 & 1;
}

