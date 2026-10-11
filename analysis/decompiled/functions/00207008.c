/* Ghidra pseudocode. PS2 address: 00207008. Not validated source. */

void FUN_00207008(undefined8 param_1)

{
  int iVar1;
  
  FUN_00205878(param_1,DAT_002c5760);
  FUN_00205878(param_1,DAT_002c5768);
  FUN_00205878(param_1,DAT_002c5770);
  FUN_00206fe0(param_1);
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x35f88) == 0) {
    *(undefined4 *)(iVar1 + 0x35f88) = 0;
  }
  else {
    FUN_002061c0(*(int *)(iVar1 + 0x35f88),3);
    *(undefined4 *)(iVar1 + 0x35f88) = 0;
  }
  return;
}

