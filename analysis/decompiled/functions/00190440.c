/* Ghidra pseudocode. PS2 address: 00190440. Not validated source. */

undefined8
FUN_00190440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  FUN_0018dbd0();
  *(undefined **)((int)param_1 + 0xc) = &DAT_002b47f8;
  FUN_001904b0(param_1,param_3,param_4,param_5);
  return param_1;
}

