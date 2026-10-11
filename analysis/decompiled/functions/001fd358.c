/* Ghidra pseudocode. PS2 address: 001fd358. Not validated source. */

void FUN_001fd358(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x8b6d0) == 0) {
    *(undefined4 *)(iVar1 + 0x8b6d0) = 1;
    *(undefined4 *)(iVar1 + 0x3216c) = 1;
    FUN_001f5c50(param_1);
    FUN_00206fb8(param_1);
    FUN_0020a640(param_1);
    return;
  }
  return;
}

