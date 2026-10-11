/* Ghidra pseudocode. PS2 address: 0016d9a8. Not validated source. */

void FUN_0016d9a8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  FUN_0011ed18(0x295e90,0xc);
  iVar3 = (int)param_1;
  FUN_0016d5d0(0x3f800000,0x3f400000,param_1,*(undefined4 *)(iVar3 + 0xb28),0xffffffffffffff75,
               0xffffffffffffffc3,0xbf,0x61,0);
  lVar1 = FUN_0016eb38(param_1,0x362);
  if (lVar1 != 0) {
    FUN_0011ed18(0x295e90,0xf);
    FUN_0016d5d0(DAT_002c27f8,DAT_002c27fc,param_1,*(undefined4 *)(iVar3 + 0xb2c),0xffffffffffffff2d
                 ,0xaa,0x158,0x28,0);
  }
  if ((((*(int *)(iVar3 + 0xb38) != 0) && (*(int *)(iVar3 + 0xb38) != 8)) &&
      (FUN_0011ed18(0x295e90,0xf), *(int *)(iVar3 + 0x10) == 0)) && (*(int *)(iVar3 + 0x14) == 0)) {
    lVar1 = (**(code **)(*(int *)(iVar3 + 4) + 0x2c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x28));
    if ((lVar1 == 0) &&
       (lVar1 = (**(code **)(*(int *)(iVar3 + 4) + 0x14))
                          (iVar3 + *(short *)(*(int *)(iVar3 + 4) + 0x10)), lVar1 == 0)) {
      FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280ef8,0,0xa4,0xe3,0x14,0);
      iVar2 = *(int *)(iVar3 + 4);
    }
    else {
      FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280ef8,0,0xa4,0xe3,0x14,1);
      iVar2 = *(int *)(iVar3 + 4);
    }
    lVar1 = (**(code **)(iVar2 + 0x1c))(iVar3 + *(short *)(iVar2 + 0x18));
    if (lVar1 == 0) {
      FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280f08,0,0xb5,0xe3,0x14,1);
      iVar2 = *(int *)(iVar3 + 0xb38);
    }
    else {
      FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280f08,0,0xb5,0xe3,0x14,0);
      iVar2 = *(int *)(iVar3 + 0xb38);
    }
    if ((1 < iVar2 - 6U) && (*(long *)(iVar3 + 0xb30) != 0x100000001)) {
      FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280f18,0,0xc6,0xe3,0x14,0);
      return;
    }
    FUN_0016d5d0(0x3f800000,0x3f800000,param_1,0x280f18,0,0xc6,0xe3,0x14,1);
    return;
  }
  return;
}

