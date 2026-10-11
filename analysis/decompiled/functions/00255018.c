/* Ghidra pseudocode. PS2 address: 00255018. Not validated source. */

float FUN_00255018(float param_1,float param_2,long param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = (undefined *)((uint)param_1 & 0x7fffffff);
  if ((&UNK_317fffff < puVar1) || ((int)param_1 != 0)) {
    if (puVar1 < (undefined *)0x3f2ca140) {
      fVar2 = param_1 * param_1;
      fVar3 = param_1;
    }
    else {
      fVar2 = param_1;
      if ((int)param_1 < 0) {
        fVar2 = -param_1;
        param_2 = -param_2;
      }
      fVar3 = 3.7748947e-08 - param_2;
      param_2 = 0.0;
      fVar3 = (0.7853981 - fVar2) + fVar3;
      fVar2 = fVar3 * fVar3;
    }
    fVar5 = fVar2 * fVar2;
    fVar2 = param_2 + fVar2 * (fVar2 * fVar3 *
                               (DAT_002bfe2c +
                                fVar5 * (DAT_002bfe34 +
                                        fVar5 * (DAT_002bfe3c +
                                                fVar5 * (DAT_002bfe44 +
                                                        fVar5 * (DAT_002bfe4c + fVar5 * DAT_002bfe54
                                                                )))) +
                               fVar2 * (DAT_002bfe30 +
                                       fVar5 * (DAT_002bfe38 +
                                               fVar5 * (DAT_002bfe40 +
                                                       fVar5 * (DAT_002bfe48 +
                                                               fVar5 * (DAT_002bfe50 +
                                                                       fVar5 * DAT_002bfe58)))))) +
                              param_2) + DAT_002bfe28 * fVar2 * fVar3;
    fVar5 = fVar3 + fVar2;
    if (puVar1 < (undefined *)0x3f2ca140) {
      param_1 = fVar5;
      if (param_3 != 1) {
        param_1 = (float)((uint)(-1.0 / fVar5) & 0xfffff000);
        param_1 = param_1 + (-1.0 / fVar5) *
                            (param_1 * (float)((uint)fVar5 & 0xfffff000) + 1.0 +
                            param_1 * (fVar2 - ((float)((uint)fVar5 & 0xfffff000) - fVar3)));
      }
    }
    else {
      fVar4 = (float)(int)param_3;
      fVar3 = fVar3 - ((fVar5 * fVar5) / (fVar5 + fVar4) - fVar2);
      param_1 = (float)(int)(1 - ((int)param_1 >> 0x1e & 2U)) * (fVar4 - (fVar3 + fVar3));
    }
  }
  else if (puVar1 == (undefined *)0x0 && (int)param_3 == -1) {
    fVar2 = (float)FUN_002556d8();
    param_1 = 1.0 / fVar2;
  }
  else if (param_3 != 1) {
    param_1 = -1.0 / param_1;
  }
  return param_1;
}

