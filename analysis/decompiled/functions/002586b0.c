/* Ghidra pseudocode. PS2 address: 002586b0. Not validated source. */

void FUN_002586b0(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined4 auStack_2c [3];
  
  uStack_30 = param_1;
  auStack_2c[0] = param_2;
  FUN_00257eb8(&uStack_30,auStack_50);
  FUN_00257eb8(auStack_2c,auStack_40);
  FUN_00258598(auStack_50,auStack_40);
  return;
}

