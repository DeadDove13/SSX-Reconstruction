/* Ghidra pseudocode. PS2 address: 001c3630. Not validated source. */

undefined4
FUN_001c3630(undefined8 param_1,uint param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined2 param_6,undefined2 param_7,undefined2 param_8)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  
  lVar7 = FUN_001c35d0(param_1,param_4,param_5);
  if (lVar7 == 0) {
    return 0;
  }
  iVar8 = (int)param_1;
  *(int *)(iVar8 + 0x248) = (int)param_4;
  *(int *)(iVar8 + 0x24c) = (int)param_5;
  *(undefined4 *)(iVar8 + 0x26c) = 0;
  *(uint *)(iVar8 + 0x240) = param_2;
  *(undefined4 *)(iVar8 + 0x244) = param_3;
  DAT_002c5a78 = param_2;
  DAT_002c5a7c = param_3;
  *(undefined2 *)(iVar8 + 0x250) = param_7;
  *(undefined2 *)(iVar8 + 0x252) = param_8;
  *(undefined2 *)(iVar8 + 0x254) = 2;
  *(undefined4 *)(iVar8 + 0x25c) = 0;
  if (param_2 == 0x180) {
    uVar2 = 6;
LAB_001c3728:
    *(undefined4 *)(iVar8 + 0x260) = uVar2;
    iVar3 = *(int *)(iVar8 + 0x240);
  }
  else {
    if (0x180 < param_2) {
      if (param_2 == 0x200) {
        uVar2 = 4;
      }
      else {
        uVar2 = 3;
        if (param_2 != 0x280) {
          iVar3 = *(int *)(iVar8 + 0x240);
          goto LAB_001c3730;
        }
      }
      goto LAB_001c3728;
    }
    if (param_2 == 0x100) {
      uVar2 = 9;
      goto LAB_001c3728;
    }
    uVar2 = 7;
    if (param_2 == 0x140) goto LAB_001c3728;
    iVar3 = *(int *)(iVar8 + 0x240);
  }
LAB_001c3730:
  *(uint *)(iVar8 + 600) = iVar3 + 0x3fU >> 6;
  switch(*(int *)(iVar8 + 0x248)) {
  case 0:
  case 1:
  case 0x30:
  case 0x31:
    iVar3 = *(int *)(iVar8 + 600);
    *(undefined4 *)(iVar8 + 0x21c) = 0;
    uVar4 = *(int *)(iVar8 + 0x244) + 0x1fU >> 5;
    break;
  case 2:
  case 10:
  case 0x32:
  case 0x3a:
    iVar3 = *(int *)(iVar8 + 600);
    *(undefined4 *)(iVar8 + 0x21c) = 1;
    uVar4 = *(int *)(iVar8 + 0x244) + 0x3fU >> 6;
    break;
  default:
    goto switchD_001c3760_caseD_3;
  }
  *(uint *)(iVar8 + 0x264) = iVar3 * uVar4;
switchD_001c3760_caseD_3:
  uVar4 = *(uint *)(iVar8 + 0x24c);
  if (uVar4 < 0x30) {
    iVar3 = *(int *)(iVar8 + 0x264);
  }
  else {
    if (uVar4 < 0x32) {
      iVar6 = *(int *)(iVar8 + 600);
      uVar5 = *(int *)(iVar8 + 0x244) + 0x1fU >> 5;
    }
    else {
      if (uVar4 == 0x32) {
        iVar3 = *(int *)(iVar8 + 0x244);
      }
      else {
        if (uVar4 != 0x3a) {
          iVar3 = *(int *)(iVar8 + 0x264);
          goto LAB_001c3808;
        }
        iVar3 = *(int *)(iVar8 + 0x244);
      }
      iVar6 = *(int *)(iVar8 + 600);
      uVar5 = iVar3 + 0x3fU >> 6;
    }
    *(uint *)(iVar8 + 0x268) = iVar6 * uVar5;
    iVar3 = *(int *)(iVar8 + 0x264);
  }
LAB_001c3808:
  *(undefined4 *)(iVar8 + 0x270) = 0;
  iVar6 = iVar3 * 2 + *(int *)(iVar8 + 0x268);
  *(int *)(iVar8 + 0x274) = iVar3;
  *(int *)(iVar8 + 0x12c0) = iVar3 * 2;
  *(int *)(iVar8 + 0x12c4) = iVar6 * 0x20;
  *(int *)(iVar8 + 0x12c8) = iVar6 * -0x20 + 0x4000;
  *(undefined4 *)(iVar8 + 0x12cc) = 0;
  if (*(int *)(iVar8 + 0x248) == 1) {
    if (uVar4 == 0x31) {
      *(int *)(iVar8 + 0x12d0) = iVar3 * 0x60;
    }
    else {
      *(int *)(iVar8 + 0x12d0) = iVar3 << 6;
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x12d0) = 0;
  }
  FlushCache(0);
  REG_GS_CSR = 8;
  do {
    uVar1 = REG_GS_CSR;
  } while ((uVar1 & 8) == 0);
  FUN_00243a00(param_6,*(undefined2 *)(iVar8 + 0x250),*(undefined2 *)(iVar8 + 0x254),
               *(undefined2 *)(iVar8 + 0x252));
  FUN_001712c0(param_1,0);
  FUN_001d3518(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0x24c),
               *(undefined4 *)(iVar8 + 0x12c0));
  return 1;
}

