/* Ghidra pseudocode. PS2 address: 0023d938. Not validated source. */

int FUN_0023d938(long param_1,int param_2,int *param_3)

{
  bool bVar1;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    param_3 = (int *)*(undefined4 *)param_1;
  }
  if (((!bVar1) && (0 < param_2)) && (param_2 <= param_3[7])) {
    return param_3[6] + param_2 * 0x10 + -0x10;
  }
  return 0;
}

