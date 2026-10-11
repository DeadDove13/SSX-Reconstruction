/* Ghidra pseudocode. PS2 address: 001e7538. Not validated source. */

void FUN_001e7538(int param_1,undefined1 (*param_2) [16])

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 in_vf0 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar3 = 1;
  piVar2 = *(int **)(*(int *)(DAT_002859e4 + 0x14) + 0x90);
  while( true ) {
    if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x80) <= iVar3) break;
    piVar1 = *(int **)(*(int *)(DAT_002859e4 + 0x14) + iVar3 * 4 + 0x90);
    iVar3 = iVar3 + 1;
    if (*(int *)(*piVar1 + 0x9c) < *(int *)(*piVar2 + 0x9c)) {
      piVar2 = piVar1;
    }
  }
  auVar4 = _lqc2(**(undefined1 (**) [16])(param_1 + 0x80));
  auVar5 = _lqc2(*param_2);
  auVar6 = _vaddbc(in_vf0,in_vf0);
  auVar4 = _vmul(auVar4,auVar5);
  _vaddabc(auVar4,auVar4);
  _vmaddabc(auVar6,auVar4);
  auVar4 = _vmaddbc(auVar6,auVar4);
  auVar4 = _qmfc2(auVar4._0_4_);
  auVar5 = _lqc2(*(undefined1 (*) [16])(*piVar2 + 0xc0));
  auVar6 = _lqc2(*param_2);
  auVar7 = _vaddbc(in_vf0,in_vf0);
  auVar5 = _vmul(auVar5,auVar6);
  _vaddabc(auVar5,auVar5);
  _vmaddabc(auVar7,auVar5);
  auVar5 = _vmaddbc(auVar7,auVar5);
  auVar5 = _qmfc2(auVar5._0_4_);
  *(float *)(param_1 + 0x4c) = (auVar4._0_4_ - (auVar5._0_4_ + DAT_002c3858)) / -10.0;
  return;
}

