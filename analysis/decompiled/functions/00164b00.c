/* Ghidra pseudocode. PS2 address: 00164b00. Not validated source. */

void FUN_00164b00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_5 + 0x44);
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return;
}

