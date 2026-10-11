/* Ghidra pseudocode. PS2 address: 002574c0. Not validated source. */

void FUN_002574c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_002571e0(&uStack_30,auStack_90);
  FUN_002571e0(&uStack_28,auStack_70);
  uVar1 = FUN_00257280(auStack_90,auStack_70,auStack_50);
  FUN_002570b0(uVar1);
  return;
}

