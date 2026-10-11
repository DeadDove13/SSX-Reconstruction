/* Ghidra pseudocode. PS2 address: 0013e220. Not validated source. */

void FUN_0013e220(int param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_1 + 0x14);
  fVar8 = *(float *)(*(int *)(iVar4 + 0x6cf4) + 0x18);
  if (*(int *)(iVar4 + 0x344) == 2) {
    uVar1 = *(uint *)(*(int *)(iVar4 + 0x394) + 0x28);
    uVar6 = param_2 ^ 1;
    if (uVar1 == 0) {
      uVar6 = param_2;
    }
    param_2 = uVar6;
    if (*(uint *)(iVar4 + 0x144) != uVar1) {
      *(uint *)(iVar4 + 0x144) = *(uint *)(iVar4 + 0x144) ^ 1;
    }
  }
  else if (*(int *)(iVar4 + 0x144) != 0) {
    *(undefined4 *)(*(int *)(iVar4 + 0x6cf4) + 0xc) = 0;
    *(undefined4 *)(iVar4 + 0x144) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x14);
  if (param_2 == 0) {
    fVar8 = fVar8 + DAT_002c2000;
    iVar2 = *(int *)(iVar4 + 0x6cf4);
    fVar7 = fVar8 * DAT_002c2004 + 0.5;
    fVar9 = (float)(int)fVar7;
    if (fVar7 < fVar9) {
      fVar9 = fVar9 - 1.0;
    }
    fVar9 = fVar9 * DAT_002c2008;
    iVar3 = *(int *)(param_1 + 0xc) + 0x5a;
    *(int *)(param_1 + 0xc) = iVar3;
    *(float *)(iVar2 + 0x18) = fVar8 - fVar9;
    FUN_00136ff0(iVar4 + 0x8370,iVar3);
    switch(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x16c)) {
    case 0:
    case 1:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x9a,0,5);
      uVar5 = 1;
      break;
    case 2:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x99,0,5);
      uVar5 = 2;
      break;
    case 3:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x9c,0,5);
      uVar5 = 3;
      break;
    case 4:
      iVar4 = *(int *)(param_1 + 0x14);
      uVar5 = 0x9f;
      goto LAB_0013e4a0;
    default:
      goto switchD_0013e324_default;
    }
  }
  else {
    fVar8 = fVar8 - DAT_002c1ff4;
    iVar2 = *(int *)(iVar4 + 0x6cf4);
    fVar7 = fVar8 * DAT_002c1ff8 + 0.5;
    fVar9 = (float)(int)fVar7;
    if (fVar7 < fVar9) {
      fVar9 = fVar9 - 1.0;
    }
    fVar9 = fVar9 * DAT_002c1ffc;
    iVar3 = *(int *)(param_1 + 0xc) + -0x5a;
    *(int *)(param_1 + 0xc) = iVar3;
    *(float *)(iVar2 + 0x18) = fVar8 - fVar9;
    FUN_00136ff0(iVar4 + 0x8370,iVar3);
    switch(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x16c)) {
    case 0:
    case 1:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x98,0,5);
      uVar5 = 2;
      break;
    case 2:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x9b,0,5);
      uVar5 = 1;
      break;
    case 3:
      iVar4 = *(int *)(param_1 + 0x14);
      uVar5 = 0x9d;
LAB_0013e4a0:
      FUN_0014cd18(*(undefined4 *)(iVar4 + 0x6cf4),uVar5,0,5);
      uVar5 = 4;
      break;
    case 4:
      FUN_0014cd18(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x6cf4),0x9e,0,5);
      uVar5 = 3;
      break;
    default:
      goto switchD_0013e324_default;
    }
  }
  *(undefined4 *)(param_1 + 8) = uVar5;
switchD_0013e324_default:
  return;
}

