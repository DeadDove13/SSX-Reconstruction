/* Ghidra pseudocode. PS2 address: 001aa9d8. Not validated source. */

void FUN_001aa9d8(float param_1,float param_2,undefined4 param_3,long param_4,undefined4 *param_5,
                 int param_6,int param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecf8(0x295e90,1);
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  lVar7 = 0;
  fVar12 = (float)*(int *)(iVar1 + 0xc) + 4.0;
  if (param_4 != 0) {
    lVar7 = FUN_001a0a88(iVar1,param_4,0);
  }
  puVar6 = param_5;
  iVar5 = param_6;
  if (0 < param_6) {
    do {
      iVar5 = iVar5 + -1;
      lVar4 = FUN_001a0a88(0x3f800000,iVar1,*puVar6,0);
      if (lVar7 < lVar4) {
        lVar7 = lVar4;
      }
      puVar6 = puVar6 + 1;
    } while (iVar5 != 0);
  }
  iVar5 = DAT_002913c4;
  fVar13 = (float)(int)lVar7 + 90.0;
  if (-1 < param_7) {
    fVar10 = (float)*(int *)(iVar1 + 0xc);
    fVar9 = fVar13 - 25.0;
    fVar8 = param_2 + 30.0 + (float)param_7 * fVar12;
    if (param_4 != 0) {
      fVar8 = fVar8 + 30.0;
    }
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = DAT_002c32c8;
    DAT_0028ad34 = DAT_002c32cc;
    DAT_0028ad38 = DAT_002c32d0;
    DAT_0028ad3c = DAT_002c32d4;
    FUN_0019f6d8(param_1 + 28.0 + 14.0,fVar8 + -2.0,fVar9,fVar10,0x28ad30);
    FUN_0011ed18(0x295e90,iVar5 + 1);
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a90b8(param_1 + 28.0,fVar8 + fVar10 * DAT_002c32d8,0x3f800000,0x3f800000,param_3,param_8,
                 0x20);
  }
  fVar9 = 30.0;
  DAT_0028ad30 = 0x3f800000;
  param_2 = param_2 + 30.0;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  fVar8 = param_2;
  if (param_4 != 0) {
    iVar3 = FUN_001a0a88(0x3f800000,iVar1,param_4,0);
    fVar8 = param_2 + fVar9;
    FUN_001a1368((param_1 + fVar13 * 0.5) - (float)iVar3 * 0.5,param_2,iVar1,param_4);
  }
  uVar2 = DAT_002c32dc;
  iVar3 = 0;
  if (0 < param_6) {
    uVar11 = 0;
    do {
      DAT_0028ad38 = 0x3f800000;
      DAT_0028ad3c = 0x3f800000;
      if (iVar3 == param_7) {
        DAT_0028ad38 = uVar2;
        DAT_0028ad3c = uVar11;
      }
      DAT_0028ad34 = 0x3f800000;
      DAT_0028ad30 = 0x3f800000;
      FUN_001a1368(param_1 + 45.0,fVar8,iVar1,*param_5);
      iVar3 = iVar3 + 1;
      param_5 = param_5 + 1;
      fVar8 = fVar8 + fVar12;
    } while (iVar3 < param_6);
  }
  FUN_0011ed18(0x295e90,iVar5);
  return;
}

