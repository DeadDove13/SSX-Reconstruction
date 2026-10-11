/* Ghidra pseudocode. PS2 address: 00258948. Not validated source. */

void FUN_00258948(undefined4 param_1)

{
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 auStack_20 [4];
  
  auStack_20[0] = param_1;
  FUN_00257eb8(auStack_20,&uStack_30);
  FUN_00257d20(uStack_30,uStack_2c,uStack_28,(ulong)uStack_24 << 0x1e);
  return;
}

