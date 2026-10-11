/* Ghidra pseudocode. PS2 address: 00135e98. Not validated source. */

void FUN_00135e98(float param_1,int param_2,undefined1 (*param_3) [16],undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x70));
  auVar7 = _qmtc2(param_1);
  auVar7 = _vmulbc(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x30));
  auVar7 = _lqc2(auVar7);
  auVar7 = _vadd(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0x30) = auVar7;
  fVar6 = *(float *)(param_2 + 0x80);
  fVar5 = *(float *)(param_2 + 0x40);
  fVar3 = *(float *)(param_2 + 0x44);
  fVar4 = *(float *)(param_2 + 0x48);
  fVar2 = *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x40) =
       fVar5 + ((-fVar6 * *(float *)(param_2 + 0x44) -
                *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x48)) -
               *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x4c)) * 0.5 * param_1;
  fVar1 = *(float *)(param_2 + 0x44) +
          ((fVar6 * fVar5 + *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x4c)) -
          *(float *)(param_2 + 0x88) * *(float *)(param_2 + 0x48)) * 0.5 * param_1;
  *(float *)(param_2 + 0x44) = fVar1;
  fVar3 = *(float *)(param_2 + 0x48) +
          ((*(float *)(param_2 + 0x84) * fVar5 + *(float *)(param_2 + 0x88) * fVar3) -
          fVar6 * *(float *)(param_2 + 0x4c)) * 0.5 * param_1;
  *(float *)(param_2 + 0x48) = fVar3;
  fVar2 = *(float *)(param_2 + 0x4c) +
          ((*(float *)(param_2 + 0x88) * fVar5 + fVar6 * fVar4) - *(float *)(param_2 + 0x84) * fVar2
          ) * 0.5 * param_1;
  *(float *)(param_2 + 0x4c) = fVar2;
  fVar4 = *(float *)(param_2 + 0x40);
  fVar1 = SQRT(fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  if (fVar1 == 0.0) {
    *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *(float *)(param_2 + 0x40) = fVar4 * fVar1;
    *(float *)(param_2 + 0x44) = *(float *)(param_2 + 0x44) * fVar1;
    *(float *)(param_2 + 0x48) = *(float *)(param_2 + 0x48) * fVar1;
    *(float *)(param_2 + 0x4c) = *(float *)(param_2 + 0x4c) * fVar1;
  }
  auVar8 = _lqc2(*param_3);
  auVar7 = _qmtc2(param_1);
  auVar7 = _vmulbc(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x50));
  auVar7 = _lqc2(auVar7);
  auVar7 = _vadd(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0x50) = auVar7;
  auVar8 = _lqc2(*param_4);
  auVar7 = _qmtc2(param_1);
  auVar7 = _vmulbc(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  auVar8 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x60));
  auVar7 = _lqc2(auVar7);
  auVar7 = _vadd(auVar8,auVar7);
  auVar7 = _sqc2(auVar7);
  *(undefined1 (*) [16])(param_2 + 0x60) = auVar7;
  return;
}

