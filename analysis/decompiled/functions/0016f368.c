/* Ghidra pseudocode. PS2 address: 0016f368. Not validated source. */

void FUN_0016f368(undefined4 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  iVar1 = FUN_0016dd88();
  fVar5 = *(float *)(iVar1 + 0x88);
  fVar2 = *(float *)(iVar1 + 0x84);
  uStack_50 = 0x3f800000;
  fStack_4c = 0.0;
  fStack_48 = 0.0;
  uStack_44 = 0;
  FUN_0016e420(param_1,param_2,0xffffffffffffffff,&uStack_50);
  fVar3 = (float)FUN_00218328(param_1);
  fVar4 = (float)FUN_00218240(param_1);
  uStack_50 = 0;
  uStack_44 = 0;
  fStack_48 = fVar3 * fVar5 - fVar4 * fVar2;
  fStack_4c = fVar3 * fVar2 + fVar4 * fVar5;
  FUN_0016e2f8(param_2,0xffffffffffffffff,&uStack_50);
  return;
}

