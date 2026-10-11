/* Ghidra pseudocode. PS2 address: 001c1a40. Not validated source. */

void FUN_001c1a40(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x170) < 0) {
    uVar1 = FUN_001be6b8(0x295e90,*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(param_1 + 0x178),
                         1);
    *(undefined4 *)(param_1 + 0x170) = uVar1;
  }
  return;
}

