/* Ghidra pseudocode. PS2 address: 00219f40. Not validated source. */

void FUN_00219f40(undefined8 param_1,int param_2)

{
  if (*(int *)(&DAT_00298bb8 + param_2 * 0x58) != 0) {
    FUN_00103710();
    *(int *)(&DAT_00298bb8 + param_2 * 0x58) = 0;
  }
  FUN_0023bbd0(&DAT_00298b98 + param_2 * 0x58,0,0x58);
  return;
}

