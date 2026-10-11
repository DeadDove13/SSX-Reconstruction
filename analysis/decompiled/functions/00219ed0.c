/* Ghidra pseudocode. PS2 address: 00219ed0. Not validated source. */

void FUN_00219ed0(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_002369a0(param_2,param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

