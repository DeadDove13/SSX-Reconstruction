/* Ghidra pseudocode. PS2 address: 0022c8f0. Not validated source. */

void FUN_0022c8f0(int param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  if (param_4 < 0) {
    if (param_5 < 0) {
      uVar2 = 2;
      if (param_4 < param_5) {
        uVar2 = 1;
      }
    }
    else {
LAB_0022c930:
      iVar3 = -param_4;
      if (-1 < param_4) {
        iVar3 = param_4;
      }
      if (param_5 < 0) {
        uVar2 = 4;
        if (iVar3 <= -param_5) {
          uVar2 = 3;
        }
      }
      else {
        uVar2 = 4;
        if (iVar3 <= param_5) {
          uVar2 = 3;
        }
      }
    }
  }
  else {
    if (param_5 < 0) goto LAB_0022c930;
    uVar2 = 1;
    if (param_4 < param_5) {
      uVar2 = 2;
    }
  }
  iVar3 = 0;
  if (param_1 - 0x4000U < 0x8000) {
    cVar4 = *param_2;
    iVar1 = 4;
    if (*param_2 < *param_3) {
      iVar1 = 3;
    }
    if ((2 < uVar2) || (iVar3 = 2, iVar1 != 3)) goto LAB_0022c9e8;
    uVar2 = uVar2 ^ 2;
  }
  else {
    cVar4 = *param_2;
    iVar1 = 1;
    if (*param_2 < *param_3) {
      iVar1 = 2;
    }
    if (uVar2 < 3) goto LAB_0022c9e8;
    iVar3 = 2;
    uVar2 = uVar2 ^ 3;
    if (iVar1 != 2) goto LAB_0022c9e8;
  }
  iVar3 = 2;
  if (uVar2 == 0) {
    iVar3 = 1;
  }
LAB_0022c9e8:
  if (param_4 < 0) {
    *param_2 = -cVar4;
  }
  if (param_5 < 0) {
    *param_3 = -*param_3;
  }
  if (iVar3 != 1) {
    if (iVar3 == 2) {
      *param_3 = -*param_3;
    }
    return;
  }
  *param_2 = -*param_2;
  return;
}

