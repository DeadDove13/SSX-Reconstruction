/* Ghidra pseudocode. PS2 address: 00219e68. Not validated source. */

void FUN_00219e68(undefined8 param_1,undefined8 param_2)

{
  *(undefined4 *)param_1 = 0;
  ((undefined4 *)param_1)[4] = &DAT_002bdca0;
  FUN_00219f08();
  FUN_00219350(param_1,param_2);
  return;
}

