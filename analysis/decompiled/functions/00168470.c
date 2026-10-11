/* Ghidra pseudocode. PS2 address: 00168470. Not validated source. */

void FUN_00168470(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00167648();
  *(undefined4 *)(param_1 + 0x494) = param_3;
  *(undefined4 *)(param_1 + 0x48c) = uVar1;
  return;
}

