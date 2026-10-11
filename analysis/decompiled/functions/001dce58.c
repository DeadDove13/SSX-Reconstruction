/* Ghidra pseudocode. PS2 address: 001dce58. Not validated source. */

void FUN_001dce58(undefined4 *param_1)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1 = _qmtc2(*param_1);
  uVar2 = _vrinit(auVar1);
  auVar1 = _vrnext(uVar2);
  auVar1 = _qmfc2(auVar1._0_4_);
  *param_1 = auVar1._0_4_;
  return;
}

