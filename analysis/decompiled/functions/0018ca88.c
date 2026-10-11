/* Ghidra pseudocode. PS2 address: 0018ca88. Not validated source. */

undefined8 FUN_0018ca88(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = iVar3 + 0x1a4;
  FUN_0018ddc0();
  *(undefined **)(iVar3 + 0x114) = &DAT_002b4510;
  FUN_0018f938(iVar3 + 0x120,0x2b41e8);
  FUN_0018fa10(iVar3 + 0x138,10);
  FUN_0018fde0(DAT_002c29e0,0x3f800000,iVar3 + 0x14c,0xffffffffffffffff,0x2859d8,0x2b41f8);
  FUN_0018ebb0(iVar3 + 0x180,0,iVar3 + 0x118,0x2b4208,0x2c4ec0,0x2c4ec8);
  FUN_0018faf8(iVar4,1,iVar3 + 0x11c,1,6,0x2b4218);
  FUN_0018f760(iVar3 + 0x1d4,2,0x2b4230,0);
  uVar2 = FUN_00187ce8(DAT_002859e4);
  iVar1 = DAT_002859e4;
  *(undefined4 *)(iVar3 + 0x118) = uVar2;
  *(undefined4 *)(iVar3 + 0x11c) = 1;
  FUN_0018fb80(iVar4,1,*(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x8c));
  FUN_0018e4d0(param_1,iVar3 + 0x120,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x138,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x14c,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x180,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x1d4,0xffffffffffffffff);
  return param_1;
}

