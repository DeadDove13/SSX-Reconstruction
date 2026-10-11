/* Ghidra pseudocode. PS2 address: 00112bd8. Not validated source. */

void FUN_00112bd8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(param_1 + 0xf4);
  fVar1 = SQRT(*(float *)(param_1 + 0xf8) * *(float *)(param_1 + 0xf8) +
               *(float *)(param_1 + 0xfc) * *(float *)(param_1 + 0xfc) +
               *(float *)(param_1 + 0x100) * *(float *)(param_1 + 0x100) + fVar4 * fVar4);
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *(float *)(param_1 + 0xf4) = fVar4 * fVar1;
    *(float *)(param_1 + 0xf8) = *(float *)(param_1 + 0xf8) * fVar1;
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) * fVar1;
    *(float *)(param_1 + 0x100) = *(float *)(param_1 + 0x100) * fVar1;
  }
  fVar5 = *(float *)(param_1 + 0xfc);
  fVar7 = *(float *)(param_1 + 0x100);
  fVar8 = *(float *)(param_1 + 0xf8);
  fVar2 = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xf4);
  fVar3 = fVar5 * 0.0 - fVar7 * 0.0;
  fVar4 = fVar8 * 0.0 - fVar5;
  fVar1 = fVar7 - fVar8 * 0.0;
  fVar6 = fVar8 * fVar1 - fVar5 * fVar3;
  fVar5 = fVar5 * fVar4 - fVar7 * fVar1;
  fVar7 = fVar7 * fVar3 - fVar8 * fVar4;
  *(float *)(param_1 + 0x120) = fVar2 * fVar3 + 1.0 + fVar5 + fVar5;
  *(float *)(param_1 + 0x124) = fVar2 * fVar1 + 0.0 + fVar7 + fVar7;
  *(float *)(param_1 + 0x128) = fVar2 * fVar4 + 0.0 + fVar6 + fVar6;
  *(undefined4 *)(param_1 + 300) = 0;
  fVar3 = *(float *)(param_1 + 0xfc);
  fVar7 = *(float *)(param_1 + 0x100);
  fVar9 = *(float *)(param_1 + 0xf8);
  fVar8 = fVar7 * 0.0 - fVar9 * 0.0;
  fVar5 = fVar3 * 0.0 - fVar7 * 1.0;
  fVar4 = fVar9 * 1.0 - fVar3 * 0.0;
  fVar1 = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xf4);
  fVar2 = fVar9 * fVar8 - fVar3 * fVar5;
  fVar6 = fVar3 * fVar4 - fVar7 * fVar8;
  fVar3 = fVar7 * fVar5 - fVar9 * fVar4;
  *(float *)(param_1 + 0x110) = fVar1 * fVar5 + 0.0 + fVar6 + fVar6;
  *(float *)(param_1 + 0x114) = fVar1 * fVar8 + 1.0 + fVar3 + fVar3;
  *(float *)(param_1 + 0x118) = fVar1 * fVar4 + 0.0 + fVar2 + fVar2;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  fVar8 = *(float *)(param_1 + 0x100);
  fVar2 = *(float *)(param_1 + 0xfc);
  fVar6 = *(float *)(param_1 + 0xf8);
  fVar1 = fVar2 * 1.0 - fVar8 * 0.0;
  fVar7 = fVar8 * 0.0 - fVar6 * 1.0;
  fVar4 = fVar6 * 0.0 - fVar2 * 0.0;
  fVar3 = *(float *)(param_1 + 0xf4) + *(float *)(param_1 + 0xf4);
  fVar5 = fVar6 * fVar7 - fVar2 * fVar1;
  fVar2 = fVar2 * fVar4 - fVar8 * fVar7;
  fVar6 = fVar8 * fVar1 - fVar6 * fVar4;
  *(float *)(param_1 + 0x130) = fVar3 * fVar1 + 0.0 + fVar2 + fVar2;
  *(float *)(param_1 + 0x134) = fVar3 * fVar7 + 0.0 + fVar6 + fVar6;
  *(float *)(param_1 + 0x138) = fVar3 * fVar4 + 1.0 + fVar5 + fVar5;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  fVar4 = *(float *)(param_1 + 0x110);
  fVar1 = *(float *)(param_1 + 0x114);
  if (fVar4 == 0.0) {
    if (fVar1 != 0.0) {
      if (fVar1 < 0.0) {
        *(undefined **)(param_1 + 0x140) = PTR_DAT_002c144c;
        return;
      }
      *(undefined4 *)(param_1 + 0x140) = DAT_002c1450;
      return;
    }
  }
  else {
    fVar2 = fVar1;
    fVar1 = (float)FUN_00218510(fVar1 / fVar4);
    if (fVar4 < 0.0) {
      if (0.0 < fVar2) {
        fVar1 = fVar1 + DAT_002c1454;
      }
      else {
        fVar1 = fVar1 - DAT_002c1458;
      }
    }
  }
  *(float *)(param_1 + 0x140) = fVar1;
  return;
}

