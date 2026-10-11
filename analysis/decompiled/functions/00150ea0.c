/* Ghidra pseudocode. PS2 address: 00150ea0. Not validated source. */

bool FUN_00150ea0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
  return *(float *)(iVar1 + 0x1e8) == 0.0;
}

