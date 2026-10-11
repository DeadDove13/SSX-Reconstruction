/* Ghidra pseudocode. PS2 address: 00219d50. Not validated source. */

void FUN_00219d50(int param_1,int param_2)

{
  int iVar1;
  
  if ((&DAT_00298ba4)[param_2 * 0x16] == 2) {
    FUN_00235ff0(*(undefined4 *)(&DAT_00298bb0 + param_2 * 0x58));
    FUN_00235eb0(*(undefined4 *)(&DAT_00298bb0 + param_2 * 0x58),0,0);
  }
  param_2 = param_2 * 0x58;
  if (*(int *)(&DAT_00298bb4 + param_2) == 0) {
    iVar1 = *(int *)(&DAT_00298bb8 + param_2);
  }
  else {
    FUN_0023a998();
    iVar1 = *(int *)(&DAT_00298bb8 + param_2);
  }
  if (iVar1 != 0) {
    FUN_00103710();
  }
  FUN_0023bbd0(&DAT_00298b98 + param_2,0,0x58);
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

