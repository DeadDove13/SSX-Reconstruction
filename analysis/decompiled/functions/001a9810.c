/* Ghidra pseudocode. PS2 address: 001a9810. Not validated source. */

void FUN_001a9810(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed48(0x295e90,3);
  fVar3 = -20.0;
  FUN_0011ecf8(0x295e90,1);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  iVar1 = FUN_001a8df8(param_1,0x4c);
  FUN_001a90b8(0x44250000,fVar3,0x3f800000,0x3f800000,param_1,0x4c,8);
  fVar5 = 680.0;
  FUN_001a90b8(fVar3,0x43fa0000,0x3f800000,0x3f800000,param_1,0x4c,7);
  fVar4 = *(float *)(iVar1 + 0xc);
  fVar2 = *(float *)(iVar1 + 8);
  FUN_001a90b8(fVar3,fVar3,fVar5 - fVar2,520.0 - fVar4,param_1,0x4e,0);
  FUN_001a90b8(660.0 - fVar2,fVar4 + fVar3,fVar2,520.0 - fVar4,param_1,0x4e,0);
  FUN_001a90b8(fVar2 + fVar3,500.0 - fVar4,fVar5 - (fVar2 + fVar2),fVar4,param_1,0x4e,0);
  FUN_001a99c0(param_1);
  FUN_0011ed38(0x295e90,1);
  return;
}

