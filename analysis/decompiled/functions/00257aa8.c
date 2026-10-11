/* Ghidra pseudocode. PS2 address: 00257aa8. Not validated source. */

void FUN_00257aa8(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [32];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  FUN_002571e0(&uStack_30,auStack_70);
  FUN_002571e0(&uStack_28,auStack_50);
  FUN_00257990(auStack_70,auStack_50);
  return;
}

