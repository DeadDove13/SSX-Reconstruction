/* Ghidra pseudocode. PS2 address: 0016bab0. Not validated source. */

void FUN_0016bab0(int param_1)

{
  undefined8 uVar1;
  undefined1 auStack_1490 [5152];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_0019aa08(auStack_1490);
  FUN_0019ae30(auStack_1490);
  FUN_0019af18(auStack_1490,*(int *)(param_1 + 0x174) + 0x400);
  uStack_40 = *(undefined4 *)(param_1 + 0x3c);
  uStack_34 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_60 = CONCAT44(0x3f800000,uStack_40);
  uStack_58 = 0x3f8000003f800000;
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_0019af40(0xc3340000,0x42e60000,0x43b40000,0x41c80000,auStack_1490);
  uStack_70 = 1;
  uStack_6c = 0;
  FUN_0019b0b8(DAT_002c27cc,0x3f400000,auStack_1490);
  uVar1 = FUN_00234e80(DAT_002852fc,0xac);
  FUN_0019af58(auStack_1490,uVar1);
  FUN_0019ac28(auStack_1490);
  FUN_0019aa30(auStack_1490,2);
  return;
}

