/* Ghidra pseudocode. PS2 address: 001b0fd0. Not validated source. */

void FUN_001b0fd0(float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
                 int param_6,long param_7)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_14e0 [5152];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  FUN_0019aa08(auStack_14e0);
  uVar3 = FUN_00234e80(DAT_002852fc,0x32);
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  FUN_0019af18(auStack_14e0,iVar1);
  FUN_0019ae30(auStack_14e0);
  FUN_0019b0b8(0x3f800000,0x3f800000,auStack_14e0);
  fVar6 = param_1;
  if (param_7 == 0) {
    uStack_c0 = 0;
    uStack_bc = 0;
  }
  else if (param_7 == 1) {
    iVar2 = FUN_001a0a88(DAT_002c3390,iVar1,uVar3,0);
    uStack_c0 = 1;
    uStack_bc = 0;
    fVar6 = param_1 - param_3 * 0.5;
    param_1 = param_1 - (float)(iVar2 / 2);
  }
  else {
    iVar2 = FUN_001a0a88(DAT_002c338c,iVar1,uVar3,0);
    uStack_bc = 1;
    uStack_c0 = 0;
    param_1 = (fVar6 + param_3) - (float)iVar2;
  }
  fVar4 = (float)*(int *)(iVar1 + 0xc) * DAT_002c3394 + -3.0;
  fVar5 = param_2 + fVar4;
  DAT_0028ad3c = 0;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  FUN_001a1578(DAT_002c3394,param_1,param_2,iVar1,uVar3);
  FUN_0019af40(fVar6,fVar5,param_3,param_4 - fVar4,auStack_14e0);
  FUN_0019b000(auStack_14e0,param_6 + 8);
  FUN_0019b0e0(auStack_14e0);
  FUN_0019aa58(auStack_14e0);
  FUN_0019aa30(auStack_14e0,2);
  return;
}

