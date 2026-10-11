/* Ghidra pseudocode. PS2 address: 00156da8. Not validated source. */

void FUN_00156da8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0023a448(0x2aee08,0x177000,0x10);
  *(undefined4 *)(param_1 + 0x195c) = uVar1;
  return;
}

