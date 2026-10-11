/* Ghidra pseudocode. PS2 address: 001adff0. Not validated source. */

void FUN_001adff0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  
  lVar1 = FUN_001a3260(*(undefined4 *)(DAT_002859e4 + 0x30));
  if (lVar1 == 0) {
    FUN_0011ed18(0x295e90,9);
    iVar2 = (int)param_1;
    if (*(int *)(iVar2 + 0x20) == 0) {
      fVar3 = *(float *)(iVar2 + 0x24);
      DAT_0028ad30 = 1.0;
      if (0.5 < fVar3) {
        DAT_0028ad30 = 2.0 - (fVar3 + fVar3);
      }
      DAT_0028ad3c = 0x3f800000;
      DAT_0028ad34 = 0x3f800000;
      DAT_0028ad38 = 0x3f800000;
      fVar3 = *(float *)(iVar2 + 0x24) * DAT_002c3364;
      FUN_001a90b8(0x43a00000,0x43700000,fVar3,fVar3,param_1,0xb,0x20);
    }
    else {
      DAT_0028ad3c = 0x3f800000;
      DAT_0028ad30 = 1.0;
      DAT_0028ad34 = 0x3f800000;
      DAT_0028ad38 = 0x3f800000;
      FUN_001a8e10(0x43a00000,0x43700000,*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x24)
                   ,0,param_1,1,*(int *)(iVar2 + 0x20),0x20);
    }
  }
  return;
}

