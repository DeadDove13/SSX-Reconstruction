/* Ghidra pseudocode. PS2 address: 001eacf8. Not validated source. */

void FUN_001eacf8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)param_1 + 0x34);
  while (iVar2 != (int)param_1 + 0x1d4) {
    iVar1 = *(int *)(iVar2 + 0x34);
    (**(code **)(*(int *)(iVar2 + 0x1d0) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x1d0) + 8));
    iVar2 = iVar1;
  }
  FUN_001eac20(param_1);
  return;
}

