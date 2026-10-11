/* Ghidra pseudocode. PS2 address: 002100f0. Not validated source. */

bool FUN_002100f0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                 undefined1 (*param_4) [16])

{
  long lVar1;
  undefined4 in_vi2;
  
  _lqc2(*param_1);
  _lqc2(*param_2);
  _lqc2(*param_3);
  _lqc2(*param_4);
  _ctc2(0xae);
  _vnop();
  _vnop();
  _vcallmsr();
  lVar1 = _cfc2(in_vi2);
  return lVar1 != 0;
}

