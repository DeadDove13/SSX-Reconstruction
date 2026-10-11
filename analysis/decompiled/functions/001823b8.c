/* Ghidra pseudocode. PS2 address: 001823b8. Not validated source. */

void FUN_001823b8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[5]) {
    piVar2 = param_1 + 6;
    do {
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        (**(code **)(*(int *)(iVar1 + 0x34) + 0xc))
                  (iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 8),3);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < param_1[5]);
  }
  param_1[5] = 0;
  if (*param_1 != 0) {
    FUN_00103710();
  }
  *param_1 = 0;
  return;
}

