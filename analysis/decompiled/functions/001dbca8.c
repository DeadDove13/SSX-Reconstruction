/* Ghidra pseudocode. PS2 address: 001dbca8. Not validated source. */

void FUN_001dbca8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  lVar2 = FUN_00211ca8(*(int *)(iVar4 + 0x16c),*(undefined4 *)(*(int *)(iVar4 + 0x16c) + 0xc));
  if (lVar2 == 0) {
    lVar2 = FUN_00211c98(*(undefined4 *)(iVar4 + 0x16c));
    if (lVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(iVar4 + 0x170) + 0x7c))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x78));
      if ((uVar3 & 0x20) == 0) {
        if ((uVar3 & 0x800) != 0) {
          (**(code **)(*(int *)(iVar4 + 0x170) + 0x8c))
                    (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x88));
          iVar1 = *(int *)(iVar4 + 0x30) + -1;
          *(int *)(iVar4 + 0x30) = iVar1;
          *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + iVar1 * 4 + 300);
          FUN_001d9670(param_1,0x16);
        }
      }
      else {
        (**(code **)(*(int *)(iVar4 + 0x170) + 0x94))
                  (iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x90));
        iVar1 = *(int *)(iVar4 + 0x30) + -1;
        *(int *)(iVar4 + 0x30) = iVar1;
        *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + iVar1 * 4 + 300);
      }
    }
    return;
  }
  (**(code **)(*(int *)(iVar4 + 0x170) + 0x7c))(iVar4 + *(short *)(*(int *)(iVar4 + 0x170) + 0x78));
  iVar1 = *(int *)(iVar4 + 0x30) + -1;
  *(int *)(iVar4 + 0x30) = iVar1;
  *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar4 + iVar1 * 4 + 300);
  FUN_001d9670(param_1,0x19);
  return;
}

