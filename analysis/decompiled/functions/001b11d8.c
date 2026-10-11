/* Ghidra pseudocode. PS2 address: 001b11d8. Not validated source. */

void FUN_001b11d8(undefined8 param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_14c0 [5152];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  iVar4 = (int)param_1;
  if (*(int *)(*(int *)(iVar4 + 0x174) + 0xcc) != 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x178) == 2) {
    FUN_001d9dc8();
    return;
  }
  FUN_001ab960(iVar4 + 0x180);
  uVar3 = DAT_002c3398;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  uVar2 = *(undefined4 *)(DAT_002859e4 + 0x5c);
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  if (*(int *)(iVar4 + 0x280) != 0) {
    if (DAT_0027b810 == 1) {
      FUN_001b0fd0(0x43a00000,0x43a00000,0x43c80000,0x42b40000,param_1,0x28af60,1);
      sVar1 = *(short *)(iVar4 + 0x1d8);
      goto LAB_001b1314;
    }
    uVar5 = 0x43200000;
    FUN_001b0fd0(0x43070000,DAT_002c3398,0x43200000,0x42b40000,param_1,0x28af60,2);
    FUN_001b0fd0(DAT_002c339c,uVar3,uVar5,0x42b40000,param_1,0x28afd8,0);
  }
  sVar1 = *(short *)(iVar4 + 0x1d8);
LAB_001b1314:
  if (sVar1 != 0) {
    FUN_0019aa08(auStack_14c0);
    FUN_0019af18(auStack_14c0,uVar2);
    FUN_0019ae30(auStack_14c0);
    uStack_70 = 0x3f800000;
    uStack_68 = 0x3f800000;
    uStack_6c = 0x3f800000;
    uStack_64 = 0;
    uStack_90 = 0x3f8000003f800000;
    uStack_88 = 0x3f800000;
    FUN_0019b0b8(DAT_002c33a0,DAT_002c33a0,auStack_14c0);
    uStack_a0 = 1;
    uStack_9c = 0;
    FUN_0019af40(*(float *)(iVar4 + 0x1d0) - 150.0,*(undefined4 *)(iVar4 + 0x1cc),0x43960000,
                 0x42700000,auStack_14c0);
    FUN_0019af58(auStack_14c0,iVar4 + 0x1d8);
    FUN_0019b0e0(auStack_14c0);
    FUN_0019aa58(auStack_14c0);
    FUN_0019aa30(auStack_14c0,2);
  }
  return;
}

