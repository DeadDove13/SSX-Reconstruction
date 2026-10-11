/* Ghidra pseudocode. PS2 address: 00155ae8. Not validated source. */

void FUN_00155ae8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00156b78();
  *(undefined4 *)(*(int *)(iVar1 * 0x50 + param_1 + 0x1520) + 0x10) = param_3;
  return;
}

