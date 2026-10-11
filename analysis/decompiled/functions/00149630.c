/* Ghidra pseudocode. PS2 address: 00149630. Not validated source. */

undefined8
FUN_00149630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5
            ,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0;
  iVar4 = (int)param_2;
  if (*(int *)(param_5 + 4) == 6) {
    FUN_00148918(param_3,param_2,0);
    uVar1 = FUN_00147b18(param_2);
    *(undefined4 *)(iVar4 + 8) = 0;
    FUN_00147a28(param_2,uVar1);
    return param_4;
  }
  uVar3 = *(uint *)(param_5 + 8) >> 7 & 3;
  if (uVar3 == 1) {
    lVar5 = FUN_001485b0(param_3);
    if (lVar5 < 0) {
      (**(code **)(*(int *)(iVar4 + 0x1d0) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0x1d0) + 8));
      return 0x1a6;
    }
    FUN_00148aa8(param_3);
    lVar5 = FUN_00147b18(param_2);
    if (lVar5 < 0) {
      FUN_001eacf8(param_3);
      FUN_00148918(param_3,param_2,0);
      return param_4;
    }
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  else if (uVar3 == 0) {
    FUN_001eacf8(param_3);
  }
  else if (uVar3 == 2) {
    FUN_00148aa8(param_3);
    lVar5 = FUN_00147b18(param_2);
    *(undefined4 *)(iVar4 + 8) = 0;
  }
  if (param_6 != 0) {
    lVar2 = FUN_00148998(param_3,*(undefined4 *)(iVar4 + 0x1dc));
    if ((lVar2 == 0) || (*(int *)(param_5 + 4) == 0xf)) {
      FUN_00148918(param_3,param_2,lVar5);
    }
    else {
      FUN_00148668(param_3,3);
      FUN_00147a28(lVar2,3);
      (**(code **)(*(int *)(iVar4 + 0x1d0) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0x1d0) + 8));
    }
  }
  return param_4;
}

