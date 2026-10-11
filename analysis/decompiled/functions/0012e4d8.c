/* Ghidra pseudocode. PS2 address: 0012e4d8. Not validated source. */

undefined8
FUN_0012e4d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  FUN_00122128(param_1,param_2,0x15,param_3);
  iVar2 = (int)param_1;
  iVar3 = iVar2 + 0x50;
  *(undefined **)(iVar2 + 8) = &DAT_002a9090;
  FUN_00132d30(iVar3);
  fVar4 = *(float *)(param_4 + 0x10);
  *(int *)(iVar2 + 0x34) = (int)*(short *)(param_4 + 8);
  *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(param_4 + 0xc);
  *(int *)(iVar2 + 0x48) = (int)(fVar4 * 60.0);
  uVar1 = *(undefined4 *)(param_5 + 0x390);
  *(int *)(iVar2 + 0x4c) = param_5;
  *(undefined4 *)(iVar2 + 0x40) = uVar1;
  *(int *)(iVar2 + 0xd4) = iVar2;
  *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(param_5 + 0x8440);
  FUN_00132f40(iVar3,*(int *)(iVar2 + 0x28) + 0xd0,*(int *)(iVar2 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar3);
  return param_1;
}

