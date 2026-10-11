/* Ghidra pseudocode. PS2 address: 00219e30. Not validated source. */

undefined8 FUN_00219e30(undefined8 param_1)

{
  FUN_00219328();
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined **)((int)param_1 + 0x10) = &DAT_002bdca0;
  return param_1;
}

