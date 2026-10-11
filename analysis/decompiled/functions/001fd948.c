/* Ghidra pseudocode. PS2 address: 001fd948. Not validated source. */

void FUN_001fd948(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x8bb5c);
  if (iVar2 == 0) {
    trap(7);
  }
  iVar1 = *(int *)(iVar4 + 0x8bb68);
  if ((*(int *)(iVar4 + 0x8bb64) + 1) % iVar2 == iVar1) {
    if ((*(int *)(iVar4 + 0x8bb64) != iVar1) &&
       (*(int *)(iVar4 + 0x8bb68) = iVar1 + 1, iVar2 <= iVar1 + 1)) {
      *(undefined4 *)(iVar4 + 0x8bb68) = 0;
    }
    iVar2 = *(int *)(iVar4 + 0x8bb68);
    uVar3 = 0xffffffff;
    if (*(int *)(iVar4 + 0x8bb64) != iVar2) {
      uVar3 = *(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 0x8bb60));
      *(int *)(iVar4 + 0x8bb68) = iVar2 + 1;
      if (*(int *)(iVar4 + 0x8bb5c) <= iVar2 + 1) {
        *(undefined4 *)(iVar4 + 0x8bb68) = 0;
      }
    }
    FUN_001f5ef8(param_1,uVar3);
    iVar2 = *(int *)(iVar4 + 0x8bb68) + 1;
    if ((*(int *)(iVar4 + 0x8bb64) != *(int *)(iVar4 + 0x8bb68)) &&
       (*(int *)(iVar4 + 0x8bb68) = iVar2, *(int *)(iVar4 + 0x8bb5c) <= iVar2)) {
      *(undefined4 *)(iVar4 + 0x8bb68) = 0;
    }
    iVar2 = *(int *)(iVar4 + 0x8bb68) + 1;
    if ((*(int *)(iVar4 + 0x8bb64) != *(int *)(iVar4 + 0x8bb68)) &&
       (*(int *)(iVar4 + 0x8bb68) = iVar2, *(int *)(iVar4 + 0x8bb5c) <= iVar2)) {
      *(undefined4 *)(iVar4 + 0x8bb68) = 0;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x8bb5c);
  if (iVar2 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar4 + 0x8bb64) + 1) % iVar2 != *(int *)(iVar4 + 0x8bb68)) {
    *(undefined4 *)(*(int *)(iVar4 + 0x8bb64) * 4 + *(int *)(iVar4 + 0x8bb60)) = param_2;
    iVar2 = *(int *)(iVar4 + 0x8bb64) + 1;
    *(int *)(iVar4 + 0x8bb64) = iVar2;
    if (*(int *)(iVar4 + 0x8bb5c) <= iVar2) {
      *(undefined4 *)(iVar4 + 0x8bb64) = 0;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x8bb5c);
  if (iVar2 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar4 + 0x8bb64) + 1) % iVar2 != *(int *)(iVar4 + 0x8bb68)) {
    *(undefined4 *)(*(int *)(iVar4 + 0x8bb64) * 4 + *(int *)(iVar4 + 0x8bb60)) = param_3;
    iVar2 = *(int *)(iVar4 + 0x8bb64) + 1;
    *(int *)(iVar4 + 0x8bb64) = iVar2;
    if (*(int *)(iVar4 + 0x8bb5c) <= iVar2) {
      *(undefined4 *)(iVar4 + 0x8bb64) = 0;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x8bb5c);
  if (iVar2 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar4 + 0x8bb64) + 1) % iVar2 != *(int *)(iVar4 + 0x8bb68)) {
    *(undefined4 *)(*(int *)(iVar4 + 0x8bb64) * 4 + *(int *)(iVar4 + 0x8bb60)) = param_4;
    iVar2 = *(int *)(iVar4 + 0x8bb64) + 1;
    *(int *)(iVar4 + 0x8bb64) = iVar2;
    if (*(int *)(iVar4 + 0x8bb5c) <= iVar2) {
      *(undefined4 *)(iVar4 + 0x8bb64) = 0;
    }
  }
  iVar2 = *(int *)(iVar4 + 0x8bb5c);
  if (iVar2 == 0) {
    trap(7);
  }
  if ((*(int *)(iVar4 + 0x8bb64) + 1) % iVar2 != *(int *)(iVar4 + 0x8bb68)) {
    *(undefined4 *)(*(int *)(iVar4 + 0x8bb64) * 4 + *(int *)(iVar4 + 0x8bb60)) = param_5;
    iVar2 = *(int *)(iVar4 + 0x8bb64) + 1;
    *(int *)(iVar4 + 0x8bb64) = iVar2;
    if (*(int *)(iVar4 + 0x8bb5c) <= iVar2) {
      *(undefined4 *)(iVar4 + 0x8bb64) = 0;
    }
  }
  return;
}

