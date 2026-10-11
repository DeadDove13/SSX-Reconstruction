/* Ghidra pseudocode. PS2 address: 002581d8. Not validated source. */

void FUN_002581d8(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [4];
  uint uStack_4c;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  uStack_30 = param_1;
  auStack_2c[0] = param_2;
  FUN_00257eb8(&uStack_30,auStack_60);
  FUN_00257eb8(auStack_2c,auStack_50);
  uStack_4c = uStack_4c ^ 1;
  uVar1 = FUN_00257f48(auStack_60,auStack_50,auStack_40);
  FUN_00257da8(uVar1);
  return;
}

