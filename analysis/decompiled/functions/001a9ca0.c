/* Ghidra pseudocode. PS2 address: 001a9ca0. Not validated source. */

void FUN_001a9ca0(float param_1,undefined4 param_2,float param_3,float param_4,undefined8 param_5,
                 ulong param_6)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = param_1 + param_3;
  FUN_0011ed48(0x295e90,3);
  iVar2 = FUN_001a8df8(param_5,0x54);
  if ((param_6 & 1) != 0) {
    FUN_001a90b8(param_1,param_2,param_3,(param_4 - 0.5) / *(float *)(iVar2 + 0xc),param_5,0x54,0);
  }
  uVar1 = DAT_002c32a8;
  if ((param_6 & 2) != 0) {
    param_4 = param_4 / *(float *)(iVar2 + 0xc);
    fVar3 = 9.0;
    FUN_0011ed18(0x295e90,DAT_002913c4 + 1);
    FUN_001a90b8(param_1 - fVar3,param_2,uVar1,param_4,param_5,0x55,0);
    FUN_001a90b8(fVar4 + fVar3,param_2,uVar1,param_4,param_5,0x55,0xb);
    return;
  }
  return;
}

