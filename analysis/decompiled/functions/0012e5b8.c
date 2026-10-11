/* Ghidra pseudocode. PS2 address: 0012e5b8. Not validated source. */

undefined8 FUN_0012e5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x50;
  FUN_00122180();
  *(undefined **)(iVar2 + 8) = &DAT_002a9090;
  FUN_00132d30(iVar3);
  FUN_001978a0(param_3,iVar2 + 0x2c,0x20);
  uVar1 = FUN_00189b78(DAT_002859e4,*(undefined4 *)(iVar2 + 0x40));
  *(int *)(iVar2 + 0xd4) = iVar2;
  *(undefined4 *)(iVar2 + 0x4c) = uVar1;
  FUN_00132f40(iVar3,*(int *)(iVar2 + 0x28) + 0xd0,*(int *)(iVar2 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar3);
  return param_1;
}

