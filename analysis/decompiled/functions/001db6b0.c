/* Ghidra pseudocode. PS2 address: 001db6b0. Not validated source. */

void FUN_001db6b0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  lVar2 = FUN_00211448(*(undefined4 *)(iVar3 + 0x16c));
  iVar1 = *(int *)(iVar3 + 0x16c);
  if (lVar2 == 1) {
    lVar2 = FUN_00211ca8(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 == 0) {
      FUN_001d9670(param_1,0x1c);
      return;
    }
    FUN_001d9670(param_1,0x20);
    (**(code **)(*(int *)(iVar3 + 0x170) + 0x54))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x50));
  }
  else {
    lVar2 = FUN_00211ca8(iVar1,*(undefined4 *)(iVar1 + 0xc));
    if (lVar2 != 0) {
      FUN_001d9670(param_1,0x20);
      (**(code **)(*(int *)(iVar3 + 0x170) + 0x54))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x170) + 0x50));
    }
  }
  return;
}

