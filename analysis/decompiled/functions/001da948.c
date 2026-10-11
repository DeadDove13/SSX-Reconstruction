/* Ghidra pseudocode. PS2 address: 001da948. Not validated source. */

void FUN_001da948(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar1 = FUN_00211ca8(*(int *)(iVar3 + 0x16c),*(undefined4 *)(*(int *)(iVar3 + 0x16c) + 0xc));
  if ((lVar1 != 0) &&
     (lVar1 = FUN_00211ca8(*(int *)(iVar3 + 0x16c),*(undefined4 *)(*(int *)(iVar3 + 0x16c) + 0xc)),
     lVar1 != -2)) {
    (**(code **)(*(int *)(iVar3 + 0x170) + 0x7c))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x78));
    FUN_001d9670(param_1,0xd);
    return;
  }
  lVar1 = FUN_00211c98(*(undefined4 *)(iVar3 + 0x16c));
  if (lVar1 == 0) {
    uVar2 = (**(code **)(*(int *)(iVar3 + 0x170) + 0x7c))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x78));
    if ((uVar2 & 0x800) == 0) {
      if ((uVar2 & 0x20) != 0) {
        (**(code **)(*(int *)(iVar3 + 0x170) + 0x8c))
                  (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x88));
        FUN_001d9670(param_1,0xc);
      }
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x170) + 0x94))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x90));
      FUN_001d9670(param_1,8);
    }
  }
  return;
}

