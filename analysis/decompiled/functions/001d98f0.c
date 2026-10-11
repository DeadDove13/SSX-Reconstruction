/* Ghidra pseudocode. PS2 address: 001d98f0. Not validated source. */

void FUN_001d98f0(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  iVar6 = (int)param_1;
  if (*(int *)(iVar6 + 0x44) == 1) {
    (**(code **)(*(int *)(iVar6 + 0x170) + 0xb4))
              (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xb0));
    iVar4 = (int)*(short *)(*(int *)(iVar6 + 0x170) + 0xb8);
    pcVar5 = *(code **)(*(int *)(iVar6 + 0x170) + 0xbc);
  }
  else {
    fVar10 = *(float *)(iVar6 + 0x40);
    fVar9 = *(float *)(iVar6 + 0x3c) + fVar10;
    *(float *)(iVar6 + 0x3c) = fVar9;
    if (fVar10 < 0.0) {
      bVar1 = fVar9 < DAT_002c3674;
      fVar9 = DAT_002c3674;
    }
    else {
      bVar1 = 1.0 < fVar9;
      fVar9 = 1.0;
    }
    if (bVar1) {
      *(float *)(iVar6 + 0x3c) = fVar9;
      *(float *)(iVar6 + 0x40) = -fVar10;
      *(undefined4 *)(iVar6 + 0xc) = 0;
    }
    else {
      *(undefined4 *)(iVar6 + 0xc) = 0;
    }
    *(undefined4 *)(iVar6 + 0x10) = 0;
    *(undefined4 *)(iVar6 + 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x18) = 0;
    lVar3 = FUN_00211c98(*(undefined4 *)(iVar6 + 0x16c));
    if (lVar3 == 0) {
      iVar4 = *(int *)(iVar6 + 0x44);
      if ((iVar4 == 0x12) || (iVar4 == 0x20)) goto LAB_001d9ac8;
      if (iVar4 != 0x19) goto LAB_001d99d0;
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
    }
    else {
LAB_001d99d0:
      FUN_002123b0(*(undefined4 *)(iVar6 + 0x16c));
      if ((*(int *)(iVar6 + 0x44) == 8) || (*(int *)(iVar6 + 0x44) == 0x1a)) {
        *(undefined4 *)(iVar6 + 0x18) = 1;
        uVar7 = 0;
        lVar3 = FUN_00211e08(*(int *)(iVar6 + 0x16c),*(undefined4 *)(*(int *)(iVar6 + 0x16c) + 0xc))
        ;
        iVar4 = *(int *)(iVar6 + 0x16c);
        if (lVar3 != 0) {
          lVar3 = FUN_00212360(iVar4,*(undefined4 *)(iVar6 + 0x2c));
          iVar4 = *(int *)(iVar6 + 0x16c);
          if (lVar3 == 0) {
            lVar3 = FUN_00212388(iVar4,*(undefined4 *)(iVar6 + 0x2c));
            uVar7 = (uint)(lVar3 == 0);
            iVar4 = *(int *)(iVar6 + 0x16c);
          }
        }
        uVar8 = 0;
        *(uint *)(iVar6 + 0xc) = uVar7;
        lVar3 = FUN_00211ec0(iVar4,*(undefined4 *)(iVar4 + 0xc));
        if (lVar3 == 0) {
          iVar4 = *(int *)(iVar6 + 0x44);
        }
        else {
          lVar3 = FUN_002122a8(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
          if (lVar3 == 0) {
            iVar4 = *(int *)(iVar6 + 0x44);
          }
          else {
            lVar3 = FUN_00212360(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
            if (lVar3 == 0) {
              lVar3 = FUN_00212388(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
              uVar8 = (uint)(lVar3 == 0);
              iVar4 = *(int *)(iVar6 + 0x44);
            }
            else {
              iVar4 = *(int *)(iVar6 + 0x44);
            }
          }
        }
        *(uint *)(iVar6 + 0x10) = uVar8;
        if (iVar4 == 0x1a) {
          *(undefined4 *)(iVar6 + 0x14) = 0;
        }
        else {
          uVar2 = FUN_002122a8(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(iVar6 + 0x2c));
          *(undefined4 *)(iVar6 + 0x14) = uVar2;
        }
        iVar4 = *(int *)(iVar6 + 0x16c);
      }
      else {
        iVar4 = *(int *)(iVar6 + 0x16c);
      }
      lVar3 = FUN_00211ee0(iVar4,*(undefined4 *)(iVar4 + 0xc));
      if (lVar3 != 0) {
        *(undefined4 *)(iVar6 + 8) = 1;
        FUN_002112c8(*(undefined4 *)(iVar6 + 0x16c));
      }
LAB_001d9ac8:
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
    }
    switch(uVar2) {
    case 2:
      FUN_001da170(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 3:
      FUN_001da198(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 4:
      FUN_001da2b8(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 5:
      FUN_001da598(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 6:
      FUN_001da780(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 7:
      FUN_001da7a8(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 8:
      FUN_001db018(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 10:
      FUN_001dbfc0(param_1);
    default:
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0xb:
      FUN_001da948(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0xc:
      FUN_001daa48(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0xd:
      FUN_001daab0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0xe:
      FUN_001dae38(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0xf:
      FUN_001daee0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x10:
      FUN_001db4d0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x11:
      FUN_001dad88(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x12:
      FUN_001dab60(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x13:
      FUN_001dac10(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x14:
      FUN_001dacc0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x15:
      FUN_001dbca8(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x16:
      FUN_001dbdd0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x17:
      FUN_001dbdf8(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x18:
      FUN_001dbf10(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x19:
      FUN_001dbe60(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1a:
      FUN_001db8c0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1b:
      FUN_001db6b0(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1c:
      FUN_001db760(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1d:
      FUN_001dbc40(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1e:
      FUN_001db5e8(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x1f:
      (**(code **)(*(int *)(iVar6 + 0x170) + 0xd4))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xd0));
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      break;
    case 0x20:
      FUN_001db538(param_1);
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
    }
    switch(uVar2) {
    default:
      goto switchD_001d9cf8_caseD_0;
    case 1:
    case 8:
    case 9:
    case 0x10:
    case 0x1a:
    case 0x1d:
      (**(code **)(*(int *)(iVar6 + 0x170) + 0xb4))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xb0));
      iVar4 = (int)*(short *)(*(int *)(iVar6 + 0x170) + 0xb8);
      pcVar5 = *(code **)(*(int *)(iVar6 + 0x170) + 0xbc);
      break;
    case 2:
    case 3:
    case 7:
      (**(code **)(*(int *)(iVar6 + 0x170) + 0xbc))
                (iVar6 + *(short *)(*(int *)(iVar6 + 0x170) + 0xb8));
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xd:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x18:
    case 0x19:
    case 0x1f:
    case 0x20:
      iVar4 = (int)*(short *)(*(int *)(iVar6 + 0x170) + 0xb0);
      pcVar5 = *(code **)(*(int *)(iVar6 + 0x170) + 0xb4);
      break;
    case 6:
    case 0xc:
    case 0xf:
    case 0x16:
    case 0x17:
    case 0x1c:
      iVar4 = (int)*(short *)(*(int *)(iVar6 + 0x170) + 0xb8);
      pcVar5 = *(code **)(*(int *)(iVar6 + 0x170) + 0xbc);
    }
  }
  (*pcVar5)(iVar6 + iVar4);
switchD_001d9cf8_caseD_0:
  return;
}

