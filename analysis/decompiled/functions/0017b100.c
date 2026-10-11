/* Ghidra pseudocode. PS2 address: 0017b100. Not validated source. */

void FUN_0017b100(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x334) + 0xb3c) + *(char *)(param_1 + 0x298) * 4 + 0x364)
      == 0) {
    iVar1 = *(int *)(param_1 + 0x2a0);
  }
  else {
    FUN_00104fa8();
    iVar1 = *(int *)(param_1 + 0x2a0);
  }
  if (-1 < iVar1) {
    FUN_001e9538(*(int *)(*(int *)(param_1 + 0x334) + 0xb3c) + 0x40);
    *(undefined4 *)(param_1 + 0x2a0) = 0xffffffff;
  }
  return;
}

