/* Ghidra pseudocode. PS2 address: 001e2688. Not validated source. */

void FUN_001e2688(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  undefined4 uStack_b4;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x428) == 0) {
    FUN_0011ed48(0x295e90,3);
    FUN_0011ecf8(0x295e90,1);
    FUN_0011ed38(0x295e90,0);
    uStack_110 = CONCAT44(0x3f800000,DAT_002c3730);
    uStack_108 = 0x3f8000003f800000;
    uStack_100 = 0x3f8000003f800000;
    uStack_f8 = 0x3f8000003f800000;
    uStack_f0 = 0x3f8000003f800000;
    uStack_d8 = 0x3f800000;
    uStack_c8 = CONCAT44(DAT_002c3738,DAT_002c3734);
    uStack_d0 = 0x3f8000003f800000;
    if (*(int *)(iVar1 + 0x42c) != 0) {
      uStack_110 = CONCAT44(DAT_002c373c,0x3e800000);
      uStack_108 = CONCAT44(DAT_002c373c,DAT_002c373c);
      uStack_100 = CONCAT44(DAT_002c373c,0x3f000000);
      uStack_f8 = CONCAT44(DAT_002c373c,DAT_002c373c);
      uStack_f0 = CONCAT44(DAT_002c373c,0x3f800000);
      uStack_d8 = (ulong)DAT_002c373c;
      uStack_c0 = 0x3f800000;
      uStack_b8 = DAT_002c373c;
      uStack_bc = DAT_002c373c;
      uStack_b4 = 0;
      uStack_d0 = CONCAT44(DAT_002c373c,0x3f800000);
      uStack_c8 = (ulong)DAT_002c373c;
    }
    uStack_e0 = 0x3f800000;
    uStack_e8 = 0;
    if ((*(int *)(iVar1 + 0x434) != 0) || (*(int *)(iVar1 + 0x418) != 0)) {
      FUN_0011ed18(0x295e90,10);
      if (*(int *)(iVar1 + 0x42c) == 0) {
        FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
        DAT_0028ad3c = DAT_002c3748;
        DAT_0028ad30 = DAT_002c374c;
        DAT_0028ad34 = DAT_002c3748;
        DAT_0028ad38 = DAT_002c3748;
        FUN_0019f6d8(*(undefined4 *)(iVar1 + 0xfc),*(float *)(iVar1 + 0xf0),
                     *(undefined4 *)(iVar1 + 0x104),480.0 - *(float *)(iVar1 + 0xf0),0x28ad30);
      }
      else {
        FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
        DAT_0028ad30 = DAT_002c3740;
        DAT_0028ad3c = DAT_002c3744;
        DAT_0028ad34 = DAT_002c3744;
        DAT_0028ad38 = DAT_002c3744;
        FUN_0019f6d8(0,0,0x44200000,0x43f00000,0x28ad30);
      }
      FUN_0011ed18(0x295e90,0xb);
      DAT_0028ad30 = 0x3f800000;
      DAT_0028ad34 = 0x3f800000;
      DAT_0028ad38 = 0x3f800000;
      DAT_0028ad3c = 0x3f800000;
      FUN_001a90b8(*(undefined4 *)(iVar1 + 0xfc),*(float *)(iVar1 + 0xf0),
                   *(undefined4 *)(iVar1 + 0x104),480.0 - *(float *)(iVar1 + 0xf0),param_1,0x4e,0);
      FUN_0011ed18(0x295e90,0xc);
      FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
      DAT_0028ad30 = 0x3f800000;
      DAT_0028ad3c = 0;
      DAT_0028ad34 = 0;
      DAT_0028ad38 = 0;
      FUN_0019f6d8(*(undefined4 *)(iVar1 + 0xfc),*(float *)(iVar1 + 0xf0) - 12.0,
                   *(undefined4 *)(iVar1 + 0x104),0x41c00000,0x28ad30);
    }
    FUN_0011ed18(0x295e90,0xd);
    if (*(int *)(iVar1 + 0x430) != 0) {
      DAT_0028ad3c = 0;
      DAT_0028ad30 = 0x3f800000;
      DAT_0028ad34 = 0;
      DAT_0028ad38 = 0;
      FUN_001a90b8((*(float *)(iVar1 + 0xfc) + *(float *)(iVar1 + 0x104)) - 100.0,
                   *(float *)(iVar1 + 0xf0) - 32.0,0x3f000000,0x3f000000,param_1,0x52,0x20);
      if (*(int *)(iVar1 + 0x400) < 0x1e) {
        FUN_00176e38(0x28ad30,&uStack_f0);
        FUN_001a90b8((*(float *)(iVar1 + 0xfc) + *(float *)(iVar1 + 0x104)) - 99.0,
                     *(float *)(iVar1 + 0xf0) - 32.0,DAT_002c3750,DAT_002c3750,param_1,0x6c,0x20);
      }
    }
    if ((*(int *)(iVar1 + 0x434) == 0) &&
       ((*(int *)(iVar1 + 0x418) != *(int *)(iVar1 + 0x41c) || (*(int *)(iVar1 + 0x438) == 0)))) {
      FUN_00176e38(0x28ad30,&uStack_100);
      uVar2 = 0x3f800000;
      fVar3 = 46.0;
      FUN_001a90b8(*(float *)(iVar1 + 0xfc) + 45.0,*(float *)(iVar1 + 0xf0) - 43.0,0x3f800000,
                   0x3f800000,param_1,0x74,0x20);
      FUN_0011ed18(0x295e90,0xe);
      FUN_00176e38(0x28ad30,&uStack_110);
      FUN_001a90b8(*(float *)(iVar1 + 0xfc) + fVar3,*(float *)(iVar1 + 0xf0) - 43.0,uVar2,uVar2,
                   param_1,0x60,0x20);
      FUN_0011ed18(0x295e90,0xf);
      if (*(int *)(iVar1 + 0x418) == *(int *)(iVar1 + 0x41c)) {
        FUN_00176e38(0x28ad30,&uStack_d0);
        FUN_001a90b8(*(float *)(iVar1 + 0xfc) + 45.0,*(float *)(iVar1 + 0xf0) - 18.0,uVar2,uVar2,
                     param_1,0x71,0x20);
        FUN_00176e38(0x28ad30,&uStack_100);
        FUN_001a90b8(*(float *)(iVar1 + 0xfc) + fVar3,*(float *)(iVar1 + 0xf0) - 33.0,uVar2,uVar2,
                     param_1,0x7b,0x20);
      }
      else {
        FUN_00176e38(0x28ad30,&uStack_d0);
        FUN_001a90b8(*(float *)(iVar1 + 0xfc) + 45.0,*(float *)(iVar1 + 0xf0) - 68.0,uVar2,uVar2,
                     param_1,0x70,0x20);
        FUN_00176e38(0x28ad30,&uStack_100);
        FUN_001a90b8(*(float *)(iVar1 + 0xfc) + 45.0,*(float *)(iVar1 + 0xf0) - 52.0,uVar2,uVar2,
                     param_1,0x7a,0x20);
      }
    }
    FUN_0011ed18(0x295e90,0xd);
    if (*(int *)(iVar1 + 0x438) == 0) {
      FUN_001e2d58(param_1);
      FUN_001e4508(param_1);
    }
    else {
      FUN_001e3c80(param_1);
      FUN_001e3360(param_1);
      FUN_001e2d58(param_1);
      FUN_001e4b18(param_1);
    }
    FUN_0011ed38(0x295e90,1);
  }
  return;
}

