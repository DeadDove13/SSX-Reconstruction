/* Ghidra pseudocode. PS2 address: 00167b88. Not validated source. */

void FUN_00167b88(int param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00169b50(param_1 + 0x498,0);
  FUN_00166448(&uStack_30,**(int **)(param_1 + 0x4a8) + 0x50);
  *(undefined4 *)(param_1 + 0x388) = uStack_30;
  *(undefined4 *)(param_1 + 0x380) = uStack_28;
  *(undefined4 *)(param_1 + 900) = uStack_2c;
  return;
}

