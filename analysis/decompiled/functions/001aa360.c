/* Ghidra pseudocode. PS2 address: 001aa360. Not validated source. */

void FUN_001aa360(float param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_2 + param_4;
  fVar4 = param_1 + param_3;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0011ed38(0x295e90,0);
  iVar1 = FUN_001a8df8(param_5,0x50);
  iVar2 = FUN_001a8df8(param_5,0x51);
  fVar3 = (param_4 - *(float *)(iVar1 + 0xc)) - *(float *)(iVar2 + 0xc);
  FUN_001a90b8(param_1,param_2,0x3f800000,0x3f800000,param_5,0x50,8);
  FUN_001a90b8(param_1,param_2 + *(float *)(iVar1 + 0xc),0x3f800000,fVar3,param_5,0x4f,8);
  FUN_001a90b8(param_1,fVar5 - *(float *)(iVar2 + 0xc),0x3f800000,0x3f800000,param_5,0x51,8);
  FUN_001a90b8(fVar4,fVar5,0x3f800000,0x3f800000,param_5,0x50,7);
  FUN_001a90b8(fVar4,param_2 + *(float *)(iVar2 + 0xc),0x3f800000,fVar3,param_5,0x4f,1);
  FUN_001a90b8(fVar4,param_2 + *(float *)(iVar2 + 0xc),0x3f800000,0x3f800000,param_5,0x51,7);
  FUN_001a90b8(param_1,param_2,param_3,param_4,param_5,0x4e,0);
  FUN_0011ed38(0x295e90,1);
  return;
}

