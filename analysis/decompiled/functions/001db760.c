/* Ghidra pseudocode. PS2 address: 001db760. Not validated source. */

void FUN_001db760(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = FUN_00211250(*(undefined4 *)(iVar4 + 0x16c));
  uVar1 = *(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc);
  *(float *)(iVar4 + 0x38) = (float)iVar2 / (float)*(int *)(iVar4 + 0x28);
  lVar3 = FUN_00211ca8(*(int *)(iVar4 + 0x16c),uVar1);
  if (lVar3 == 0) {
    lVar3 = FUN_00211448(*(undefined4 *)(iVar4 + 0x16c));
    if (lVar3 == 1) {
      if (*(int *)(iVar4 + 0x24) < *(int *)(iVar4 + 0x28)) {
        lVar3 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x44))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x40));
        if (lVar3 == 0) {
          FUN_001dc130(param_1);
          return;
        }
      }
      else {
        lVar3 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x4c))
                          (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x48),
                           *(int *)(iVar4 + 0x28) - *(int *)(iVar4 + 0x24));
        if (lVar3 == 0) {
          FUN_001dc130(param_1);
          return;
        }
        FUN_001dc338(param_1);
        FUN_001d9670(param_1,0x1d);
      }
    }
    else {
      lVar3 = FUN_00211ca8(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
      if (lVar3 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x170) + 0x54))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x50));
        FUN_001d9670(param_1,0x20);
      }
    }
  }
  else {
    FUN_001d9670(param_1,0x20);
    (**(code **)(*(int *)(iVar4 + 0x170) + 0x54))
              (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x50));
  }
  return;
}

