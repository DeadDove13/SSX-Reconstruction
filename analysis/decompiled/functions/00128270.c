/* Ghidra pseudocode. PS2 address: 00128270. Not validated source. */

undefined8 FUN_00128270(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00122128(param_1,param_2,0x12,param_3);
  iVar1 = (int)param_1;
  iVar2 = iVar1 + 0x70;
  *(undefined **)(iVar1 + 8) = &DAT_002a99b0;
  FUN_00132d30(iVar2);
  uVar3 = *(undefined4 *)(param_4 + 0x14);
  uVar4 = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(iVar1 + 0x44) = uVar3;
  *(undefined4 *)(iVar1 + 0x48) = uVar4;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(float *)(iVar1 + 0x50) = *(float *)(param_4 + 0xc) * 100.0;
  *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_4 + 0x1c);
  FUN_0023bbd0(iVar1 + 0x60,0,6);
  *(int *)(iVar1 + 0xf4) = iVar1;
  FUN_00132f40(iVar2,*(int *)(iVar1 + 0x28) + 0xd0,*(int *)(iVar1 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar2);
  return param_1;
}

