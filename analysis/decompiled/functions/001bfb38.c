/* Ghidra pseudocode. PS2 address: 001bfb38. Not validated source. */

void FUN_001bfb38(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [128];
  
  uVar2 = DAT_002c3560;
  uStack_120 = 0x3f800000;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_11c = 0;
  uStack_10c = 0x3f800000;
  uStack_fc = 0;
  uStack_118 = 0;
  uStack_108 = 0;
  uStack_f8 = 0x3f800000;
  uStack_114 = 0;
  uStack_104 = 0;
  uStack_f4 = 0;
  iVar3 = DAT_002859e4 + *(int *)(DAT_002859e4 + 0x290) * 0x80 + 0x90;
  uStack_f0 = *(undefined4 *)(iVar3 + 0x20);
  uStack_ec = *(undefined4 *)(iVar3 + 0x24);
  uStack_e8 = *(undefined4 *)(iVar3 + 0x28);
  uStack_e4 = *(undefined4 *)(iVar3 + 0x2c);
  FUN_001bd9c0(auStack_e0);
  uVar1 = DAT_002913c4;
  FUN_0011ed18(0x295e90,0);
  FUN_0011ecf8(0x295e90,1);
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(uVar2,0x295e90,2,0);
  FUN_0021a7e8(param_1,&uStack_120,auStack_e0);
  FUN_0011ed28(uVar2,0x295e90,0,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ecf8(0x295e90,0);
  FUN_0011ed18(0x295e90,uVar1);
  return;
}

