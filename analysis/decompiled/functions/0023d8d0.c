/* Ghidra pseudocode. PS2 address: 0023d8d0. Not validated source. */

void FUN_0023d8d0(long param_1,long param_2,int *param_3)

{
  bool bVar1;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    param_3 = (int *)*(undefined4 *)param_1;
  }
  if (!bVar1) {
    param_3[0xe] = (int)param_2;
    if ((param_2 != 0) && (param_3[10] == 1)) {
      FUN_00237ae8(param_3[0x29],param_3[0xc]);
    }
  }
  return;
}

