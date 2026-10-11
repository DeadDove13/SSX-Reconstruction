/* Ghidra pseudocode. PS2 address: 0017ddd0. Not validated source. */

void FUN_0017ddd0(int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  FUN_0016cf38();
  switch(*(undefined4 *)(param_1 + 0xbd0)) {
  case 0:
  case 1:
  case 4:
    iVar1 = *(int *)(param_1 + 0xbc8);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x40) + 0x1c))
                (iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x18));
    }
    lVar3 = FUN_00146c50(0x2795b8);
    if (lVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xb90);
      iVar4 = 1;
      if (iVar1 != 0) {
        do {
          if (iVar4 == 2) {
            *(undefined4 *)(iVar1 + 0x2c0) = 1;
          }
          else {
            *(undefined4 *)(iVar1 + 0x2c0) = 0;
          }
          (**(code **)(*(int *)(iVar1 + 0x284) + 0x44))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x284) + 0x40));
          *(undefined4 *)(iVar1 + 0x2c0) = 0;
          bVar2 = iVar4 < 2;
          iVar4 = iVar4 + 1;
        } while (bVar2);
      }
    }
    break;
  default:
    break;
  case 3:
    if (*(int *)(param_1 + 0xbcc) != 0) {
      return;
    }
  }
  return;
}

