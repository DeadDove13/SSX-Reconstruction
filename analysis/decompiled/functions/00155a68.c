/* Ghidra pseudocode. PS2 address: 00155a68. Not validated source. */

void FUN_00155a68(int param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  *(undefined1 *)(*(int *)(iVar1 * 0x50 + param_1 + 0x1520) + 4) = param_3;
  return;
}

