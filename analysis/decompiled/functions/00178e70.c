/* Ghidra pseudocode. PS2 address: 00178e70. Not validated source. */

undefined4 FUN_00178e70(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  
  FUN_0016eb08(param_1,0x183);
  FUN_0016eb08(param_1,0x184);
  FUN_0016eb08(param_1,0x185);
  pfVar7 = (float *)param_1;
  if (pfVar7[0x2d7] != 0.0) {
    uVar3 = FUN_0016f348(param_1,0);
    FUN_0016f018(param_1,uVar3,0);
    pfVar7[0x2d7] = 0.0;
  }
  if (DAT_002c4a00 != 0.0) {
    if (DAT_002c4a00 == 1.4013e-45) {
      uVar4 = FUN_001703b8(param_1,0xffffffffffffffff);
      FUN_00178bd0(param_1,uVar4);
      FUN_001786e8(param_1);
      if ((uVar4 & 0x880) != 0) {
        FUN_001faea0(DAT_002c56e8);
        FUN_00209730(DAT_002c56e8,0);
        FUN_001ef940(DAT_002c56e8,DAT_0027ba9c + 1);
        pfVar7[0x2d6] = DAT_002c4a00;
        FUN_001783c8(param_1,2);
        uVar3 = FUN_0016f348(param_1,0);
        FUN_0016eec0(param_1,uVar3,0);
        iVar10 = *(int *)((int)pfVar7[0x2d4] + 0x488);
        *(undefined4 *)((int)pfVar7[0x2d4] + 0x4ec) = 3;
        uVar12 = FUN_00165b00();
        iVar2 = DAT_0027ba88;
        *(undefined4 *)(iVar10 + 0xb48) = uVar12;
        FUN_0016eb08(param_1,(&DAT_002837b0)[iVar2]);
        FUN_00178458(param_1);
        pfVar7[0x2ca] = (float)&DAT_002838a0;
        pfVar7[0x2cb] = (float)&DAT_00283ab8;
        if (pfVar7[0x2cc] == 0.0) {
          return 0;
        }
        fVar11 = (float)DAT_002859d4;
        pfVar7[0x2cc] = 0.0;
        pfVar7[2] = (fVar11 / 60.0 - *pfVar7) - 0.25;
        return 0;
      }
      if ((uVar4 & 0x120) == 0) {
        if ((uVar4 & 0x10) != 0) {
          FUN_001faea0(DAT_002c56e8);
          FUN_001707a8(param_1,7,0xffffffffffffffff);
          *(undefined4 *)((int)pfVar7[0x2d4] + 0x4f4) = 1;
          return 4;
        }
        return 0;
      }
      FUN_001faea0(DAT_002c56e8);
      pfVar7[0x2d6] = DAT_002c4a00;
      FUN_001783c8(param_1,0);
    }
    else {
      iVar10 = 0;
      FUN_0016dc60(param_1);
      uVar4 = (**(code **)((int)pfVar7[1] + 0x74))
                        ((int)pfVar7 + (int)*(short *)((int)pfVar7[1] + 0x70),0xffffffffffffffff);
      uVar12 = FUN_0016f348(param_1,0);
      switch(uVar12) {
      case 0x18b:
        iVar10 = 9;
        break;
      case 0x18c:
        iVar10 = 3;
        break;
      case 0x18d:
        iVar10 = 8;
        break;
      case 0x18e:
        iVar10 = 6;
        break;
      case 400:
        iVar10 = 1;
        break;
      case 0x191:
        iVar10 = 4;
        break;
      case 0x193:
        iVar10 = 5;
        break;
      case 0x195:
        iVar10 = 0;
      }
      lVar5 = FUN_00154948(0x27a598,iVar10);
      if (lVar5 == 1) {
        FUN_0016eae0(param_1,0x184);
      }
      else if (lVar5 < 2) {
        if (lVar5 == 0) {
          FUN_0016eae0(param_1,0x183);
        }
      }
      else if (lVar5 == 2) {
        FUN_0016eae0(param_1,0x185);
      }
      if ((uVar4 & 0x880) != 0) {
        puVar6 = &DAT_00283860;
        uVar9 = 0;
        piVar8 = &DAT_00283864;
        do {
          iVar2 = FUN_0016f348(param_1,0);
          if (iVar2 == *piVar8) {
            lVar5 = FUN_00154610(0x27a598,*puVar6);
            if (lVar5 != 0) {
              FUN_001faea0(DAT_002c56e8);
              FUN_00170480(param_1,*(undefined4 *)((int)pfVar7[0x2d4] + 0x46c));
              if (iVar10 == 10) {
                DAT_0027ba88 = 6;
              }
              if (DAT_0027ba88 == 1) {
                DAT_0027b810 = 2;
                if (*(int *)((int)pfVar7[0x2d4] + 0x470) == 0) {
                  DAT_0027b810 = 1;
                }
              }
              else {
                DAT_0027b810 = DAT_0027ad00;
              }
              DAT_0027ba84 = iVar10;
              FUN_001543f0(0x27a598);
              FUN_001f87c8(DAT_002c56e8);
              FUN_001fd340(DAT_002c56e8);
              FUN_001707a8(param_1,8,0xffffffffffffffff);
              pfVar7[0x2d6] = DAT_002c4a00;
              FUN_001783c8(param_1,0);
              pfVar7[0x2d5] = 1.4013e-45;
              return 4;
            }
            FUN_001fafa8(DAT_002c56e8);
          }
          uVar9 = uVar9 + 1;
          puVar6 = puVar6 + 2;
          piVar8 = piVar8 + 2;
        } while (uVar9 < 8);
        return 0;
      }
      if ((uVar4 & 0x120) == 0) goto LAB_001795ac;
      FUN_001faea0(DAT_002c56e8);
      bVar1 = DAT_002c4a00 == 0.0;
      pfVar7[0x2d6] = DAT_002c4a00;
      if (bVar1) {
        FUN_001783c8(param_1,0);
        uVar3 = FUN_0016f348(param_1,0);
        FUN_0016eec0(param_1,uVar3,0);
        return 3;
      }
      iVar10 = *(int *)((int)pfVar7[0x2d4] + 0x488);
      *(undefined4 *)((int)pfVar7[0x2d4] + 0x4ec) = 3;
      uVar12 = FUN_00165b00();
      *(undefined4 *)(iVar10 + 0xb48) = uVar12;
      uVar3 = FUN_0016f348(param_1,0);
      FUN_0016f018(param_1,uVar3,0);
      pfVar7[0x2cd] = 0.0;
      iVar10 = DAT_0027ba88;
      pfVar7[0x2cc] = 1.4013e-45;
      pfVar7[0x2d7] = 1.4013e-45;
      if (iVar10 == 2) {
        FUN_001783c8(param_1,1);
      }
      else {
        FUN_001783c8(param_1,0);
      }
    }
    FUN_00178458(param_1);
    return 0;
  }
  uVar4 = FUN_001703b8(param_1,0xffffffffffffffff);
  FUN_00178d10(param_1,uVar4);
  FUN_001786e8(param_1);
  if ((uVar4 & 0x880) == 0) {
    if ((uVar4 & 0x120) != 0) {
      FUN_001faea0(DAT_002c56e8);
      pfVar7[0x2d6] = DAT_002c4a00;
      DAT_002c4a00 = 0.0;
      return 3;
    }
LAB_001795ac:
    if ((uVar4 & 0x10) != 0) {
      FUN_001faea0(DAT_002c56e8);
      FUN_001707a8(param_1,7,0xffffffffffffffff);
      *(undefined4 *)((int)pfVar7[0x2d4] + 0x4f4) = 1;
      return 4;
    }
    return 0;
  }
  FUN_001faea0(DAT_002c56e8);
  FUN_00209730(DAT_002c56e8,0);
  switch(DAT_0027ba88) {
  case 1:
    uVar3 = 3;
    break;
  case 2:
  case 4:
    uVar3 = 1;
    break;
  case 3:
  case 5:
    uVar3 = 2;
    break;
  case 6:
    uVar3 = 4;
    break;
  default:
    goto switchD_00178f64_default;
  }
  FUN_001ef950(DAT_002c56e8,uVar3);
switchD_00178f64_default:
  iVar10 = DAT_0027ba88;
  bVar1 = DAT_0027ba88 != 6;
  pfVar7[0x2d6] = DAT_002c4a00;
  if (bVar1) {
    FUN_0016eb08(param_1,(&DAT_002837b0)[iVar10]);
    if (DAT_0027ba88 == 2) {
      FUN_001783c8(param_1,1);
    }
    else {
      FUN_001783c8(param_1,2);
      uVar3 = FUN_0016f348(param_1,0);
      FUN_0016eec0(param_1,uVar3,0);
      if (pfVar7[0x2cc] != 0.0) {
        fVar11 = (float)DAT_002859d4;
        pfVar7[0x2cc] = 0.0;
        pfVar7[2] = (fVar11 / 60.0 - *pfVar7) - 0.25;
      }
    }
    iVar10 = *(int *)((int)pfVar7[0x2d4] + 0x488);
    *(undefined4 *)((int)pfVar7[0x2d4] + 0x4ec) = 3;
    uVar12 = FUN_00165b00();
    *(undefined4 *)(iVar10 + 0xb48) = uVar12;
    FUN_00178458(param_1);
    pfVar7[0x2cb] = (float)&DAT_00283ab8;
    pfVar7[0x2ca] = (float)&DAT_002838a0;
    return 0;
  }
  DAT_0027ba84 = 10;
  DAT_0027b810 = 1;
  FUN_001543f0(0x27a598);
  FUN_001f87c8(DAT_002c56e8);
  FUN_001fd340(DAT_002c56e8);
  FUN_001707a8(param_1,8,0xffffffffffffffff);
  pfVar7[0x2d6] = DAT_002c4a00;
  FUN_001783c8(param_1,0);
  pfVar7[0x2d5] = 1.4013e-45;
  *(undefined4 *)((int)pfVar7[0x2d4] + 0x4f4) = 1;
  return 4;
}

