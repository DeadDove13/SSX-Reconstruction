/* Ghidra pseudocode. PS2 address: 00238ea0. Not validated source. */

void FUN_00238ea0(uint param_1,code *param_2)

{
  int iVar1;
  
  iVar1 = DAT_002a3374 + (param_1 >> 0x18) * 0x30;
  *(code **)(iVar1 + 0x28) = param_2;
  if (*(int *)(iVar1 + 8) != 0) {
    (*param_2)(param_1,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

