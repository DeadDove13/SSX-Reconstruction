/* Ghidra pseudocode. PS2 address: 00258598. Not validated source. */

int FUN_00258598(uint *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if ((uVar3 < 2) || (uVar1 = *param_2, uVar1 < 2)) {
    return 1;
  }
  if (uVar3 == 4) {
    if ((uVar1 ^ 4) == 0) {
      return param_2[1] - param_1[1];
    }
    uVar3 = param_1[1];
  }
  else {
    if ((uVar1 ^ 4) == 0) {
      iVar2 = 1;
      if (param_2[1] == 0) {
        iVar2 = -1;
      }
      return iVar2;
    }
    if (uVar3 == 2) {
      if ((uVar1 ^ 2) == 0) {
        return 0;
      }
      iVar2 = -1;
      if (param_2[1] != 0) {
        iVar2 = 1;
      }
      return iVar2;
    }
    if ((uVar1 ^ 2) != 0) {
      uVar3 = param_1[1];
      if (uVar3 == param_2[1]) {
        if ((int)param_1[2] <= (int)param_2[2]) {
          if ((int)param_2[2] <= (int)param_1[2]) {
            if (param_2[3] < param_1[3]) goto LAB_00258650;
            if (param_2[3] <= param_1[3]) {
              return 0;
            }
          }
          iVar2 = 1;
          if (uVar3 == 0) {
            iVar2 = -1;
          }
          return iVar2;
        }
      }
LAB_00258650:
      iVar2 = -1;
      if (uVar3 == 0) {
        iVar2 = 1;
      }
      return iVar2;
    }
    uVar3 = param_1[1];
  }
  iVar2 = -1;
  if (uVar3 == 0) {
    iVar2 = 1;
  }
  return iVar2;
}

