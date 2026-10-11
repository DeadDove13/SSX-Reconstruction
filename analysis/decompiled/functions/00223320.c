/* Ghidra pseudocode. PS2 address: 00223320. Not validated source. */

void FUN_00223320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00223450();
  *(undefined4 *)(param_1 + 0xae0) = uVar1;
  return;
}

