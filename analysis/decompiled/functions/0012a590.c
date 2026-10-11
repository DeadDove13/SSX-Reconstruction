/* Ghidra pseudocode. PS2 address: 0012a590. Not validated source. */

void FUN_0012a590(int param_1,int param_2)

{
  int iVar1;
  undefined1 in_vf0 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (*(float *)(param_1 + 0x38) < 1.0) {
    auVar2 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x20));
    auVar3 = _lqc2(*(undefined1 (*) [16])(param_2 + 0x10));
    auVar4 = _vaddbc(in_vf0,in_vf0);
    auVar2 = _vmul(auVar2,auVar3);
    _vaddabc(auVar2,auVar2);
    _vmaddabc(auVar4,auVar2);
    auVar2 = _vmaddbc(auVar4,auVar2);
    auVar2 = _qmfc2(auVar2._0_4_);
    FUN_0012a628(auVar2._0_4_ * *(float *)(param_2 + 0x30) * DAT_002c1b64);
    if (*(int *)(param_1 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 4;
      iVar1 = *(int *)(param_1 + 0x44);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x44);
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x40) = 4;
    }
  }
  return;
}

