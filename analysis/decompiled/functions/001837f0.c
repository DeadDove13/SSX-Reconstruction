/* Ghidra pseudocode. PS2 address: 001837f0. Not validated source. */

void FUN_001837f0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_80 [4];
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_60;
  undefined1 *puStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  iVar3 = (int)param_1;
  *(undefined4 *)(iVar3 + 0x4008) = 0;
  FUN_0025a60c(auStack_80,0,0x18);
  uStack_78 = 0;
  uStack_7c = 0x400;
  uVar1 = CreateSema(auStack_80);
  *(undefined4 *)(iVar3 + 0x4004) = uVar1;
  FUN_0025a60c(&uStack_60,0,0x30);
  uStack_60 = 0x10;
  puStack_5c = &LAB_00183900;
  uStack_54 = 0x4000;
  uStack_48 = 99;
  puStack_50 = &_mips_gp0_value;
  uStack_4c = 99;
  uStack_44 = 0;
  uStack_40 = 0;
  iStack_58 = iVar3;
  uVar2 = CreateThread(&uStack_60);
  *(int *)(iVar3 + 0x4000) = (int)uVar2;
  _StartThread(uVar2,param_1);
  return;
}

