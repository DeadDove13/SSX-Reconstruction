/* Ghidra pseudocode. PS2 address: 00133498. Not validated source. */

void FUN_00133498(int *param_1)

{
  int iVar1;
  float fVar2;
  
  if (0.0 < (float)param_1[1]) {
    if (*(int *)(DAT_002859e4 + 0x38) == 0) {
      iVar1 = *param_1;
    }
    else {
      iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18);
      if (iVar1 != 0 && iVar1 < 10) {
        iVar1 = *param_1;
        goto LAB_00133578;
      }
      iVar1 = *param_1;
    }
    fVar2 = (float)param_1[1];
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    (**(code **)(*(int *)(iVar1 + 0x34) + 0x2c))
              (fVar2,iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x28),2);
    fVar2 = (float)param_1[1] * DAT_002c1c4c - DAT_002c1c50;
    param_1[1] = (int)fVar2;
    if (fVar2 <= 0.0) {
      iVar1 = *(int *)(*param_1 + 0x34);
      (**(code **)(iVar1 + 0x2c))(*param_1 + (int)*(short *)(iVar1 + 0x28),0xffffffffffffffff);
    }
  }
  else {
    iVar1 = *param_1;
LAB_00133578:
    (**(code **)(*(int *)(iVar1 + 0x34) + 0x2c))
              (0,iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x28),0xffffffffffffffff);
  }
  return;
}

