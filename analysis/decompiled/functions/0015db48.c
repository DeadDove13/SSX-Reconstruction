/* Ghidra pseudocode. PS2 address: 0015db48. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0015ddc0) */

void FUN_0015db48(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_80 [4];
  int iStack_7c;
  
  iVar7 = (int)param_1;
  piVar9 = (int *)(iVar7 + 0x50);
  pfVar8 = (float *)(iVar7 + 0x3c);
  fVar11 = *(float *)(iVar7 + 0x3c);
  *(undefined4 *)(iVar7 + 0x30) = 0;
  if (*(int *)(iVar7 + 0x28) != 1) {
    return;
  }
  if (*(int *)(iVar7 + 0x1d4) != 0) {
    return;
  }
  *(float *)(iVar7 + 0x3c) = fVar11 + DAT_002c2538;
  FUN_00160c10(auStack_90,iVar7 + 0x40,0x2c4728,0x2c4730);
  bVar4 = false;
  if (*(float *)(iVar7 + 0x3c) <= *(float *)(iStack_8c + *(int *)(iVar7 + 0x50) * 0x28 + 0x20)) {
LAB_0015e19c:
    FUN_0015f248(auStack_90,2);
    return;
  }
  iVar3 = *piVar9;
  do {
    switch(*(undefined4 *)(iStack_8c + iVar3 * 0x28 + 0x10)) {
    case 0:
      if (bVar4) {
        iVar1 = *piVar9;
LAB_0015dc50:
        lVar2 = FUN_0025baa0(iVar7 + 0x18,iStack_8c + iVar1 * 0x28);
        if (lVar2 == 0) {
          iVar1 = *piVar9;
        }
        else {
          FUN_0015f258(param_1);
          iVar1 = *piVar9;
        }
      }
      else {
        iVar1 = *piVar9;
        if ((iVar3 == 0) && (fVar11 == 0.0)) goto LAB_0015dc50;
      }
      FUN_0015c9d0(param_1,iStack_8c + iVar1 * 0x28);
      iVar3 = *piVar9;
      break;
    case 1:
      iVar3 = *piVar9 * 0x28;
      fVar10 = *pfVar8;
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_0015dd10;
    case 2:
      iVar3 = *piVar9 * 0x28;
      fVar10 = *pfVar8;
      uVar5 = 1;
      uVar6 = 0;
      goto LAB_0015dd10;
    case 3:
      iVar3 = *piVar9 * 0x28;
      fVar10 = *pfVar8;
      uVar5 = 1;
      uVar6 = 1;
LAB_0015dd10:
      iVar3 = iStack_8c + iVar3;
      FUN_0015d600(*(undefined4 *)(iVar3 + 0x20),fVar10,*(undefined4 *)(iVar3 + 0x24),param_1,
                   iVar7 + 0x18,iVar3,*(undefined4 *)(iVar3 + 0x14),uVar5,uVar6);
      iVar3 = *piVar9;
      break;
    case 4:
      if (bVar4) {
LAB_0015dd60:
        iStack_8c = iStack_8c + iVar3 * 0x28;
        FUN_0015d7b8(*(undefined4 *)(iStack_8c + 0x18),param_1,iStack_8c,
                     *(undefined4 *)(iStack_8c + 0x14));
        goto LAB_0015e178;
      }
      if (iVar3 == 0) {
        if (fVar11 == 0.0) goto LAB_0015dd60;
        iVar3 = *piVar9;
      }
      else {
        iVar3 = *piVar9;
      }
      break;
    case 5:
      FUN_0015f150(param_1,4);
      iVar3 = *piVar9;
      break;
    case 6:
      FUN_0015f150(param_1,5);
      iVar3 = *piVar9;
      break;
    case 7:
      goto switchD_0015dc20_caseD_7;
    case 8:
      *(undefined4 *)(iVar7 + 0x2c) = 1;
      goto switchD_0015dc20_caseD_10;
    case 9:
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      goto switchD_0015dc20_caseD_10;
    case 10:
      iVar3 = FUN_002109b0();
      if (iVar3 % 100 < 0) {
        iVar1 = *piVar9;
      }
      else {
        iVar1 = *piVar9;
      }
      iVar1 = iStack_8c + iVar1 * 0x28;
      if (ABS(*(float *)(iVar1 + 0x1c)) <= (float)(uint)(iVar3 % 100))
      goto switchD_0015dc20_caseD_10;
      FUN_0015da98(param_1,iVar1);
      FUN_0015db48(param_1);
      goto LAB_0015e178;
    case 0xb:
      iVar3 = *(int *)(iVar7 + 0x38);
      if (iVar3 < 0x10) {
        iVar1 = iVar3 * 0x18 + iVar7;
        uVar5 = *(undefined8 *)(iVar7 + 0x44);
        uVar6 = *(undefined8 *)(iVar7 + 0x4c);
        *(undefined8 *)(iVar1 + 0x54) = *(undefined8 *)(iVar7 + 0x3c);
        *(undefined8 *)(iVar1 + 0x5c) = uVar5;
        *(undefined8 *)(iVar1 + 100) = uVar6;
        *(int *)(iVar7 + 0x38) = iVar3 + 1;
        FUN_0015da98(param_1,iStack_8c + *piVar9 * 0x28);
        FUN_0015db48(param_1);
      }
      else {
        FUN_0015dac8(param_1);
      }
      goto LAB_0015e178;
    case 0xc:
      if (*(int *)(iVar7 + 0x2c) == 0) {
        FUN_0015c9d0(param_1,iVar7 + 0x18);
        iVar3 = *piVar9;
      }
      else {
        iVar3 = *piVar9;
      }
      break;
    case 0xd:
      FUN_0015f258(param_1);
      iVar3 = *piVar9;
      break;
    case 0xe:
      FUN_0015e500(param_1,iStack_8c + *piVar9 * 0x28);
      iVar3 = *piVar9;
      break;
    case 0xf:
      FUN_0015ea60(param_1);
      iVar3 = *piVar9;
      break;
    default:
      goto switchD_0015dc20_caseD_10;
    case 0x11:
      FUN_001fc950(DAT_002c56e8);
      iVar3 = *piVar9;
      break;
    case 0x12:
      FUN_001fc948(DAT_002c56e8);
      iVar3 = *piVar9;
      break;
    case 0x16:
      *(undefined4 *)(iVar7 + 0x410) = 1;
      *(undefined4 *)(iVar7 + 0x414) = *(undefined4 *)(iStack_8c + *piVar9 * 0x28 + 0x1c);
      goto switchD_0015dc20_caseD_10;
    case 0x17:
      DAT_002c46b8 = 1;
      DAT_002c46c0 = 0x3f000000;
      DAT_002c46bc = 0;
      goto switchD_0015dc20_caseD_10;
    case 0x18:
      *(undefined4 *)(iVar7 + 0xf90) = 1;
      goto switchD_0015dc20_caseD_10;
    case 0x19:
      *(undefined4 *)(iVar7 + 0xf90) = 0;
      goto switchD_0015dc20_caseD_10;
    case 0x1b:
      if (*(int *)(iVar7 + 0xa4c) == 0) {
        iVar3 = *piVar9;
      }
      else {
        if (*(int *)(*(int *)(iVar7 + 0xa4c) + 0xa0) == 0) {
          FUN_0015dac8(param_1);
          goto LAB_0015e178;
        }
        iVar3 = *piVar9;
      }
      break;
    case 0x1e:
      *(undefined4 *)(iVar7 + 0xf94) = 1;
switchD_0015dc20_caseD_10:
      iVar3 = *piVar9;
      break;
    case 0x1f:
      lVar2 = FUN_001603d8(iVar7 + 0x210);
      if (lVar2 == 0) {
        *(undefined4 *)(iVar7 + 0x34) = 0;
        *(undefined4 *)(iVar7 + 0x30) = 1;
        FUN_0015c9d0(param_1,iVar7 + 0x18);
        goto LAB_0015e178;
      }
      iVar3 = *piVar9;
      break;
    case 0x20:
      *(undefined4 *)(iVar7 + 0x28) = 0;
      FUN_0015dac8(param_1);
      goto LAB_0015e178;
    }
    if (*pfVar8 <= *(float *)(iStack_8c + iVar3 * 0x28 + 0x24)) goto LAB_0015e19c;
    bVar4 = true;
    if (*(int *)(iStack_8c + 800) + -1 <= iVar3) {
      iVar3 = *(int *)(iVar7 + 0x38);
      goto LAB_0015e0c8;
    }
    *piVar9 = iVar3 + 1;
    if (*pfVar8 <= *(float *)((iVar3 + 1) * 0x28 + iStack_8c + 0x20)) goto LAB_0015e19c;
    iVar3 = *piVar9;
  } while( true );
switchD_0015dc20_caseD_7:
  *(undefined4 *)(iVar7 + 0x34) = 1;
  *(undefined4 *)(iVar7 + 0x30) = 1;
  FUN_0015c9d0(param_1,iVar7 + 0x18);
  goto LAB_0015e178;
LAB_0015e0c8:
  if (iVar3 == 0) goto code_r0x0015e0d0;
  iVar3 = iVar3 * 0x18 + iVar7;
  uVar5 = *(undefined8 *)(iVar3 + 0x44);
  uVar6 = *(undefined8 *)(iVar3 + 0x4c);
  *(undefined8 *)(iVar7 + 0x3c) = *(undefined8 *)(iVar3 + 0x3c);
  *(undefined8 *)(iVar7 + 0x44) = uVar5;
  *(undefined8 *)(iVar7 + 0x4c) = uVar6;
  *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + -1;
  FUN_00160c10(auStack_80,iVar7 + 0x40,0x2c4728,0x2c4730);
  iVar3 = *piVar9;
  *piVar9 = iVar3 + 1;
  if (iVar3 < *(int *)(iStack_7c + 800) + -1) {
    FUN_0015db48(param_1);
    FUN_0015f248(auStack_80,2);
    goto LAB_0015e178;
  }
  FUN_0015f248(auStack_80,2);
  iVar3 = *(int *)(iVar7 + 0x38);
  goto LAB_0015e0c8;
code_r0x0015e0d0:
  FUN_0015dac8(param_1);
LAB_0015e178:
  FUN_0015f248(auStack_90,2);
  return;
}

