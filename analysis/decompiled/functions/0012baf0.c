/* Ghidra pseudocode. PS2 address: 0012baf0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0012bb54) */

void FUN_0012baf0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x34) < 1) {
    if (*(int *)(iVar1 + 0x38) < 1) {
      if (*(int *)(iVar1 + 0x3c) < 1) {
        (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1 + *(short *)(*(int *)(iVar1 + 8) + 0xb0),0);
        return;
      }
      iVar1 = *(int *)(iVar1 + 0x40);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x40);
    }
  }
  else {
    iVar1 = *(int *)(iVar1 + 0x40);
  }
  if ((iVar1 != 0) && (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 5 == 0)) {
    FUN_0012bb88(param_1);
  }
  return;
}

