/* Ghidra pseudocode. PS2 address: 00253308. Not validated source. */

int FUN_00253308(float param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float afStack_50 [4];
  
  pfVar3 = afStack_50;
  afStack_50[2] = ABS(param_1);
  pfVar4 = (float *)param_2;
  if ((uint)afStack_50[2] < 0x3f490fd9) {
    *pfVar4 = param_1;
    pfVar4[1] = 0.0;
    return 0;
  }
  if ((uint)afStack_50[2] < 0x4016cbe4) {
    if (0 < (int)param_1) {
      fVar9 = param_1 - 1.5707855;
      if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
        fVar6 = 6.0771e-11;
        fVar9 = fVar9 - 1.0804273e-05;
        fVar5 = fVar9 - 6.0771e-11;
      }
      else {
        fVar6 = 1.0804334e-05;
        fVar5 = fVar9 - 1.0804334e-05;
      }
      *pfVar4 = fVar5;
      pfVar4[1] = (fVar9 - fVar5) - fVar6;
      return 1;
    }
    fVar9 = param_1 + 1.5707855;
    if (((uint)param_1 & 0x7ffffff0) == 0x3fc90fd0) {
      fVar6 = 6.0771e-11;
      fVar9 = fVar9 + 1.0804273e-05;
      fVar5 = fVar9 + 6.0771e-11;
    }
    else {
      fVar6 = 1.0804334e-05;
      fVar5 = fVar9 + 1.0804334e-05;
    }
    *pfVar4 = fVar5;
    pfVar4[1] = (fVar9 - fVar5) + fVar6;
    return -1;
  }
  iVar2 = (int)afStack_50[2] >> 0x17;
  if (0x43490f80 < (uint)afStack_50[2]) {
    if (0x7f7fffff < (uint)afStack_50[2]) {
      *pfVar4 = param_1 - param_1;
      pfVar4[1] = param_1 - param_1;
      return 0;
    }
    afStack_50[2] = (float)((int)afStack_50[2] + (iVar2 + -0x86) * -0x800000);
    iVar7 = 1;
    do {
      iVar7 = iVar7 + -1;
      *pfVar3 = (float)(int)afStack_50[2];
      pfVar3 = pfVar3 + 1;
      afStack_50[2] = (afStack_50[2] - (float)(int)afStack_50[2]) * 256.0;
    } while (-1 < iVar7);
    iVar7 = 3;
    if (afStack_50[2] == 0.0) {
      iVar1 = 2;
      do {
        iVar7 = iVar1;
        iVar1 = iVar7 + -1;
      } while (afStack_50[iVar7 + -1] == 0.0);
    }
    iVar7 = FUN_002546c8(afStack_50,param_2,iVar2 + -0x86,iVar7,2,0x2bf908);
    if (-1 < (int)param_1) {
      return iVar7;
    }
    fVar9 = *pfVar4;
    fVar6 = pfVar4[1];
    goto LAB_002536bc;
  }
  fVar5 = (float)FUN_002556d8();
  iVar7 = (int)(fVar5 * 0.6366198 + 0.5);
  fVar9 = (float)iVar7;
  fVar6 = fVar9 * 1.0804334e-05;
  fVar5 = fVar5 - fVar9 * 1.5707855;
  if ((iVar7 < 0x20) &&
     (((uint)param_1 & 0x7fffff00) != *(uint *)(&DAT_002bfc20 + (iVar7 + -1) * 4))) {
    *pfVar4 = fVar5 - fVar6;
LAB_002535b8:
    fVar9 = *pfVar4;
    fVar8 = fVar5;
  }
  else {
    *pfVar4 = fVar5 - fVar6;
    if ((int)(iVar2 - ((uint)(fVar5 - fVar6) >> 0x17 & 0xff)) < 9) {
      fVar9 = *pfVar4;
      fVar8 = fVar5;
    }
    else {
      fVar8 = fVar5 - fVar9 * 1.0804273e-05;
      fVar6 = fVar9 * 6.0771e-11 - ((fVar5 - fVar8) - fVar9 * 1.0804273e-05);
      *pfVar4 = fVar8 - fVar6;
      if (0x19 < (int)(iVar2 - ((uint)(fVar8 - fVar6) >> 0x17 & 0xff))) {
        fVar5 = fVar8 - fVar9 * 6.0770944e-11;
        fVar6 = fVar9 * 6.123234e-17 - ((fVar8 - fVar5) - fVar9 * 6.0770944e-11);
        *pfVar4 = fVar5 - fVar6;
        goto LAB_002535b8;
      }
      fVar9 = *pfVar4;
    }
  }
  fVar6 = (fVar8 - fVar9) - fVar6;
  pfVar4[1] = fVar6;
  if (-1 < (int)param_1) {
    return iVar7;
  }
LAB_002536bc:
  *pfVar4 = -fVar9;
  pfVar4[1] = -fVar6;
  return -iVar7;
}

