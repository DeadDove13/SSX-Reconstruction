/* Ghidra pseudocode. PS2 address: 0023d6b8. Not validated source. */

void FUN_0023d6b8(long param_1,int param_2,long param_3,long param_4,int param_5,int *param_6)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  if ((param_1 == 0) || (*(int *)*(undefined4 *)param_1 != 0x4d525453)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    param_6 = (int *)*(undefined4 *)param_1;
  }
  if ((((!bVar2) && (0 < param_2)) && (param_2 <= param_6[5])) &&
     ((param_2 != param_6[5] || (param_3 == 0 && param_4 == 0)))) {
    if (param_5 < 1) {
      if ((param_5 != -1) && (param_5 != -2)) {
        return;
      }
      iVar1 = param_6[7];
    }
    else {
      iVar1 = param_6[7];
    }
    if ((param_5 <= iVar1) && (param_6[10] == 0)) {
      puVar3 = (undefined4 *)(param_6[4] + param_2 * 0xc + -0xc);
      puVar3[2] = param_5;
      *puVar3 = (int)param_3;
      puVar3[1] = (int)param_4;
    }
  }
  return;
}

