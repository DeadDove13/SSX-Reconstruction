/* Ghidra pseudocode. PS2 address: 00217a10. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00217b04) */

undefined8 FUN_00217a10(undefined8 param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float afStack_10 [4];
  
  pfVar4 = (float *)param_1;
  *pfVar4 = param_2[0xc];
  pfVar4[1] = param_2[0xd];
  pfVar4[2] = param_2[0xe];
  pfVar4[3] = param_2[0xf];
  fVar5 = *param_2 + param_2[5] + param_2[10];
  if (0.0 < fVar5) {
    fVar5 = SQRT(fVar5 + 1.0);
    fVar6 = 0.5 / fVar5;
    pfVar4[4] = fVar5 * 0.5;
    pfVar4[5] = (param_2[6] - param_2[9]) * fVar6;
    pfVar4[6] = (param_2[8] - param_2[2]) * fVar6;
    pfVar4[7] = (param_2[1] - param_2[4]) * fVar6;
  }
  else {
    uVar3 = (uint)(*param_2 < param_2[5]);
    if (param_2[uVar3 * 5] < param_2[10]) {
      uVar3 = 2;
    }
    uVar1 = (uVar3 + 1) % 3;
    uVar2 = (uVar1 + 1) % 3;
    fVar5 = SQRT(((param_2[uVar3 * 5] - param_2[uVar1 * 5]) - param_2[uVar2 * 5]) + 1.0);
    afStack_10[uVar3] = fVar5 * 0.5;
    if (fVar5 != 0.0) {
      fVar5 = 0.5 / fVar5;
    }
    fVar7 = param_2[uVar2 * 4 + uVar3];
    fVar6 = param_2[uVar3 * 4 + uVar2];
    afStack_10[3] = (param_2[uVar1 * 4 + uVar2] - param_2[uVar2 * 4 + uVar1]) * fVar5;
    afStack_10[uVar1] = (param_2[uVar3 * 4 + uVar1] + param_2[uVar1 * 4 + uVar3]) * fVar5;
    afStack_10[uVar2] = (fVar6 + fVar7) * fVar5;
    pfVar4[5] = afStack_10[0];
    pfVar4[6] = afStack_10[1];
    pfVar4[7] = afStack_10[2];
    pfVar4[4] = afStack_10[3];
  }
  return param_1;
}

