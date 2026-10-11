/* Ghidra pseudocode. PS2 address: 00165b58. Not validated source. */

undefined8 FUN_00165b58(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  FUN_00219e30(iVar4 + 0x10);
  FUN_00219e30(iVar4 + 0x28);
  FUN_001e94d0(iVar4 + 0x40);
  *(undefined4 *)(iVar4 + 0x38c) = DAT_002c2728;
  *(undefined4 *)(iVar4 + 0x390) = 0x42c80000;
  *(undefined4 *)(iVar4 + 0x380) = 0;
  *(undefined4 *)(iVar4 + 900) = 0;
  *(undefined4 *)(iVar4 + 0x388) = 0;
  *(undefined4 *)(iVar4 + 0x394) = 0;
  *(undefined4 *)(iVar4 + 0x374) = 0;
  *(undefined4 *)(iVar4 + 0x378) = 0;
  *(undefined4 *)(iVar4 + 0x3a4) = 0;
  *(undefined4 *)(iVar4 + 0x3c8) = 0;
  *(undefined4 *)(iVar4 + 0x37c) = 0;
  FUN_001a03b0(iVar4 + 0x3cc);
  FUN_001a03b0(iVar4 + 0x400);
  FUN_001a03b0(iVar4 + 0x434);
  *(undefined4 *)(iVar4 + 0x46c) = 0;
  FUN_001697d0(iVar4 + 0x498);
  FUN_001697d0(iVar4 + 0x4c8);
  uVar3 = DAT_002c2734;
  uVar2 = DAT_002c2730;
  uVar1 = DAT_002c272c;
  *(undefined1 *)(iVar4 + 0x351) = 0;
  *(undefined1 *)(iVar4 + 0x350) = 0;
  *(undefined4 *)(iVar4 + 0x374) = 0;
  *(undefined4 *)(iVar4 + 0x36c) = uVar3;
  *(undefined4 *)(iVar4 + 0x378) = uVar1;
  *(undefined4 *)(iVar4 + 0x48c) = 0;
  DAT_00292774 = 0;
  *(undefined4 *)(iVar4 + 0x488) = 0;
  *(undefined4 *)(iVar4 + 0x37c) = uVar2;
  *(undefined4 *)(iVar4 + 0x4f0) = 0;
  *(undefined4 *)(iVar4 + 0x380) = 0;
  *(undefined4 *)(iVar4 + 900) = 0;
  *(undefined4 *)(iVar4 + 0x388) = 0;
  *(undefined4 *)(iVar4 + 0x358) = 0;
  *(undefined4 *)(iVar4 + 0x4bc) = 0;
  *(undefined4 *)(iVar4 + 0x4ec) = 0;
  *(undefined4 *)(iVar4 + 0x47c) = 0;
  *(undefined4 *)(iVar4 + 0x480) = 0;
  *(undefined4 *)(iVar4 + 0x474) = 0;
  *(undefined4 *)(iVar4 + 0x478) = 0;
  *(undefined4 *)(iVar4 + 0x470) = 0;
  *(undefined4 *)(iVar4 + 0x360) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x484) = 1;
  *(undefined4 *)(iVar4 + 0x38c) = uVar3;
  *(undefined4 *)(iVar4 + 0x4f4) = 1;
  *(undefined4 *)(iVar4 + 0x354) = 0xffffffff;
  *(undefined4 *)(iVar4 + 0x370) = 1;
  FUN_00219ed0(iVar4 + 0x28,0x2b0010,0x10);
  FUN_00219ed0(iVar4 + 0x10,0x2b0028,0x10);
  return param_1;
}

