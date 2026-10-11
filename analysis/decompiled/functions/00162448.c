/* Ghidra pseudocode. PS2 address: 00162448. Not validated source. */

void FUN_00162448(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_4 + 0x118);
  *(undefined4 *)(iVar1 + 0x90) = param_3;
  *(undefined4 *)(iVar1 + 0x38) = param_1;
  *(undefined4 *)(iVar1 + 100) = param_2;
  return;
}

