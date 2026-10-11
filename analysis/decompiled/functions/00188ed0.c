/* Ghidra pseudocode. PS2 address: 00188ed0. Not validated source. */

void FUN_00188ed0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    piVar2 = (int *)(param_1 + 0xa0);
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0xf9c) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0xf9c) + 8),3);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x20;
    } while (iVar3 < *(int *)(param_1 + 0x298));
  }
  iVar3 = *(int *)(param_1 + 0x84);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 8) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 8) + 8),3);
  }
  return;
}

