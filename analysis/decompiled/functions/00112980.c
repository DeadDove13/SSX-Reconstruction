/* Ghidra pseudocode. PS2 address: 00112980. Not validated source. */

void FUN_00112980(undefined8 param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_0010e158(0x3f800000,0,0,0,(int)param_1 + 0xf4);
  uStack_28 = 0x3f800000;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  FUN_001129e8(PTR_DAT_002c1428,param_1,&uStack_30);
  return;
}

