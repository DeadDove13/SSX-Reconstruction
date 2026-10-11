/* Ghidra pseudocode. PS2 address: 001209f8. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00120a44) */

void FUN_001209f8(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *param_1;
  fVar7 = *(float *)(iVar2 + 0x8308);
  if (param_1[0x22b] != 0) {
    if ((float)param_1[0x22f] == 0.0) {
      fVar6 = (float)param_1[0x22e];
    }
    else {
      iVar4 = (int)(*(float *)(iVar2 + 0x164) * DAT_002c19fc);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 % 0x168 - 5U < 0x150) {
        fVar6 = (float)param_1[0x22e];
      }
      else {
        if (fVar7 < DAT_002c1a00 / ABS(*(float *)(*(int *)(iVar2 + 0x8584) + 0x780))) {
          param_1[0x22f] = 0;
        }
        fVar6 = (float)param_1[0x22e];
      }
    }
    if (fVar6 == 0.0) {
      iVar2 = param_1[0x22a];
      goto LAB_00120b6c;
    }
    iVar2 = *param_1;
    iVar4 = 0xb4;
    if (*(int *)(iVar2 + 0x344) == 2) {
      iVar4 = 0x168;
    }
    iVar5 = (int)(*(float *)(iVar2 + 0x160) * DAT_002c1a04);
    if (iVar4 == 0) {
      trap(7);
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    if ((iVar5 % iVar4 <= iVar4 + -0x14) && (4 < iVar5 % iVar4)) {
      iVar2 = param_1[0x22a];
      goto LAB_00120b6c;
    }
    if (fVar7 < ((float)iVar4 * DAT_002c1a08) / ABS(*(float *)(*(int *)(iVar2 + 0x8584) + 0x77c))) {
      param_1[0x22e] = 0;
    }
  }
  iVar2 = param_1[0x22a];
LAB_00120b6c:
  if (iVar2 == 0x1a) {
    fVar7 = (float)param_1[0x22e];
  }
  else {
    fVar6 = DAT_002c1a0c;
    if (param_1[0x22c] == 0) {
      fVar6 = DAT_002c1a1c /
              ((float)*(byte *)(*(int *)(*param_1 + 0x394) + 0x14) * DAT_002c1a10 * DAT_002c1a14 +
              DAT_002c1a18);
    }
    if (fVar7 < fVar6) {
      param_1[0x22a] = 0x1a;
    }
    fVar7 = (float)param_1[0x22e];
  }
  uVar1 = *param_2;
  uVar3 = ((int)(fVar7 * 31.0) & 0x3fU) << 0xc;
  *param_2 = uVar1 & 0xfffc0fff | uVar3;
  *param_2 = uVar1 & 0xff000fff | uVar3 | ((int)((float)param_1[0x22f] * 31.0) & 0x3fU) << 0x12;
  *(char *)param_2 = (char)param_1[0x22a];
  return;
}

