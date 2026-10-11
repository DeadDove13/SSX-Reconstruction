/* Ghidra pseudocode. PS2 address: 00206990. Not validated source. */

void FUN_00206990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x32000) = &DAT_002bd140;
  if (*(int *)(iVar1 + 0x35f88) != 0) {
    FUN_002061c0(*(int *)(iVar1 + 0x35f88),3);
  }
  FUN_00204ab8(iVar1 + 0x35350,2);
  FUN_0020a128(param_1,param_2);
  return;
}

