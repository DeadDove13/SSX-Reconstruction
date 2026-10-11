/* Ghidra pseudocode. PS2 address: 001e09b0. Not validated source. */

undefined4 FUN_001e09b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xb58) == 0) {
    param_2[1] = 0;
  }
  else {
    param_2[1] = *(int *)(param_1 + 0xb58);
    **(undefined4 **)(param_1 + 0xb58) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0xb54);
  iVar2 = *(int *)(param_1 + 0xb5c);
  *param_2 = 0;
  *(undefined4 **)(param_1 + 0xb58) = param_2;
  *(int *)(param_1 + 0xb5c) = iVar2 + -1;
  *(int *)(param_1 + 0xb54) = iVar1 + 1;
  return 1;
}

