/* Ghidra pseudocode. PS2 address: 0012ec38. Not validated source. */

undefined8 FUN_0012ec38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = iVar3 + 0x30;
  FUN_00122180();
  *(undefined **)(iVar3 + 8) = &DAT_002a8f48;
  FUN_001dfb30(iVar4);
  uVar1 = FUN_00197d80(param_3,param_3);
  *(undefined4 *)(iVar3 + 0x2c) = uVar1;
  FUN_001e0428(iVar4,param_3);
  iVar2 = *(int *)(iVar3 + 0x2c) + 8;
  if (*(int *)(iVar3 + 0x2c) == 0) {
    iVar2 = 0;
  }
  FUN_001dfb38(iVar4,*(undefined4 *)(iVar3 + 0x28),iVar2);
  return param_1;
}

