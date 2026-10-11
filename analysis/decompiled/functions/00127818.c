/* Ghidra pseudocode. PS2 address: 00127818. Not validated source. */

undefined8 FUN_00127818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00122180();
  iVar1 = (int)param_1;
  iVar2 = iVar1 + 0x70;
  *(undefined **)(iVar1 + 8) = &DAT_002a9b98;
  FUN_00132d30(iVar2);
  FUN_001978a0(param_3,iVar1 + 0x30,0x40);
  *(int *)(iVar1 + 0xf4) = iVar1;
  FUN_00132f40(iVar2,*(int *)(iVar1 + 0x28) + 0xd0,*(int *)(iVar1 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar2);
  return param_1;
}

