/* Ghidra pseudocode. PS2 address: 001c5bc0. Not validated source. */

undefined4 FUN_001c5bc0(int param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined4 in_vi1;
  undefined4 in_vi2;
  
  _lqc2(*param_2);
  _lqc2(*param_3);
  _lqc2(*(undefined1 (*) [16])(param_1 + 0xe0));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0xf0));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x100));
  _lqc2(*(undefined1 (*) [16])(param_1 + 0x110));
  _ctc2(100);
  _vnop();
  _vnop();
  _vcallmsr();
  lVar3 = _cfc2(in_vi1);
  lVar2 = _cfc2(in_vi2);
  uVar1 = 1;
  if ((lVar2 == 0) && (uVar1 = 2, lVar3 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

