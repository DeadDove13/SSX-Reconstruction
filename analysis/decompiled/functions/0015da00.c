/* Ghidra pseudocode. PS2 address: 0015da00. Not validated source. */

void FUN_0015da00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  FUN_0015d890();
  FUN_0015ea60(param_1);
  iVar1 = (int)param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x410) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 1;
  FUN_0015da98(param_1,param_2);
  *(undefined4 *)(iVar1 + 0x38) = 0;
  return;
}

