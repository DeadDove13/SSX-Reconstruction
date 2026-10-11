/* Ghidra pseudocode. PS2 address: 001c2030. Not validated source. */

void FUN_001c2030(int param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  fVar1 = *(float *)(param_1 + 0x4b8) + *(float *)(param_1 + 0x4b8);
  fVar2 = 1.0 / fVar1;
  auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x490));
  auVar4._4_4_ = (float)(int)(*(float *)(param_1 + 0x494) * fVar2) * fVar1;
  auVar4._0_4_ = (float)(int)(*(float *)(param_1 + 0x490) * fVar2) * fVar1;
  auVar4._8_4_ = (float)(int)(*(float *)(param_1 + 0x498) * fVar2) * fVar1;
  auVar4._12_4_ = 0;
  auVar4 = _lqc2(auVar4);
  auVar4 = _vsub(auVar3,auVar4);
  auVar4 = _sqc2(auVar4);
  *(undefined1 (*) [16])(param_1 + 0x490) = auVar4;
  return;
}

