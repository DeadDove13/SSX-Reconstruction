/* Ghidra pseudocode. PS2 address: 0018d0d0. Not validated source. */

undefined8 FUN_0018d0d0(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar3 = (int)param_1;
  FUN_0018ddc0();
  *(undefined **)(iVar3 + 0x114) = &DAT_002b44d0;
  FUN_0018faf8(iVar3 + 0x248,0,iVar3 + 0x118,0,0xb,0x2b43a0);
  FUN_0018faf8(iVar3 + 0x278,1,iVar3 + 0x11c,0,0xb,0x2b43b0);
  FUN_0018faf8(iVar3 + 0x2a8,2,iVar3 + 0x120,0,0xb,0x2b43c0);
  FUN_0018faf8(iVar3 + 0x2d8,3,iVar3 + 0x124,0,0xb,0x2b43d0);
  FUN_0018faf8(iVar3 + 0x308,4,iVar3 + 0x128,0,0xb,0x2b43e0);
  FUN_0018faf8(iVar3 + 0x338,5,iVar3 + 300,0,0xb,0x2b43f8);
  FUN_0018faf8(iVar3 + 0x368,6,iVar3 + 0x130,0,0xb,0x2b4408);
  FUN_0018faf8(iVar3 + 0x398,7,iVar3 + 0x134,0,0xb,0x2b4418);
  FUN_0018ef28(iVar3 + 0x3c8,8,iVar3 + 0x13c,0x2b4428,3,0x2b42c8);
  FUN_0018ef28(iVar3 + 1000,9,iVar3 + 0x140,0x2c4f30,6,0x2b4370);
  FUN_0018ef28(iVar3 + 0x408,10,iVar3 + 0x138,0x2b4438,4,0x2b42f0);
  FUN_0018eee8(iVar3 + 0x428,0xb);
  iVar2 = DAT_002c56e8;
  uVar1 = *(undefined4 *)(DAT_002c56e8 + 0x8b6d4);
  fVar4 = *(float *)(DAT_002c56e8 + 0x8b6d8);
  *(int *)(iVar3 + 0x120) = (int)*(float *)(DAT_002c56e8 + 0x8b6e0);
  fVar6 = *(float *)(iVar2 + 0x8b6dc);
  fVar5 = *(float *)(iVar2 + 0x8b6e4);
  *(int *)(iVar3 + 0x134) = (int)fVar4;
  *(undefined4 *)(iVar3 + 0x140) = uVar1;
  *(int *)(iVar3 + 0x118) = (int)fVar6;
  *(int *)(iVar3 + 0x11c) = (int)fVar5;
  FUN_0018d378(param_1);
  FUN_0018e4d0(param_1,iVar3 + 0x398,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x248,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x278,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x2a8,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 1000,0xffffffffffffffff);
  FUN_0018e4d0(param_1,iVar3 + 0x428,0xffffffffffffffff);
  return param_1;
}

