/* Ghidra pseudocode. PS2 address: 001276f8. Not validated source. */

undefined8 FUN_001276f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_00122128(param_1,param_2,0xf,param_3);
  iVar3 = (int)param_1;
  *(undefined **)(iVar3 + 8) = &DAT_002a9b98;
  FUN_00132d30(iVar3 + 0x70);
  uVar5 = *(undefined4 *)(param_4 + 0x14);
  uVar6 = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)(iVar3 + 0x44) = uVar5;
  *(undefined4 *)(iVar3 + 0x48) = uVar6;
  *(undefined4 *)(iVar3 + 0x4c) = 0;
  *(float *)(iVar3 + 0x50) = *(float *)(param_4 + 0xc) * 100.0;
  *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(param_4 + 8);
  for (iVar4 = 0; iVar4 < *(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x8c); iVar4 = iVar4 + 1) {
    iVar1 = FUN_00189b78(DAT_002859e4,iVar4);
    iVar2 = iVar3 + iVar4 * 2;
    *(undefined2 *)(iVar2 + 0x58) = *(undefined2 *)(iVar1 + 0xa0);
    *(undefined2 *)(iVar2 + 100) = 0;
  }
  *(int *)(iVar3 + 0xf4) = iVar3;
  FUN_00132f40(iVar3 + 0x70,*(int *)(iVar3 + 0x28) + 0xd0,*(int *)(iVar3 + 0x28) + 0xdc);
  FUN_00132090(*(undefined4 *)(DAT_002859e4 + 0x28),iVar3 + 0x70);
  return param_1;
}

