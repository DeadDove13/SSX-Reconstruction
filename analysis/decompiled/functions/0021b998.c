/* Ghidra pseudocode. PS2 address: 0021b998. Not validated source. */

void FUN_0021b998(int param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x60;
  FUN_0020ac28(iVar1,*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar1;
  FUN_0020b270(iVar1,param_2);
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}

