/* Ghidra pseudocode. PS2 address: 00130728. Not validated source. */

void FUN_00130728(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_001a9810(param_2);
  uVar1 = 0x42c80000;
  FUN_0011ed18(0x295e90,5);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0;
  FUN_001a90b8(0x42200000,0x428c0000,0x3f800000,0x3f800000,param_2,0x91,4);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,3);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019f6d8(uVar1,0x429d0000,0x43fa0000,0x40400000,0x28ad30);
  FUN_001a90b8(uVar1,0x42a00000,0x3f000000,0x3f000000,param_2,0x6c,0x20);
  return;
}

