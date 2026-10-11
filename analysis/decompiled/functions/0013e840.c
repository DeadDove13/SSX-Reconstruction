/* Ghidra pseudocode. PS2 address: 0013e840. Not validated source. */

void FUN_0013e840(int param_1)

{
  int iVar1;
  
  FUN_0010e260(*(int *)(param_1 + 0x20) + 0x8300);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x174) = 0x1a;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
  *(undefined4 *)(iVar1 + 0x178) = 0;
  return;
}

