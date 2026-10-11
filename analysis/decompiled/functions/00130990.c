/* Ghidra pseudocode. PS2 address: 00130990. Not validated source. */

void FUN_00130990(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_14a0 [5152];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_00130728();
  uVar1 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  FUN_0019aa08(auStack_14a0);
  FUN_0019af18(auStack_14a0,uVar1);
  FUN_0019ae30(auStack_14a0);
  uStack_50 = 0x3f800000;
  uStack_44 = 0x3f800000;
  uStack_4c = 0x3f800000;
  uStack_48 = 0x3f800000;
  uStack_70 = 0x3f8000003f800000;
  uStack_68 = 0x3f8000003f800000;
  FUN_0019b0b8(DAT_002c1c04,DAT_002c1c04,auStack_14a0);
  uStack_80 = 1;
  uStack_7c = 0;
  FUN_0019af40(0x43020000,0x43480000,0x43b40000,0x43160000,auStack_14a0);
  uVar2 = FUN_00234e80(DAT_002852fc,0x6c);
  FUN_0019af58(auStack_14a0,uVar2);
  FUN_0019b0e0(auStack_14a0);
  FUN_0019aa58(auStack_14a0);
  FUN_00130ab0(param_1);
  FUN_0019aa30(auStack_14a0,2);
  return;
}

