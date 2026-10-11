/* Ghidra pseudocode. PS2 address: 001841b8. Not validated source. */

void FUN_001841b8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) {
    FUN_00236a40(0x2b3688,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  if ((2 < iVar1) && (iVar1 == 3)) {
    FUN_00236a40(0x2b3670,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  FUN_00236a40(0x2b3658,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

