/* Ghidra pseudocode. PS2 address: 001ae138. Not validated source. */

void FUN_001ae138(undefined8 param_1)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = 0x3f800000;
  fVar2 = (float)*(int *)((int)param_1 + 0x1c) * DAT_002c3368;
  FUN_0011ed18(0x295e90,0x13);
  fVar2 = (float)FUN_00218240(fVar2 * DAT_002c336c);
  DAT_0028ad3c = 0;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  DAT_0028ad30 = uVar1;
  FUN_001a90b8(DAT_002c3370,0x43e20000,fVar2 * 0.5,0x3f000000,param_1,0x66,0x20);
  DAT_0028ad30 = uVar1;
  DAT_0028ad34 = uVar1;
  DAT_0028ad38 = uVar1;
  DAT_0028ad3c = uVar1;
  FUN_001a90b8(0x44070000,0x43e10000,fVar2 * 0.5,0x3f000000,param_1,0x66,0x20);
  return;
}

