/* Ghidra pseudocode. PS2 address: 0018f938. Not validated source. */

undefined8 FUN_0018f938(undefined8 param_1,undefined4 param_2)

{
  FUN_0018dbd0(param_1,0xffffffffffffffff);
  *(undefined4 *)((int)param_1 + 0x10) = param_2;
  *(undefined **)((int)param_1 + 0xc) = &DAT_002b4938;
  return param_1;
}

