/* Ghidra pseudocode. PS2 address: 0018c210. Not validated source. */

undefined8 FUN_0018c210(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  FUN_0018ddc0();
  *(undefined **)(iVar4 + 0x114) = &DAT_002b4550;
  FUN_0018f938(iVar4 + 0x130,0x2b40c0);
  FUN_0018fa10(iVar4 + 0x148,10);
  FUN_0018c790(iVar4 + 0x15c);
  FUN_0018f450(iVar4 + 0x3c8,iVar4 + 0x15c,0x2b40d0);
  FUN_0018ebb0(iVar4 + 0x3e0,0,iVar4 + 0x118,0x2b40e0,0x2c4ec0,0x2c4ec8);
  FUN_0018ebb0(iVar4 + 0x404,1,iVar4 + 0x11c,0x2b40f0,0x2c4ec0,0x2c4ec8);
  FUN_0018ebb0(iVar4 + 0x428,2,iVar4 + 0x120,0x2b4100,0x2c4ed0,0x2c4ed8);
  FUN_0018bfe0(iVar4 + 0x44c);
  FUN_0018fde0(0x3f000000,0x40000000,iVar4 + 0xd90,3,iVar4 + 0x124,0x2b4118);
  FUN_0018ebb0(iVar4 + 0xdc4,4,iVar4 + 0x128,0x2b4130,0x2c4ee0,0x2c4ee8);
  FUN_0018ebb0(iVar4 + 0xde8,5,iVar4 + 300,0x2b4140,0x2c4ec0,0x2c4ec8);
  FUN_0018f450(iVar4 + 0xe0c,iVar4 + 0x44c,0x2b4150);
  iVar1 = DAT_002859e4;
  *(undefined4 *)(iVar4 + 0x118) = *(undefined4 *)(DAT_002859e4 + 0x68);
  iVar3 = DAT_00292774;
  uVar2 = DAT_002915ec;
  *(undefined4 *)(iVar4 + 0x11c) = *(undefined4 *)(iVar1 + 0x70);
  *(undefined4 *)(iVar4 + 0x124) = uVar2;
  *(undefined4 *)(iVar4 + 0x120) = 1;
  if (iVar3 == 1) {
    *(undefined4 *)(iVar4 + 0x128) = 1;
  }
  else {
    *(undefined4 *)(iVar4 + 0x128) = 0;
  }
  *(undefined4 *)(iVar4 + 300) = 0;
  FUN_0018e4d0(param_1,iVar4 + 0x130,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0x148,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0xe0c,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0x3c8,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0x3e0,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0x404,0xffffffffffffffff);
  if (*(int *)(DAT_002859e4 + 0x298) == 2) {
    FUN_0018e4d0(param_1,iVar4 + 0x428,0xffffffffffffffff);
  }
  FUN_0018e4d0(param_1,iVar4 + 0xd90,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0xdc4,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar4 + 0xde8,0xffffffffffffffff);
  return param_1;
}

