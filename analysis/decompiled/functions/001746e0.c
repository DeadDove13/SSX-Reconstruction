/* Ghidra pseudocode. PS2 address: 001746e0. Not validated source. */

undefined4 FUN_001746e0(int *param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((1 < *param_1) && ((param_2 & 0x60003) != 0)) {
    FUN_001fb018(DAT_002c56e8);
  }
  if ((param_2 & 0x20001) == 0) {
    if ((param_2 & 0x40002) == 0) {
      iVar2 = param_1[1];
      goto LAB_00174788;
    }
    iVar2 = param_1[7];
    param_1[7] = iVar2 + 1;
    if (*param_1 <= iVar2 + 1) {
      param_1[7] = 0;
    }
  }
  else {
    iVar2 = param_1[7];
    param_1[7] = iVar2 + -1;
    if (iVar2 + -1 < 0) {
      param_1[7] = *param_1 + -1;
    }
  }
  iVar2 = param_1[1];
LAB_00174788:
  if (iVar2 == 0) {
    if (param_1[3] == 0) {
      uVar1 = 0;
      if ((param_2 & 0x9a0) != 0) {
        FUN_001faea0(DAT_002c56e8);
        uVar1 = 3;
      }
    }
    else {
      FUN_001730e0(param_1[3],param_1[7]);
      if (param_1[2] == 0) {
        uVar1 = 0;
      }
      else {
        iVar2 = param_1[7];
        iVar3 = param_1[3];
        if (0 < iVar2) {
          do {
            iVar3 = *(int *)(iVar3 + 0x20);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        (**(code **)(*(int *)(iVar3 + 0x24) + 0x14))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x24) + 0x10),param_2);
        uVar1 = 0;
        if ((param_2 & 0x9a0) != 0) {
          FUN_001faea0(DAT_002c56e8);
          uVar1 = 3;
          if (((param_2 & 0x120) != 0) && (iVar2 = param_1[3], iVar2 != 0)) {
            (**(code **)(*(int *)(iVar2 + 0x24) + 0x24))
                      (iVar2 + *(short *)(*(int *)(iVar2 + 0x24) + 0x20));
            uVar1 = 3;
          }
        }
      }
    }
  }
  else if ((param_2 & 0x120) == 0) {
    uVar1 = 0;
    if ((param_2 & 0x880) != 0) {
      FUN_001faea0(DAT_002c56e8);
      uVar1 = 4;
    }
  }
  else {
    FUN_001faea0(DAT_002c56e8);
    iVar2 = param_1[3];
    uVar1 = 3;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x24) + 0x24))
                (iVar2 + *(short *)(*(int *)(iVar2 + 0x24) + 0x20));
      uVar1 = 3;
    }
  }
  return uVar1;
}

