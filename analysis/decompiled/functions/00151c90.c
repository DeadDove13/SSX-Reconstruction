/* Ghidra pseudocode. PS2 address: 00151c90. Not validated source. */

uint FUN_00151c90(int param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00148998(param_1 + 0x20,*(undefined4 *)(param_1 + 8));
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(int *)((int)lVar2 + 0x214) >> 7 & 1;
  }
  return uVar1;
}

