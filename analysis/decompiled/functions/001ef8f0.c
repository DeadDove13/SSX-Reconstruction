/* Ghidra pseudocode. PS2 address: 001ef8f0. Not validated source. */

void FUN_001ef8f0(undefined8 param_1,undefined4 param_2,uint param_3)

{
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iStack_2c = 1 << (param_3 & 0x1f);
  uStack_30 = param_2;
  uStack_28 = FUN_001ef898();
  FUN_001ef838(&uStack_30,(uint)&uStack_30 | 4,(uint)&uStack_30 | 8);
  FUN_002094c8(param_1);
  return;
}

