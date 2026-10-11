/* Ghidra pseudocode. PS2 address: 001990c0. Not validated source. */

void FUN_001990c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = DAT_002859e4;
  *(undefined4 *)(param_1 + 0x5d84) = 0;
  uVar1 = *(undefined4 *)(*(int *)(iVar2 + 0x14) + 0x80);
  *(undefined4 *)(param_1 + 0x5d74) = 0;
  *(int *)(param_1 + 0x5d7c) = *(int *)(param_1 + 0x5d7c) + 1;
  *(undefined4 *)(param_1 + 0x5d88) = uVar1;
  *(undefined4 *)(param_1 + 0x5d78) = 0;
  return;
}

