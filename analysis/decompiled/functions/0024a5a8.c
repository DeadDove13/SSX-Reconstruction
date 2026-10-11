/* Ghidra pseudocode. PS2 address: 0024a5a8. Not validated source. */

void FUN_0024a5a8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(undefined4 *)(iVar1 + 0xe4) = param_3;
  *(uint *)(iVar1 + 0xd8) = param_2 & 0xfffffff | 0x20000000;
  *(undefined4 *)(iVar1 + 0xdc) = 0;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  *(undefined4 *)(iVar1 + 0xe0) = 0;
  FUN_0024a940();
  return;
}

