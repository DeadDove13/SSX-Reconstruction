/* Ghidra pseudocode. PS2 address: 001db8c0. Not validated source. */

void FUN_001db8c0(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_1;
  lVar1 = FUN_00211c98(*(undefined4 *)(iVar4 + 0x16c));
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x7c))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x78));
    lVar1 = FUN_00212088(*(undefined4 *)(iVar4 + 0x16c));
    if (lVar1 == 0) {
      FUN_001d9670(param_1,2);
      return;
    }
    iVar3 = *(int *)(iVar4 + 0x16c);
    if (*(int *)(iVar3 + 0x58) == 0) {
      iVar3 = *(int *)(iVar4 + 0x16c);
    }
    else {
      lVar1 = FUN_00211e08(iVar3,*(undefined4 *)(iVar3 + 0xc));
      iVar3 = *(int *)(iVar4 + 0x16c);
      if (lVar1 == 0) {
        FUN_00210f40(iVar3,*(int *)(iVar3 + 0xc) == 0);
        FUN_001d9670(param_1,6);
        return;
      }
    }
    lVar1 = FUN_00211dc0(iVar3,*(undefined4 *)(iVar3 + 0xc));
    if (lVar1 != 0) {
      FUN_001d9670(param_1,5);
      return;
    }
    if ((*(int *)(iVar4 + 8) != 0) &&
       (lVar1 = FUN_00211ec0(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc))
       , lVar1 != 0)) {
      FUN_001d9670(param_1,7);
      return;
    }
    if ((uVar2 & 0x20) == 0) {
      if ((uVar2 & 0x800) == 0) {
        if ((uVar2 & 0x40) == 0) {
          if ((uVar2 & 0x100008) == 0) {
            if ((uVar2 & 0x80004) == 0) {
              if ((uVar2 & 0x20001) != 0) {
                iVar3 = *(int *)(iVar4 + 0x170);
                if (0 < *(int *)(iVar4 + 0x2c)) {
                  (**(code **)(iVar3 + 0x9c))(iVar4 + *(short *)(iVar3 + 0x98));
                  *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + -1;
                  return;
                }
                (**(code **)(iVar3 + 0xac))(iVar4 + *(short *)(iVar3 + 0xa8));
                return;
              }
              if ((uVar2 & 0x40002) == 0) {
                return;
              }
              iVar3 = *(int *)(iVar4 + 0x170);
              if (*(int *)(iVar4 + 0x2c) < *(int *)(*(int *)(iVar4 + 0x16c) + 0x10) + -1) {
                (**(code **)(iVar3 + 0x9c))(iVar4 + *(short *)(iVar3 + 0x98));
                *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + 1;
                return;
              }
              (**(code **)(iVar3 + 0xac))(iVar4 + *(short *)(iVar3 + 0xa8));
              return;
            }
            (**(code **)(*(int *)(iVar4 + 0x170) + 0xa4))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xa0));
            iVar3 = *(int *)(iVar4 + 0x16c);
            if (0 < *(int *)(iVar3 + 0xc)) {
              return;
            }
            iVar5 = *(int *)(iVar3 + 0xc) + 1;
          }
          else {
            (**(code **)(*(int *)(iVar4 + 0x170) + 0xa4))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0xa0));
            iVar3 = *(int *)(iVar4 + 0x16c);
            iVar5 = *(int *)(iVar3 + 0xc) + -1;
            if (*(int *)(iVar3 + 0xc) < 1) {
              return;
            }
          }
          lVar1 = FUN_00211e08(iVar3,iVar5);
          if (lVar1 != 0) {
            FUN_00210f40(*(undefined4 *)(iVar4 + 0x16c),iVar5);
            lVar1 = FUN_00211ec0(*(int *)(iVar4 + 0x16c),
                                 *(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
            if (lVar1 != 0) {
              FUN_001d9670(param_1,7);
            }
          }
        }
        else {
          lVar1 = FUN_00211e80(*(int *)(iVar4 + 0x16c),
                               *(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
          if ((lVar1 == 0) && (*(int *)(iVar4 + 0x14) != 0)) {
            (**(code **)(*(int *)(iVar4 + 0x170) + 0x8c))
                      (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x88));
            FUN_00212110(*(undefined4 *)(iVar4 + 0x16c),*(undefined4 *)(iVar4 + 0x2c),iVar4 + 0xe8);
            FUN_001d9670(param_1,0x15);
          }
        }
      }
      else {
        lVar1 = FUN_00211e80(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc))
        ;
        if ((lVar1 == 0) && (*(int *)(iVar4 + 0x10) != 0)) {
          (**(code **)(*(int *)(iVar4 + 0x170) + 0x8c))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x88));
          lVar1 = FUN_00211ec0(*(int *)(iVar4 + 0x16c),
                               *(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
          if (lVar1 != 0) {
            FUN_001d9670(param_1,0x1b);
          }
        }
      }
    }
    else {
      (**(code **)(*(int *)(iVar4 + 0x170) + 0x94))
                (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x90));
      FUN_001d9670(param_1,1);
    }
  }
  return;
}

