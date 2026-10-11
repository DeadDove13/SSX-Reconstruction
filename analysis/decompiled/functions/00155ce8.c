/* Ghidra pseudocode. PS2 address: 00155ce8. Not validated source. */

void FUN_00155ce8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  *(undefined4 *)(*(int *)(iVar1 * 0x50 + param_1 + 0x1524) + 0x14) = param_3;
  return;
}

