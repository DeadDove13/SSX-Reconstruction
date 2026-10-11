/* Ghidra pseudocode. PS2 address: 00147088. Not validated source. */

void FUN_00147088(undefined8 param_1)

{
  if (*(int *)((int)param_1 + 0x240) != 3) {
    FUN_00146b60(param_1,0);
    *(undefined4 *)((int)param_1 + 0x240) = 3;
    FUN_00146ac8(param_1,0);
    FUN_00146ac8(param_1,4);
    FUN_00146ac8(param_1,6);
    FUN_00146ac8(param_1,0x16);
    FUN_00146ac8(param_1,0x20);
    FUN_00146ac8(param_1,1);
    FUN_00146ac8(param_1,2);
    FUN_00146ac8(param_1,3);
    return;
  }
  return;
}

