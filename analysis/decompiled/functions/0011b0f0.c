/* Ghidra pseudocode. PS2 address: 0011b0f0. Not validated source. */

float FUN_0011b0f0(undefined8 param_1,int param_2,undefined1 (*param_3) [16])

{
  int iVar1;
  int iVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  iVar2 = param_2 + 0x40c;
  iVar1 = 2;
  fVar3 = *(float *)(param_2 + 0x400) + *(float *)(param_2 + 0x404) + *(float *)(param_2 + 0x408);
  do {
    auVar4 = _lqc2(*param_3);
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x34));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    iVar1 = iVar1 + -1;
    if (0.0 < auVar4._0_4_) {
      fVar3 = fVar3 + auVar4._0_4_ *
                      (*(float *)(iVar2 + 4) + *(float *)(iVar2 + 8) + *(float *)(iVar2 + 0xc));
    }
    iVar2 = iVar2 + 0x10;
  } while (-1 < iVar1);
  return fVar3;
}

