/* Ghidra pseudocode. PS2 address: 00216e88. Not validated source. */

void FUN_00216e88(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_002c3a04;
  FUN_0011ecd8(0x295e90,*(undefined4 *)(param_2 + 0x38),1);
  uVar6 = DAT_002c3a0c;
  uVar7 = DAT_002c3a08;
  fVar3 = (float)FUN_00218328(param_1);
  uVar2 = DAT_002c3a10;
  fVar3 = fVar3 * 40.5;
  uVar5 = 0x42340000;
  fVar4 = 540.0 - fVar3 * 0.5;
  FUN_0011ed18(0x295e90,6);
  DAT_0028ad3c = 0;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  FUN_0019fb08(fVar4 + 2.0,DAT_002c3a14,fVar3,uVar5,uVar1,uVar6,uVar2,uVar7,0x28ad30);
  FUN_0011ed18(0x295e90,7);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019fb08(fVar4,DAT_002c3a18,fVar3,uVar5,uVar1,uVar6,uVar2,uVar7,0x28ad30);
  return;
}

