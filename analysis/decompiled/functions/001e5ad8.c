/* Ghidra pseudocode. PS2 address: 001e5ad8. Not validated source. */

void FUN_001e5ad8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  iVar1 = (int)param_1;
  uVar3 = (**(code **)(*(int *)(iVar1 + 0x170) + 0x7c))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x170) + 0x78));
  if ((uVar3 & 0x80) != 0) {
    FUN_001a94a0(*(undefined4 *)(iVar1 + 0x174));
    FUN_001e5608(param_1,3);
    return;
  }
  if ((uVar3 & 0x20) != 0) {
    FUN_001a94a0(*(undefined4 *)(iVar1 + 0x174));
    FUN_001e5608(param_1,3);
    return;
  }
  if ((uVar3 & 0x800) == 0) {
    if ((uVar3 & 0x20001) == 0) {
      if ((uVar3 & 0x40002) == 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x184) == 0) {
        FUN_001a9498(*(undefined4 *)(iVar1 + 0x174));
        uVar2 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x184) != 1) {
          return;
        }
        FUN_001a9498(*(undefined4 *)(iVar1 + 0x174));
        uVar2 = 2;
      }
    }
    else {
      if (*(int *)(iVar1 + 0x184) != 2) {
        if (*(int *)(iVar1 + 0x184) != 1) {
          return;
        }
        FUN_001a9498(*(undefined4 *)(iVar1 + 0x174));
        *(undefined4 *)(iVar1 + 0x184) = 0;
        return;
      }
      FUN_001a9498(*(undefined4 *)(iVar1 + 0x174));
      uVar2 = 1;
    }
    *(undefined4 *)(iVar1 + 0x184) = uVar2;
    return;
  }
  if (*(int *)(iVar1 + 0x184) == 0) {
    FUN_001a94a8(*(undefined4 *)(iVar1 + 0x174));
    FUN_001e5608(param_1,0);
    iVar1 = FUN_001a3748(*(undefined4 *)(DAT_002859e4 + 0x30));
    *(undefined4 *)(iVar1 + 0x428) = 1;
    FUN_001dc3c8(param_1);
    return;
  }
  if (*(int *)(iVar1 + 0x184) == 1) {
    FUN_001a94a8(*(undefined4 *)(iVar1 + 0x174));
    if (*(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x44) != 0) {
      FUN_001e5608(param_1,4);
      return;
    }
    FUN_001e5608(param_1,5);
    return;
  }
  FUN_001a94a0(*(undefined4 *)(iVar1 + 0x174));
  FUN_001e5608(param_1,3);
  return;
}

