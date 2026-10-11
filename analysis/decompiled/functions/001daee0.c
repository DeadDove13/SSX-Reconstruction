/* Ghidra pseudocode. PS2 address: 001daee0. Not validated source. */

void FUN_001daee0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar1 = *(int *)(iVar4 + 0x16c);
  uVar2 = *(undefined4 *)(iVar1 + 0xc);
  *(float *)(iVar4 + 0x38) = (float)*(int *)(iVar1 + 0x28) / (float)*(int *)(iVar4 + 0x28);
  lVar3 = FUN_00211ca8(iVar1,uVar2);
  if (lVar3 == 0) {
    lVar3 = FUN_00211390(*(undefined4 *)(iVar4 + 0x16c));
    if (lVar3 == 1) {
      if (*(int *)(iVar4 + 0x20) < *(int *)(iVar4 + 0x28)) {
        lVar3 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x1c))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x18));
        if (lVar3 == 0) {
          FUN_001dc0c8(param_1);
          return;
        }
      }
      else {
        FUN_001dc398(param_1,*(int *)(iVar4 + 0x28) - *(int *)(iVar4 + 0x20));
        (**(code **)(*(int *)(iVar4 + 0x170) + 0x24))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x20));
        FUN_001d9670(param_1,0x10);
      }
    }
    else {
      lVar3 = FUN_00211ca8(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
      if (lVar3 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x170) + 0x2c))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x28));
        FUN_001d9670(param_1,0x12);
      }
    }
  }
  else {
    FUN_001d9670(param_1,0x12);
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x2c))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x28));
  }
  return;
}

