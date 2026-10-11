/* Ghidra pseudocode. PS2 address: 00171dc0. Not validated source. */

void FUN_00171dc0(int param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  
  FUN_0016cf38();
  lVar3 = FUN_00146c50(0x2795b8);
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0xba4);
  }
  else {
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
    iVar1 = *(int *)(param_1 + 0xba4);
  }
  (**(code **)(*(int *)(iVar1 + 0x40) + 0x1c))(iVar1 + *(short *)(*(int *)(iVar1 + 0x40) + 0x18));
  return;
}

