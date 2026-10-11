/* Ghidra pseudocode. PS2 address: 001db610. Not validated source. */

void FUN_001db610(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  
  iVar2 = (int)param_1;
  uVar1 = (**(code **)(*(int *)(iVar2 + 0x170) + 0x7c))
                    (iVar2 + *(short *)(*(int *)(iVar2 + 0x170) + 0x78));
  if ((uVar1 & 0x80) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x170) + 0x8c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x170) + 0x88));
    FUN_001d9670(param_1,1);
    return;
  }
  if ((uVar1 & 0x800) != 0) {
    (**(code **)(*(int *)(iVar2 + 0x170) + 0x8c))
              (iVar2 + *(short *)(*(int *)(iVar2 + 0x170) + 0x88));
    FUN_001d9670(param_1,1);
    return;
  }
  return;
}

