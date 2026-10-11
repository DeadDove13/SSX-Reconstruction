/* Ghidra pseudocode. PS2 address: 001db018. Not validated source. */

void FUN_001db018(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  lVar2 = FUN_00211c98(*(undefined4 *)(iVar6 + 0x16c));
  if (lVar2 == 0) {
    uVar3 = (**(code **)(*(int *)(iVar6 + 0x170) + 0x7c))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0x78));
    lVar2 = FUN_00212088(*(undefined4 *)(iVar6 + 0x16c));
    if (lVar2 == 0) {
      FUN_001d9670(param_1,2);
      return;
    }
    iVar1 = *(int *)(iVar6 + 0x16c);
    if (*(int *)(iVar1 + 0x58) == 0) {
      iVar1 = *(int *)(iVar6 + 0x16c);
    }
    else {
      lVar2 = FUN_00211e08(iVar1,*(undefined4 *)(iVar1 + 0xc));
      iVar1 = *(int *)(iVar6 + 0x16c);
      if (lVar2 == 0) {
        FUN_00210f40(iVar1,*(int *)(iVar1 + 0xc) == 0);
        FUN_001d9670(param_1,6);
        return;
      }
    }
    lVar2 = FUN_00211dc0(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 != 0) {
      FUN_001d9670(param_1,5);
      return;
    }
    if ((*(int *)(iVar6 + 8) != 0) &&
       (lVar2 = FUN_00211ec0(*(int *)(iVar6 + 0x16c),*(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc))
       , lVar2 != 0)) {
      FUN_001d9670(param_1,7);
      return;
    }
    lVar2 = FUN_00211030(*(undefined4 *)(iVar6 + 0x16c));
    if ((lVar2 == 0) &&
       (lVar2 = FUN_00211ec0(*(int *)(iVar6 + 0x16c),*(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc))
       , lVar2 != 0)) {
      iVar1 = *(int *)(iVar6 + 0x16c);
      iVar4 = *(int *)(iVar1 + 0x24) + 0x3ff;
      iVar5 = *(int *)(iVar1 + 0x24) + 0x7fe;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      iVar1 = FUN_00211de8(iVar1,*(undefined4 *)(iVar1 + 0xc));
      if (iVar1 < (iVar5 >> 10) + 0x8a) {
        FUN_001d9670(param_1,0x14);
        return;
      }
    }
    if ((uVar3 & 0x20) == 0) {
      if ((uVar3 & 0x800) == 0) {
        if ((uVar3 & 0x40) == 0) {
          if ((uVar3 & 0x100008) == 0) {
            if ((uVar3 & 0x80004) == 0) {
              if ((uVar3 & 0x20001) != 0) {
                iVar1 = *(int *)(iVar6 + 0x170);
                if (0 < *(int *)(iVar6 + 0x2c)) {
                  (**(code **)(iVar1 + 0x9c))(iVar6 + *(short *)(iVar1 + 0x98));
                  *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + -1;
                  return;
                }
                (**(code **)(iVar1 + 0xac))(iVar6 + *(short *)(iVar1 + 0xa8));
                return;
              }
              if ((uVar3 & 0x40002) == 0) {
                return;
              }
              iVar1 = *(int *)(iVar6 + 0x170);
              if (*(int *)(iVar6 + 0x2c) < *(int *)(*(int *)(iVar6 + 0x16c) + 0x10) + -1) {
                (**(code **)(iVar1 + 0x9c))(iVar6 + *(short *)(iVar1 + 0x98));
                *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + 1;
                return;
              }
              (**(code **)(iVar1 + 0xac))(iVar6 + *(short *)(iVar1 + 0xa8));
              return;
            }
            (**(code **)(*(int *)(iVar6 + 0x170) + 0xa4))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xa0));
            iVar1 = *(int *)(iVar6 + 0x16c);
            if (0 < *(int *)(iVar1 + 0xc)) {
              return;
            }
            iVar5 = *(int *)(iVar1 + 0xc) + 1;
          }
          else {
            (**(code **)(*(int *)(iVar6 + 0x170) + 0xa4))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xa0));
            iVar1 = *(int *)(iVar6 + 0x16c);
            iVar5 = *(int *)(iVar1 + 0xc) + -1;
            if (*(int *)(iVar1 + 0xc) < 1) {
              return;
            }
          }
          lVar2 = FUN_00211e08(iVar1,iVar5);
          if (lVar2 != 0) {
            FUN_00210f40(*(undefined4 *)(iVar6 + 0x16c),iVar5);
            lVar2 = FUN_00211ec0(*(int *)(iVar6 + 0x16c),
                                 *(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc));
            if (lVar2 != 0) {
              FUN_001d9670(param_1,7);
            }
          }
        }
        else {
          lVar2 = FUN_00211e80(*(int *)(iVar6 + 0x16c),
                               *(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc));
          if ((lVar2 == 0) && (*(int *)(iVar6 + 0x14) != 0)) {
            (**(code **)(*(int *)(iVar6 + 0x170) + 0x8c))
                      (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0x88));
            FUN_00212110(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c),iVar6 + 0xe8);
            FUN_001d9670(param_1,0x15);
          }
        }
      }
      else {
        lVar2 = FUN_00211e80(*(int *)(iVar6 + 0x16c),*(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc))
        ;
        if ((lVar2 == 0) && (*(int *)(iVar6 + 0xc) != 0)) {
          (**(code **)(*(int *)(iVar6 + 0x170) + 0x8c))
                    (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0x88));
          lVar2 = FUN_00211ec0(*(int *)(iVar6 + 0x16c),
                               *(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc));
          if (lVar2 == 0) {
            FUN_001d9670(param_1,0xb);
          }
          else {
            lVar2 = FUN_002122a8(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
            iVar1 = *(int *)(iVar6 + 0x16c);
            if (lVar2 == 0) {
              iVar4 = *(int *)(iVar1 + 0x24) + 0x3ff;
              iVar5 = *(int *)(iVar1 + 0x24) + 0x7fe;
              if (-1 < iVar4) {
                iVar5 = iVar4;
              }
              iVar1 = FUN_00211de8(iVar1,*(undefined4 *)(iVar1 + 0xc));
              if (iVar1 < (iVar5 >> 10) + 0x8a) {
                FUN_001d9670(param_1,0x13);
                return;
              }
              iVar1 = *(int *)(iVar6 + 0x16c);
            }
            lVar2 = FUN_002122a8(iVar1,*(undefined4 *)(iVar6 + 0x2c));
            if (lVar2 == 0) {
              FUN_001d9670(param_1,0xe,iVar6 + 0xe8);
            }
            else {
              FUN_00212110(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
              FUN_001d9670(param_1,10);
            }
          }
        }
      }
    }
    else {
      (**(code **)(*(int *)(iVar6 + 0x170) + 0x94))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0x90));
      FUN_001d9670(param_1,1);
    }
  }
  return;
}

