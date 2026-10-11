/* Ghidra pseudocode. PS2 address: 00131f20. Not validated source. */

undefined4 FUN_00131f20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) * 4 + *(int *)(param_1 + 8));
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return uVar1;
}

