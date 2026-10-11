/* Ghidra pseudocode. PS2 address: 00106178. Not validated source. */

void FUN_00106178(int *param_1,undefined8 param_2)

{
  int iVar1;
  uint uStack_70;
  uint uStack_6c;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  
  iVar1 = *param_1;
  *(undefined4 *)(iVar1 + 0x10) = 0x380;
  *(undefined4 *)(iVar1 + 0x14) = 0xdeadbef8;
  FUN_001973f0(param_2,iVar1 + 0x10,0x380);
  uStack_70 = (uint)(*(int *)(*param_1 + 0x6cf4) != 0);
  uStack_6c = (uint)(*(int *)(*param_1 + 0x6cf8) != 0);
  FUN_001973f0(param_2,&uStack_70,8);
  iVar1 = *(int *)(*param_1 + 0x6cf4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 0x6cf8);
  }
  else {
    FUN_0014bf30(iVar1,param_2);
    iVar1 = *(int *)(*param_1 + 0x6cf8);
  }
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  else {
    FUN_0014bf30(iVar1,param_2);
    iVar1 = *param_1;
  }
  FUN_0010e620(iVar1 + 0x8300,param_2);
  FUN_00138460(*param_1 + 0x8370,param_2);
  FUN_0013f570(param_1 + 0x120,param_2);
  FUN_001409b0(param_1 + 300,param_2);
  FUN_001416a8(param_1 + 0x130,param_2);
  FUN_00145580(param_1 + 0x13c,param_2);
  FUN_00145b60(param_1 + 0x17c,param_2);
  FUN_00139248(param_1 + 0x184,param_2);
  FUN_00138da0(param_1 + 0x18c,param_2);
  FUN_0013d720(param_1 + 0x19c,param_2);
  FUN_0013a800(param_1 + 0x1a8,param_2);
  FUN_00139cf8(param_1 + 0x1bc,param_2);
  FUN_0013adb8(param_1 + 0x1c0,param_2);
  FUN_0013a2c8(param_1 + 0x1c4,param_2);
  FUN_0013e4c8(param_1 + 0x1cc,param_2);
  FUN_0013bd80(param_1 + 0x1d4,param_2);
  FUN_0013cb20(param_1 + 0x1f8,param_2);
  FUN_0013d9f8(param_1 + 0x214,param_2);
  uStack_60 = FUN_0019c9a8(0x28acf8,*(undefined4 *)(*param_1 + 0x82f0));
  uStack_5e = FUN_0019c9e8(0x28acf8,*(undefined4 *)(*param_1 + 0x82f4));
  FUN_001973f0(param_2,&uStack_60,4);
  return;
}

