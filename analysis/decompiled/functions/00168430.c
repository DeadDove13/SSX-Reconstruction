/* Ghidra pseudocode. PS2 address: 00168430. Not validated source. */

void FUN_00168430(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48c);
  *(int *)(param_1 + 0x488) = iVar1;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x494);
  (**(code **)(*(int *)(iVar1 + 4) + 0x5c))(iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x58));
  return;
}

