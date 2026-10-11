/* Ghidra pseudocode. PS2 address: 001ab548. Not validated source. */

void FUN_001ab548(undefined4 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar6 = 0x42c80000;
  FUN_001a9810(*param_1);
  FUN_0011ed18(0x295e90,5);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0;
  FUN_001a90b8(0x42200000,0x428c0000,0x3f800000,0x3f800000,*param_1,
               *(undefined4 *)(&DAT_0028ad68 + DAT_0027ba84 * 4),4);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  FUN_0011ed48(0x295e90,3);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019f6d8(uVar6,0x429d0000,0x43fa0000,0x40400000,0x28ad30);
  FUN_001a90b8(uVar6,0x42a00000,0x3f000000,0x3f000000,*param_1,0x6c,0x20);
  iVar1 = *(int *)(DAT_002859e4 + 0x5c);
  FUN_0011ed18(0x295e90,6);
  fVar10 = (float)*(int *)(iVar1 + 0xc);
  if ((0 < (int)param_1[0xd]) && (iVar5 = 0, -1 < (int)param_1[0xe])) {
    lVar3 = 0;
    puVar4 = param_1 + 4;
    if (0 < (int)param_1[0xd]) {
      do {
        uVar6 = *puVar4;
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 2;
        lVar2 = FUN_001a0a88(0x3f800000,iVar1,uVar6,0);
        if (lVar3 < lVar2) {
          lVar3 = lVar2;
        }
      } while (iVar5 < (int)param_1[0xd]);
    }
    fVar7 = (DAT_002c3300 - (float)(int)lVar3) - 20.0;
    fVar8 = 640.0 - fVar7;
    fVar9 = 450.0 - (fVar10 + 4.0) * (float)((param_1[0xd] - param_1[0xe]) + -1);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = DAT_002c3304;
    DAT_0028ad34 = DAT_002c3308;
    DAT_0028ad38 = DAT_002c330c;
    DAT_0028ad3c = DAT_002c3310;
    FUN_0019f6d8(fVar7 + 14.0,fVar9 + -2.0,fVar8,fVar10,0x28ad30);
    DAT_0028ad30 = 0x3f800000;
    DAT_0028ad3c = 0x3f800000;
    DAT_0028ad34 = 0x3f800000;
    DAT_0028ad38 = 0x3f800000;
    FUN_001a90b8(fVar7,fVar9 + fVar10 * DAT_002c3314,0x3f800000,0x3f800000,*param_1,0x58,0x20);
    return;
  }
  return;
}

