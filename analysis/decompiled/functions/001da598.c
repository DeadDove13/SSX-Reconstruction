/* Ghidra pseudocode. PS2 address: 001da598. Not validated source. */

void FUN_001da598(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  lVar2 = FUN_00211c98(*(undefined4 *)(iVar4 + 0x16c));
  if (lVar2 == 0) {
    uVar3 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x7c))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x78));
    if ((uVar3 & 0x20) != 0) {
      (**(code **)(*(int *)(iVar4 + 0x170) + 0x94))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x90));
      FUN_001d9670(param_1,1);
      return;
    }
    if ((uVar3 & 0x800) != 0) {
      (**(code **)(*(int *)(iVar4 + 0x170) + 0x8c))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x88));
      FUN_001d9670(param_1,2);
      return;
    }
    lVar2 = FUN_00211e08(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
    iVar1 = *(int *)(iVar4 + 0x16c);
    if (lVar2 != 0) {
      lVar2 = FUN_00211ec0(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 != 0) {
        FUN_001d9670(param_1,7);
        return;
      }
      if (*(int *)(iVar4 + 4) != 0) {
        FUN_001d9670(param_1,8);
        return;
      }
      FUN_001d9670(param_1,0x1a);
      return;
    }
    if (*(int *)(iVar1 + 0x58) == 0) {
      lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 == 0) {
        FUN_001d9670(param_1,4);
        return;
      }
    }
    else {
      lVar2 = FUN_00211e08(iVar1,*(int *)(iVar1 + 0xc) == 0);
      iVar1 = *(int *)(iVar4 + 0x16c);
      if (lVar2 != 0) {
        FUN_00210f40(iVar1,*(int *)(iVar1 + 0xc) == 0);
        lVar2 = FUN_00211ec0(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc))
        ;
        if (lVar2 != 0) {
          FUN_001d9670(param_1,7);
          return;
        }
        if (*(int *)(iVar4 + 4) != 0) {
          FUN_001d9670(param_1,8);
          return;
        }
        FUN_001d9670(param_1,0x1a);
        return;
      }
      lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (lVar2 == 0) {
        FUN_001d9670(param_1,4);
        return;
      }
    }
  }
  return;
}

