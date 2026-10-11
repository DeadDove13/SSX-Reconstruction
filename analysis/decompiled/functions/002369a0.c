/* Ghidra pseudocode. PS2 address: 002369a0. Not validated source. */

void FUN_002369a0(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_24 = 1;
  auStack_30[0] = param_1;
  uStack_28 = param_2;
  uVar1 = FUN_0023e600();
  FUN_002395c8(0x2366c0,uVar1,DAT_002c59a0,auStack_30);
  return;
}

