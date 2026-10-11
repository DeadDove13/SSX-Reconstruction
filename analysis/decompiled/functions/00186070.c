/* Ghidra pseudocode. PS2 address: 00186070. Not validated source. */

undefined8 FUN_00186070(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00185fd0();
  iVar2 = (int)param_1;
  *(undefined **)(iVar2 + 8) = &DAT_002b36a0;
  if (param_3 == 5) {
    uVar1 = FUN_00186178(param_1);
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
  }
  else {
    uVar1 = FUN_00186158(param_1);
    *(undefined4 *)(iVar2 + 0x20) = uVar1;
  }
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(*(int *)(DAT_002859e4 + 0x14) + 0x18);
  return param_1;
}

