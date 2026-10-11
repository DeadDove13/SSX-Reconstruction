/* Ghidra pseudocode. PS2 address: 00226ff8. Not validated source. */

void FUN_00226ff8(int *param_1,int param_2)

{
  FUN_0023d4a8(param_1[1]);
  *(undefined4 *)(*(char *)((int)param_1 + 0x17) * 0x2c + *param_1 + 0x24) =
       *(undefined4 *)(param_2 + 8);
  return;
}

