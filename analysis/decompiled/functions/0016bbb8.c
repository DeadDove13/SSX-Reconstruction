/* Ghidra pseudocode. PS2 address: 0016bbb8. Not validated source. */

void FUN_0016bbb8(int param_1,undefined8 param_2)

{
  undefined1 auStack_1480 [5152];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  FUN_0011ed18(0x295e90,0x12);
  FUN_0019aa08(auStack_1480);
  FUN_0019ae30(auStack_1480);
  FUN_0019af18(auStack_1480,*(int *)(param_1 + 0x174) + 0x400);
  uStack_60 = 1;
  uStack_5c = 0;
  FUN_0019af40(0xc3530000,0x432a0000,0x43ac0000,0x42200000,auStack_1480);
  FUN_0019af58(auStack_1480,param_2);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019aa58(auStack_1480);
  FUN_0019aa30(auStack_1480,2);
  return;
}

