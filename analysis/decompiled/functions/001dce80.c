/* Ghidra pseudocode. PS2 address: 001dce80. Not validated source. */

void FUN_001dce80(int *param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  FUN_001dce40();
  if ((float)*param_1 * (float)param_1[3] < (float)param_1[2]) {
    fVar1 = (float)param_1[2] - (float)param_1[3];
    while( true ) {
      param_1[2] = (int)fVar1;
      auVar2 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x28));
      auVar3 = _lqc2(*(undefined1 (*) [16])(param_1 + 0x34));
      auVar2 = _vadd(auVar2,auVar3);
      auVar2 = _sqc2(auVar2);
      *(undefined1 (*) [16])(param_1 + 0x28) = auVar2;
      FUN_001dce58(param_1 + 10);
      FUN_001dce58(param_1 + 0xb);
      FUN_001dce58(param_1 + 0xc);
      FUN_001dce58(param_1 + 0xd);
      FUN_001dce58(param_1 + 0xe);
      FUN_001dce58(param_1 + 0x10);
      FUN_001dce58(param_1 + 0x11);
      FUN_001dce58(param_1 + 0x12);
      FUN_001dce58(param_1 + 0x13);
      if ((float)param_1[2] <= (float)*param_1 * (float)param_1[3]) break;
      fVar1 = (float)param_1[2] - (float)param_1[3];
    }
  }
  return;
}

