/* Ghidra pseudocode. PS2 address: 002122e8. Not validated source. */

void FUN_002122e8(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00234e80(DAT_002852fc,0xc9);
  FUN_0019a7f8(param_2 * 0x6c + param_1 + 0x198,uVar1);
  *(undefined4 *)(param_1 + param_2 * 0x6c + 0x170) = 1;
  return;
}

