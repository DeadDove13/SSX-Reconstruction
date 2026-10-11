/* Ghidra pseudocode. PS2 address: 001b5bd8. Not validated source. */

void FUN_001b5bd8(int param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_14b0 [5152];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  FUN_0011ed18(0x295e90,0x12);
  fVar5 = 0.0;
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  if (param_2 != 0) {
    iVar3 = FUN_001a0a88(0x3f800000,iVar1,param_2,0);
    fVar5 = (float)iVar3 + 0.0;
  }
  if (fVar5 < 200.0) {
    fVar5 = 200.0;
  }
  else if ((384.0 < fVar5) && (bVar2 = 512.0 < fVar5, fVar5 = 320.0, bVar2)) {
    fVar5 = 384.0;
  }
  fVar5 = fVar5 + 10.0;
  fVar4 = 320.0 - fVar5 * 0.5;
  FUN_0019aa08(auStack_14b0);
  FUN_0019af18(auStack_14b0,iVar1);
  FUN_0019af40(fVar4,0x43340000,fVar5,0x42f00000,auStack_14b0);
  uStack_8c = 0;
  uStack_90 = 1;
  if (param_2 != 0) {
    FUN_0019af58(auStack_14b0,param_2);
  }
  iVar3 = FUN_0019b358(auStack_14b0);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_001a9ae0(fVar4 - 30.0,180.0 - (float)*(int *)(iVar1 + 0xc) * 1.5,fVar5 + 60.0,
               ((float)iVar3 + 3.0) * (float)*(int *)(iVar1 + 0xc),*(undefined4 *)(param_1 + 0x174))
  ;
  FUN_0019aa58(auStack_14b0);
  FUN_0019aa30(auStack_14b0,2);
  return;
}

