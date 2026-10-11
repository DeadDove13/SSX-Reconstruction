/* Ghidra pseudocode. PS2 address: 00151170. Not validated source. */

undefined8 FUN_00151170(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 0x3d4) = &DAT_002a8700;
  *(undefined **)(iVar3 + 0x1f0) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0(iVar3 + 0x20);
  *(undefined **)(iVar3 + 0x3c4) = &DAT_002bbd98;
  iVar1 = 0x15;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_001eadd0();
  FUN_001eac20(iVar3 + 0x20);
  *(undefined4 *)(iVar3 + 0x3cc) = 0;
  *(undefined4 *)(iVar3 + 0x3c8) = 0;
  *(undefined **)(iVar3 + 0x3d0) = &DAT_002ac220;
  FUN_0010e0f8(param_1);
  *(undefined **)(iVar3 + 0x3d4) = &DAT_002ae9c0;
  *(undefined **)(iVar3 + 0x3dc) = &DAT_002aebc8;
  *(undefined **)(iVar3 + 0x3e0) = &DAT_002aeb08;
  *(undefined **)(iVar3 + 0x3e4) = &DAT_002aea18;
  switch(param_2) {
  case 1:
  case 9:
    uVar2 = 1;
    break;
  default:
    uVar2 = 0xffffffff;
    break;
  case 5:
  case 0xd:
    uVar2 = 2;
    break;
  case 7:
  case 0xf:
    *(undefined4 *)(iVar3 + 0x3d8) = 0;
    return param_1;
  }
  *(undefined4 *)(iVar3 + 0x3d8) = uVar2;
  return param_1;
}

