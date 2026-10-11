/* Ghidra pseudocode. PS2 address: 0012ad28. Not validated source. */

undefined8 FUN_0012ad28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00122180();
  iVar2 = 0xf;
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002a9518;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  iVar2 = 0xf;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != -1);
  uVar1 = FUN_00197d80(param_3,param_3);
  *(undefined4 *)(iVar3 + 0x48) = uVar1;
  FUN_0012ae78(param_1);
  FUN_001978a0(param_3,iVar3 + 0x2c,0x14);
  return param_1;
}

