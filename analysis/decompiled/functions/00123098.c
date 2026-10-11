/* Ghidra pseudocode. PS2 address: 00123098. Not validated source. */

undefined4 FUN_00123098(undefined8 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uStack_90;
  
  uVar2 = DAT_002c1ad8;
  iVar5 = (int)param_1;
  puVar6 = (undefined2 *)(*(int *)(*(int *)(iVar5 + 0xe0) + 4) + *(int *)(iVar5 + 0x3c));
  switch(*puVar6) {
  case 0:
    FUN_001234c8(param_1,puVar6);
    uVar2 = 1;
    break;
  case 1:
    FUN_00123fb8(param_1,puVar6);
    uVar2 = 1;
    break;
  case 2:
    iVar5 = *(int *)(iVar5 + 0xe4);
    if (iVar5 == 0) {
      return 1;
    }
    goto LAB_00123130;
  case 3:
    uVar2 = 0;
    *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(puVar6 + 2);
    break;
  case 4:
    if (*(int *)(puVar6 + 2) == 0) {
      iVar5 = *(int *)(iVar5 + 0xe8);
      if (iVar5 == 0) {
        return 1;
      }
      if (*(int *)(puVar6 + 4) == 0) {
        bVar1 = *(float *)(puVar6 + 6) < *(float *)(iVar5 + 0xe0);
      }
      else {
        if (*(int *)(puVar6 + 4) != 1) {
          return 1;
        }
        bVar1 = *(float *)(iVar5 + 0xe0) < *(float *)(puVar6 + 6) * DAT_002c1ad4;
      }
    }
    else {
      if (*(int *)(puVar6 + 2) != 1) {
        return 1;
      }
      if (*(int *)(puVar6 + 4) == 0) {
        fVar9 = (float)FUN_00210a00(0,0x3f800000);
        bVar1 = *(float *)(puVar6 + 6) < fVar9;
      }
      else {
        if (*(int *)(puVar6 + 4) != 1) {
          return 1;
        }
        fVar9 = (float)FUN_00210a00(0,0x3f800000);
        bVar1 = fVar9 < *(float *)(puVar6 + 6);
      }
    }
    if (bVar1) {
      return 0xffffffff;
    }
  default:
switchD_001230ec_default:
    uVar2 = 1;
    break;
  case 5:
    FUN_0010abb0(*(undefined4 *)(iVar5 + 0xe8),*(undefined4 *)(puVar6 + 2));
    uVar2 = 1;
    break;
  case 6:
    uStack_90 = CONCAT22(puVar6[4],puVar6[2]);
    lVar3 = FUN_002237f8(0x299cc8,uStack_90);
    if (lVar3 != 0) {
      iVar8 = 0;
      if (*(int *)(iVar5 + 0xd0) != 0) {
        iVar8 = iVar5 + 0x50;
      }
      iVar7 = 0;
      if (*(int *)(iVar5 + 0xd4) != 0) {
        iVar7 = iVar5 + 0x90;
      }
      lVar4 = FUN_002107c8(0x298590,0xf0,0x40000000,0x2c4080,0,0);
      if (lVar4 != 0) {
        FUN_0023bbd0(lVar4,0xffffffffdeadc0de,0xf0);
      }
      FUN_00122ca8(lVar4,3,*(undefined4 *)(puVar6 + 6),lVar3,*(undefined4 *)(iVar5 + 0xe8),iVar8,
                   iVar7);
      return 1;
    }
    goto switchD_001230ec_default;
  case 7:
    FUN_001fe810(DAT_002c56e8,*(undefined4 *)(iVar5 + 0xe4),*(undefined4 *)(puVar6 + 2));
    uVar2 = 1;
    break;
  case 8:
    iVar5 = *(int *)(iVar5 + 0xe4);
LAB_00123130:
    iVar5 = *(int *)(iVar5 + 0x100);
    uVar2 = 1;
    if (iVar5 != 0) {
      (**(code **)(*(int *)(iVar5 + 8) + 0xc4))
                (*(undefined4 *)(puVar6 + 4),iVar5 + *(short *)(*(int *)(iVar5 + 8) + 0xc0),
                 *(undefined4 *)(puVar6 + 2));
      uVar2 = 1;
    }
    break;
  case 9:
    iVar8 = *(int *)(*(int *)(iVar5 + 0xe4) + 0x100);
    if (*(int *)(iVar5 + 0xe4) != 0) {
      if (iVar8 == 0) {
        return 1;
      }
      if (*(int *)(puVar6 + 2) == 0) {
        (**(code **)(*(int *)(iVar8 + 8) + 0xb4))(iVar8 + *(short *)(*(int *)(iVar8 + 8) + 0xb0),0);
        return 1;
      }
      if (*(int *)(puVar6 + 2) != 1) {
        return 1;
      }
      (**(code **)(*(int *)(iVar8 + 8) + 0xb4))(iVar8 + *(short *)(*(int *)(iVar8 + 8) + 0xb0),1);
      return 1;
    }
    goto switchD_001230ec_default;
  case 10:
    iVar8 = *(int *)(*(int *)(iVar5 + 0xe4) + 0x100);
    if (*(int *)(iVar5 + 0xe4) != 0) {
      if (iVar8 == 0) {
        return 1;
      }
      if (*(int *)(puVar6 + 2) != 0) {
        return 1;
      }
      (**(code **)(*(int *)(iVar8 + 8) + 0xbc))(iVar8 + *(short *)(*(int *)(iVar8 + 8) + 0xb8));
      return 1;
    }
    goto switchD_001230ec_default;
  case 0xb:
    uVar2 = 1;
    if (*(int *)(*(int *)(iVar5 + 0xe4) + 0x100) != 0) {
      FUN_001feaf8(DAT_002c56e8,*(int *)(iVar5 + 0xe4),*(undefined4 *)(puVar6 + 2));
      uVar2 = 1;
    }
    break;
  case 0xc:
    *(undefined4 *)(*(int *)(iVar5 + 0xe8) + 0x284) = 1;
    FUN_00107070(uVar2);
    uVar2 = 1;
    break;
  case 0xd:
    FUN_0010ac10(*(undefined4 *)(puVar6 + 2),*(undefined4 *)(iVar5 + 0xe8));
    uVar2 = 1;
    break;
  case 0xe:
    FUN_0010aec0(*(undefined4 *)(puVar6 + 2),*(undefined4 *)(iVar5 + 0xe8));
    uVar2 = 1;
    break;
  case 0xf:
    FUN_0010ae08(*(undefined4 *)(puVar6 + 2),*(undefined4 *)(iVar5 + 0xe8));
    uVar2 = 1;
    break;
  case 0x10:
    FUN_0010ae78(*(undefined4 *)(puVar6 + 2),*(undefined4 *)(iVar5 + 0xe8));
    FUN_001f1c00(DAT_002c56e8,*(undefined4 *)(iVar5 + 0xe8));
    uVar2 = 1;
    break;
  case 0x11:
    FUN_0010ae98(*(undefined4 *)(puVar6 + 2),*(undefined4 *)(iVar5 + 0xe8));
    FUN_001f1e28(DAT_002c56e8,*(undefined4 *)(iVar5 + 0xe8));
    goto switchD_001230ec_default;
  }
  return uVar2;
}

