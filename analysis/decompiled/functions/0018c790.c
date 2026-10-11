/* Ghidra pseudocode. PS2 address: 0018c790. Not validated source. */

undefined8 FUN_0018c790(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = (int)param_1;
  FUN_0018ddc0();
  *(undefined **)(iVar2 + 0x114) = &DAT_002b45d0;
  FUN_0018f938(iVar2 + 0x138,0x2b40d0);
  FUN_0018fa10(iVar2 + 0x150,10);
  FUN_0018ebb0(iVar2 + 0x164,0,iVar2 + 0x11c,0x2b4178,0x2c4ec0,0x2c4ec8);
  FUN_0018ebb0(iVar2 + 0x188,1,iVar2 + 0x118,0x2b4188,0x2c4ec0,0x2c4ec8);
  FUN_0018fde0(0,0x43fa0000,iVar2 + 0x1ac,2,iVar2 + 0x120,0x2b4198);
  FUN_0018fde0(0,0x447a0000,iVar2 + 0x1e0,3,iVar2 + 0x124,0x2c4ef0);
  FUN_0018fde0(0x42c80000,DAT_002c29dc,iVar2 + 0x214,4,iVar2 + 0x128,0x2b41a8);
  FUN_0018ebb0(iVar2 + 0x248,5,iVar2 + 0x134,0x2b41b8,0x2c4ec0,0x2c4ec8);
  iVar1 = DAT_002859d0;
  uVar3 = *(undefined4 *)(DAT_002859d0 + 0x1c);
  *(undefined4 *)(iVar2 + 0x120) = *(undefined4 *)(DAT_002859d0 + 0x10);
  *(undefined4 *)(iVar2 + 0x11c) = uVar3;
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  *(undefined4 *)(iVar2 + 0x118) = 0;
  *(undefined4 *)(iVar2 + 0x124) = uVar3;
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  *(undefined4 *)(iVar2 + 0x134) = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(iVar2 + 0x128) = uVar3;
  FUN_0018e4d0(param_1,iVar2 + 0x138,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x150,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x164,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x188,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x1ac,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x1e0,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x214,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar2 + 0x248,0xffffffffffffffff);
  return param_1;
}

