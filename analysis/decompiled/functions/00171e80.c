/* Ghidra pseudocode. PS2 address: 00171e80. Not validated source. */

void FUN_00171e80(int param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_0017c140();
  FUN_001686c0(*(undefined4 *)(param_1 + 0xb3c),param_2);
  iVar1 = *(int *)(*(int *)(param_1 + 0xba4) + 0x40);
  (**(code **)(iVar1 + 0x24))(*(int *)(param_1 + 0xba4) + (int)*(short *)(iVar1 + 0x20),param_2);
  return;
}

