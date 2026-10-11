/* Ghidra pseudocode. PS2 address: 001fd400. Not validated source. */

void FUN_001fd400(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  if (*(int *)(iVar1 + 0x8b6d0) != 0) {
    *(undefined4 *)(iVar1 + 0x8b6d0) = 0;
    FUN_0020a6b8();
    FUN_00206fe0(param_1);
    FUN_001f5ca8(param_1);
    *(undefined4 *)(iVar1 + 0x3216c) = 0;
    FUN_001f5ff0(param_1);
    return;
  }
  return;
}

