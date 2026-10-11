/* Ghidra pseudocode. PS2 address: 00170990. Not validated source. */

void FUN_00170990(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00165b00();
  *(undefined4 *)(param_1 + 0xb48) = uVar1;
  return;
}

