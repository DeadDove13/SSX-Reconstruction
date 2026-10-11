/* Ghidra pseudocode. PS2 address: 0017aa20. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0017aa20(undefined8 param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  FUN_00168a98();
  iVar7 = (int)param_1;
  *(undefined1 *)(iVar7 + 0x298) = param_3;
  *(int *)(iVar7 + 0x334) = param_2;
  *(undefined4 *)(iVar7 + 0x29c) = 0;
  *(undefined4 *)(iVar7 + 0x290) = 0;
  *(undefined4 *)(iVar7 + 0x2c8) = 0;
  *(undefined **)(iVar7 + 0x284) = &DAT_002b1670;
  *(undefined4 *)(iVar7 + 0x2a0) = 0xffffffff;
  FUN_0017be90(param_1);
  *(undefined4 *)(iVar7 + 0x340) = 0;
  FUN_001e93b8(iVar7 + 0x294);
  FUN_0017af68(param_1);
  uVar6 = DAT_002c805c;
  uVar5 = DAT_002c8058;
  uVar4 = _DAT_002c8050;
  uVar3 = DAT_002c801c;
  uVar1 = DAT_002c8018;
  uVar2 = _DAT_002c8010;
  if (*(int *)(param_2 + 0xb38) == 5) {
    *(int *)(iVar7 + 0x2b0) = (int)_DAT_002c8050;
    *(int *)(iVar7 + 0x2b4) = (int)((ulong)uVar4 >> 0x20);
    *(undefined4 *)(iVar7 + 0x2b8) = uVar5;
    *(undefined4 *)(iVar7 + 700) = uVar6;
  }
  else {
    *(int *)(iVar7 + 0x2b0) = (int)_DAT_002c8010;
    *(int *)(iVar7 + 0x2b4) = (int)((ulong)uVar2 >> 0x20);
    *(undefined4 *)(iVar7 + 0x2b8) = uVar1;
    *(undefined4 *)(iVar7 + 700) = uVar3;
  }
  uVar1 = DAT_002c28c0;
  *(int *)(iVar7 + 0x300) = (int)*(undefined8 *)(iVar7 + 0x2b0);
  *(int *)(iVar7 + 0x304) = (int)((ulong)*(undefined8 *)(iVar7 + 0x2b0) >> 0x20);
  *(undefined4 *)(iVar7 + 0x308) = *(undefined4 *)(iVar7 + 0x2b8);
  *(undefined4 *)(iVar7 + 0x30c) = *(undefined4 *)(iVar7 + 700);
  *(undefined4 *)(iVar7 + 0x2e4) = 0;
  *(undefined4 *)(iVar7 + 0x310) = uVar1;
  *(undefined4 *)(iVar7 + 0x2c4) = uVar1;
  *(undefined4 *)(iVar7 + 0x2c0) = 0;
  *(undefined4 *)(iVar7 + 0x2f0) = 0;
  *(undefined4 *)(iVar7 + 0x2f4) = 0;
  uVar3 = DAT_002c803c;
  uVar1 = DAT_002c8038;
  uVar2 = _DAT_002c8030;
  *(int *)(iVar7 + 0x2d0) = (int)_DAT_002c8030;
  *(int *)(iVar7 + 0x2d4) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar7 + 0x2d8) = uVar1;
  *(undefined4 *)(iVar7 + 0x2dc) = uVar3;
  uVar1 = DAT_002c28c4;
  *(int *)(iVar7 + 800) = (int)*(undefined8 *)(iVar7 + 0x2d0);
  *(int *)(iVar7 + 0x324) = (int)((ulong)*(undefined8 *)(iVar7 + 0x2d0) >> 0x20);
  *(undefined4 *)(iVar7 + 0x328) = *(undefined4 *)(iVar7 + 0x2d8);
  *(undefined4 *)(iVar7 + 0x32c) = *(undefined4 *)(iVar7 + 0x2dc);
  *(undefined4 *)(iVar7 + 0x330) = uVar1;
  *(undefined4 *)(iVar7 + 0x2e0) = uVar1;
  return param_1;
}

