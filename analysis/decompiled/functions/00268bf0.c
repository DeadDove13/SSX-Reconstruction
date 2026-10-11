/* Ghidra pseudocode. PS2 address: 00268bf0. Not validated source. */

void FUN_00268bf0(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined *puStack_14;
  
  uStack_20 = param_1 & 0xffff;
  puStack_14 = &DAT_202d7ee8;
  uStack_1c = param_2;
  uStack_18 = param_3;
  Deci2Call(1,&uStack_20);
  return;
}

