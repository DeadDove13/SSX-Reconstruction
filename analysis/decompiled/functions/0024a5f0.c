/* Ghidra pseudocode. PS2 address: 0024a5f0. Not validated source. */

void FUN_0024a5f0(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  *(int *)(iVar1 + 0xe0) = param_4 << 4;
  *(uint *)(iVar1 + 0xd8) = param_2 & 0xfffffff | 0x20000000;
  *(int *)(iVar1 + 0xe4) = param_3 * param_4;
  *(int *)(iVar1 + 0xdc) = param_3 << 4;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
  FUN_0024a940();
  return;
}

