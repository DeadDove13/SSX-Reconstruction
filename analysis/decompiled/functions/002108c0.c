/* Ghidra pseudocode. PS2 address: 002108c0. Not validated source. */

void FUN_002108c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8) + *(int *)(param_2 + -0x10) * 0x10;
  if (*(int *)(iVar1 + 4) == -0x10) {
    trap(7);
    trap(7);
  }
  *(undefined4 *)(param_2 + -0xc) = *(undefined4 *)(iVar1 + 8);
  *(int *)(iVar1 + 8) = param_2 + -0x10;
  return;
}

