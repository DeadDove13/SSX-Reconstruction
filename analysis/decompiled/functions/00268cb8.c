/* Ghidra pseudocode. PS2 address: 00268cb8. Not validated source. */

void FUN_00268cb8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint uStack_18;
  
  uStack_18 = param_3 & 0xffff;
  uStack_20 = param_1;
  uStack_1c = param_2;
  Deci2Call(0xfffffffffffffffb,&uStack_20);
  return;
}

