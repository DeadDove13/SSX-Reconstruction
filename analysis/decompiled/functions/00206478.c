/* Ghidra pseudocode. PS2 address: 00206478. Not validated source. */

int FUN_00206478(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(DAT_002c5778 + 0x32000) + 0x1c))
                    (DAT_002c5778 + *(short *)(*(int *)(DAT_002c5778 + 0x32000) + 0x18));
  if (*(int *)(param_1 + 0x10c) == 0) {
    trap(7);
  }
  return (iVar1 % *(int *)(param_1 + 0x10c)) * *(int *)(param_1 + 0x114);
}

