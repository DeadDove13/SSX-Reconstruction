/* Ghidra pseudocode. PS2 address: 0023dc28. Not validated source. */

int FUN_0023dc28(long param_1,int *param_2)

{
  bool bVar1;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    param_2 = (int *)*(undefined4 *)param_1;
  }
  if (!bVar1) {
    return param_2[9] - param_2[8];
  }
  return 0;
}

