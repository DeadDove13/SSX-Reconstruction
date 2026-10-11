/* Ghidra pseudocode. PS2 address: 0017d6a8. Not validated source. */

long FUN_0017d6a8(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float *pfVar8;
  float fVar9;
  
  pfVar8 = (float *)param_1;
  switch(pfVar8[0x2f4]) {
  case 0.0:
    if (pfVar8[0x2f0] != 0.0) {
      FUN_0016cda0(param_1,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
      uVar7 = FUN_0016f348(param_1,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
      FUN_0016f018(param_1,uVar7,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
      FUN_0016eae0(param_1,0x13e);
      FUN_0016eb08(param_1,0x141);
      if (*(int *)((int)pfVar8[0x2cf] + 0x46c) == 0) {
        FUN_0016eb08(param_1,0x12d);
        FUN_0016eae0(param_1,0x140);
      }
      else {
        FUN_0016eb08(param_1,300);
        FUN_0016eae0(param_1,0x13f);
      }
      FUN_0016eae0(param_1,0x325);
      pfVar8[0x2f0] = 0.0;
    }
    if (pfVar8[0x2f2] == 0.0) {
      FUN_0017d480(param_1);
      fVar9 = pfVar8[0x2cf];
    }
    else {
      fVar9 = pfVar8[0x2cf];
    }
    uVar1 = *(undefined4 *)((int)fVar9 + 0x46c);
    if (pfVar8[0x2e4] != 0.0) {
      FUN_0017bd48();
    }
    if (pfVar8[0x2ec] == 0.0) {
      if (pfVar8[0x2f1] != 0.0) {
        uVar5 = FUN_001703b8(param_1,uVar1);
        iVar2 = *(int *)((int)pfVar8[0x2f2] + 0x40);
        (**(code **)(iVar2 + 0x14))((int)pfVar8[0x2f2] + (int)*(short *)(iVar2 + 0x10),uVar5);
        if ((uVar5 & 0x80004) == 0) {
          if ((uVar5 & 0x100008) == 0) {
            if ((uVar5 & 0x40002) != 0) {
              fVar9 = pfVar8[0x2eb];
              pfVar8[0x2eb] = (float)((int)fVar9 + 1);
              if ((int)fVar9 + 1 < 4) {
                return 0;
              }
              pfVar8[0x2eb] = 0.0;
              return 0;
            }
            if ((uVar5 & 0x20001) != 0) {
              fVar9 = pfVar8[0x2eb];
              pfVar8[0x2eb] = (float)((int)fVar9 + -1);
              if (-1 < (int)fVar9 + -1) {
                return 0;
              }
              pfVar8[0x2eb] = 4.2039e-45;
              return 0;
            }
            if ((uVar5 & 0x880) == 0) {
              return 0;
            }
            lVar6 = FUN_00154c98(0x27a598,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
            if (lVar6 == 0) {
              FUN_001faea0(DAT_002c56e8);
              FUN_00152f20(0x27a598);
              pfVar8[0x2f4] = 1.4013e-45;
              DAT_0027bbfc = 1;
              return 0;
            }
            FUN_001fafa8(DAT_002c56e8);
            return 0;
          }
          lVar6 = FUN_00154e18(0x27a598,uVar1,pfVar8[0x2eb]);
        }
        else {
          lVar6 = FUN_00154cc8(0x27a598,uVar1,pfVar8[0x2eb]);
        }
        if (lVar6 != 0) {
          FUN_001fafe0(DAT_002c56e8);
          return 0;
        }
        FUN_001fafa8(DAT_002c56e8);
        return 0;
      }
      if (pfVar8[0x2ef] == 0.0) {
        if (pfVar8[0x2cc] != 0.0) {
          fVar9 = (float)DAT_002859d4;
          pfVar8[0x2cc] = 0.0;
          pfVar8[2] = (fVar9 / 60.0 - *pfVar8) - 0.25;
        }
        lVar6 = FUN_0016f348(param_1,uVar1);
        (**(code **)((int)pfVar8[1] + 0x74))
                  ((int)pfVar8 + (int)*(short *)((int)pfVar8[1] + 0x70),uVar1);
        lVar3 = FUN_0016dc60(param_1);
        lVar4 = FUN_0016f348(param_1,uVar1);
        if (lVar4 != lVar6) {
          fVar9 = pfVar8[0x2f2];
          if (fVar9 != 0.0) {
            (**(code **)(*(int *)((int)fVar9 + 0x40) + 0xc))
                      ((int)fVar9 + (int)*(short *)(*(int *)((int)fVar9 + 0x40) + 8),3);
          }
          pfVar8[0x2f2] = 0.0;
          FUN_0017d480(param_1);
        }
        if (lVar3 == 4) {
          *(undefined4 *)((int)pfVar8[0x2cf] + 0x4f4) = 1;
          return 4;
        }
        return lVar3;
      }
      uVar5 = FUN_001703b8(param_1,uVar1);
      if ((uVar5 & 0x880) != 0) {
        FUN_00154998(0x27a598,uVar1);
        FUN_0017be90(pfVar8[0x2e4]);
        FUN_0017af68(pfVar8[0x2e4]);
      }
      if ((uVar5 & 0x9a0) == 0) {
        return 0;
      }
      FUN_001faea0(DAT_002c56e8);
      FUN_0016cb78(param_1);
      if (pfVar8[0x2cc] != 0.0) {
        fVar9 = (float)DAT_002859d4;
        pfVar8[0x2cc] = 0.0;
        pfVar8[2] = (fVar9 / 60.0 - *pfVar8) - 0.25;
      }
      pfVar8[0x2ef] = 0.0;
    }
    else {
      pfVar8[0x2cd] = 1.4013e-45;
      pfVar8[0x2cc] = 1.4013e-45;
      lVar6 = (**(code **)((int)pfVar8[1] + 0x8c))
                        ((int)pfVar8 + (int)*(short *)((int)pfVar8[1] + 0x88),0);
      if (lVar6 != 0) {
        return lVar6;
      }
    }
    break;
  case 1.4013e-45:
    FUN_0016eb08(param_1,0x325);
    FUN_0017c248(param_1);
    pfVar8[0x2f4] = 2.8026e-45;
    break;
  case 2.8026e-45:
    uVar5 = FUN_001703b8(param_1,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
    if ((uVar5 & 0x880) == 0) {
      if ((uVar5 & 0x120) != 0) {
        pfVar8[0x2f4] = 5.60519e-45;
      }
    }
    else {
      FUN_0016cb78(param_1);
      lVar6 = FUN_0023a448(0x2b1400,0x5410,0x10);
      if (lVar6 != 0) {
        FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x5410);
      }
      fVar9 = (float)FUN_0016ad28(lVar6,pfVar8[0x2cf],param_1,1,1);
      pfVar8[0x2f3] = fVar9;
      pfVar8[5] = 1.4013e-45;
      FUN_0016eb08(param_1,0x35b);
      FUN_0016eb08(param_1,0x358);
      FUN_0016eb08(param_1,0x359);
      pfVar8[0x2f4] = 4.2039e-45;
    }
    break;
  case 4.2039e-45:
    FUN_0016af18(pfVar8[0x2f3]);
    if (*(int *)((int)pfVar8[0x2f3] + 0x180) == 0) {
      return 0;
    }
    FUN_001dc310();
    fVar9 = pfVar8[0x2f3];
    iVar2 = *(int *)((int)fVar9 + 0x1c);
    if (fVar9 != 0.0) {
      (**(code **)(*(int *)((int)fVar9 + 0x170) + 0xc))
                ((int)fVar9 + (int)*(short *)(*(int *)((int)fVar9 + 0x170) + 8),3);
    }
    pfVar8[0x2f3] = 0.0;
    FUN_0016e100(param_1,0x35a);
    FUN_0016eb08(param_1,0x35a);
    FUN_0016e100(param_1,0x359);
    FUN_0016e100(param_1,0x358);
    FUN_0016e100(param_1,0x35b);
    FUN_0016eae0(param_1,0x35b);
    pfVar8[5] = 0.0;
    if (iVar2 == 0) {
      FUN_0017c2a8(param_1);
      FUN_0016eae0(param_1,0x325);
      pfVar8[0x2f4] = 0.0;
    }
    else {
      pfVar8[0x2f4] = 5.60519e-45;
    }
    break;
  case 5.60519e-45:
    pfVar8[0x2f1] = 0.0;
    FUN_00152fc8(0x27a598);
    FUN_0016ce58(param_1,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
    uVar7 = FUN_0016f348(param_1,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
    FUN_0016eec0(param_1,uVar7,*(undefined4 *)((int)pfVar8[0x2cf] + 0x46c));
    FUN_0016eb08(param_1,0x13e);
    FUN_0016eae0(param_1,0x141);
    if (*(int *)((int)pfVar8[0x2cf] + 0x46c) == 0) {
      FUN_0016eae0(param_1,0x12d);
      FUN_0016eb08(param_1,0x140);
    }
    else {
      FUN_0016eae0(param_1,300);
      FUN_0016eb08(param_1,0x13f);
    }
    FUN_0016eb08(param_1,0x325);
    if (pfVar8[0x2cc] != 0.0) {
      fVar9 = (float)DAT_002859d4;
      pfVar8[0x2cc] = 0.0;
      pfVar8[2] = (fVar9 / 60.0 - *pfVar8) - 0.25;
    }
    fVar9 = pfVar8[0x2f2];
    if (fVar9 != 0.0) {
      (**(code **)(*(int *)((int)fVar9 + 0x40) + 0xc))
                ((int)fVar9 + (int)*(short *)(*(int *)((int)fVar9 + 0x40) + 8),3);
    }
    pfVar8[0x2f2] = 0.0;
    FUN_0017d480(param_1);
    pfVar8[0x2f4] = 0.0;
  }
  return 0;
}

