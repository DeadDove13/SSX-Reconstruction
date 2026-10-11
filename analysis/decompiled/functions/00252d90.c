/* Ghidra pseudocode. PS2 address: 00252d90. Not validated source. */

float FUN_00252d90(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  int iVar9;
  
  fVar7 = ABS(param_2);
  fVar5 = (float)((uint)param_1 ^ (uint)param_1 & 0x80000000);
  if (((fVar7 == 0.0) || (0x7f7fffff < (int)fVar5)) || (0x7f800000 < (uint)fVar7)) {
    return (param_1 * param_2) / (param_1 * param_2);
  }
  if ((int)fVar5 < (int)fVar7) {
    return param_1;
  }
  if (fVar5 != fVar7) {
    if ((int)fVar5 < 0x800000) {
      iVar9 = -0x7e;
      for (iVar3 = (int)param_1 << 8; 0 < iVar3; iVar3 = iVar3 << 1) {
        iVar9 = iVar9 + -1;
      }
    }
    else {
      iVar9 = ((int)fVar5 >> 0x17) + -0x7f;
    }
    if ((uint)fVar7 < 0x800000) {
      iVar3 = -0x7e;
      for (iVar4 = (int)param_2 << 8; -1 < iVar4; iVar4 = iVar4 << 1) {
        iVar3 = iVar3 + -1;
      }
    }
    else {
      iVar3 = ((int)fVar7 >> 0x17) + -0x7f;
    }
    if (iVar9 < -0x7e) {
      uVar6 = (int)fVar5 << (-iVar9 - 0x7eU & 0x1f);
    }
    else {
      uVar6 = (uint)fVar5 & 0x7fffff | 0x800000;
    }
    bVar2 = iVar3 < -0x7e;
    if (bVar2) {
      uVar8 = (int)fVar7 << (-iVar3 - 0x7eU & 0x1f);
    }
    else {
      uVar8 = (uint)param_2 & 0x7fffff | 0x800000;
    }
    iVar9 = iVar9 - iVar3;
    do {
      bVar1 = iVar9 == 0;
      iVar9 = iVar9 + -1;
      if (bVar1) {
        if (-1 < (int)(uVar6 - uVar8)) {
          uVar6 = uVar6 - uVar8;
        }
        if (uVar6 != 0) {
          if ((int)uVar6 < 0x800000) {
            do {
              uVar6 = uVar6 << 1;
              iVar3 = iVar3 + -1;
            } while ((int)uVar6 < 0x800000);
            bVar2 = iVar3 < -0x7e;
          }
          if (bVar2) {
            uVar6 = (int)uVar6 >> (-iVar3 - 0x7eU & 0x1f);
          }
          else {
            uVar6 = uVar6 - 0x800000 | (iVar3 + 0x7f) * 0x800000;
          }
          return (float)(uVar6 | (uint)param_1 & 0x80000000);
        }
        break;
      }
      iVar4 = uVar6 - uVar8;
      uVar6 = uVar6 << 1;
    } while ((iVar4 < 0) || (uVar6 = iVar4 * 2, iVar4 != 0));
  }
  return *(float *)(&DAT_002bf8d0 + ((int)param_1 >> 0x1f) * -4);
}

