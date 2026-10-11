/* Ghidra pseudocode. PS2 address: 00136e80. Not validated source. */

void FUN_00136e80(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00138820();
  if (lVar1 != 0) {
    FUN_001f1698(DAT_002c56e8);
  }
  FUN_00137ea0(0x3fc00000,param_1,0xe,0xffffffffffffffff);
  return;
}

