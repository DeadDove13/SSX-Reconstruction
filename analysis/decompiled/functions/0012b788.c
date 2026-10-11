/* Ghidra pseudocode. PS2 address: 0012b788. Not validated source. */

void FUN_0012b788(int param_1,long param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  fVar1 = DAT_002c1b8c;
  iVar2 = (int)param_2;
  if ((param_2 != 0) && (0.0 < *(float *)(param_1 + 0x3c))) {
    fVar3 = *(float *)(iVar2 + 0x30);
    auVar4 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x10));
    auVar5 = _lqc2(*(undefined1 (*) [16])(iVar2 + 0x20));
    auVar6 = _vaddbc(in_vf0,in_vf0);
    auVar4 = _vmul(auVar4,auVar5);
    _vaddabc(auVar4,auVar4);
    _vmaddabc(auVar6,auVar4);
    auVar4 = _vmaddbc(auVar6,auVar4);
    auVar4 = _qmfc2(auVar4._0_4_);
    *(undefined4 *)(param_1 + 0x38) = 0x1e;
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) - ABS(auVar4._0_4_ * fVar3) * fVar1;
  }
  return;
}

