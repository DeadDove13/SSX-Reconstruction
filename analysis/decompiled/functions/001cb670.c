/* Ghidra pseudocode. PS2 address: 001cb670. Not validated source. */

void FUN_001cb670(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 1;
  puVar1 = (undefined4 *)(param_1 + 0x14c0);
  do {
    puVar1[-2] = 0;
    iVar2 = iVar2 + -1;
    *puVar1 = 0;
    *(undefined4 *)(param_1 + 0x3cd0) = 0;
    puVar1 = puVar1 + 1;
    *(undefined4 *)(param_1 + 0x43d0) = 0;
    param_1 = param_1 + 0x380;
  } while (-1 < iVar2);
  return;
}

