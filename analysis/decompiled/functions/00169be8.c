/* Ghidra pseudocode. PS2 address: 00169be8. Not validated source. */

void FUN_00169be8(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    param_1[4] = *param_1;
    *param_1 = *(int *)(*param_1 + 8);
    *(undefined4 *)(param_1[1] + 4) = 0;
    if (param_1[4] == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_001697c8();
      iVar1 = *(int *)param_1[4];
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x284) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 8),3);
      }
      if (param_1[4] == 0) {
        iVar1 = *param_1;
      }
      else {
        FUN_0016a5a0(param_1[4],3);
        iVar1 = *param_1;
      }
    }
  }
  *param_1 = 0;
  param_1[2] = 1;
  param_1[4] = 0;
  param_1[1] = 0;
  return;
}

