/* Ghidra pseudocode. PS2 address: 00207218. Not validated source. */

void FUN_00207218(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x35f80);
  while( true ) {
    *(int *)(param_1 + 0x35f80) = iVar1 + -1;
    if (iVar1 + -1 < 0) {
      *(int *)(param_1 + 0x35f80) = *(int *)(param_1 + 0x35f7c) + -1;
    }
    if (((*(int *)(param_1 + 0x35f84) >> (*(uint *)(param_1 + 0x35f80) & 0x1f) ^ 1U) & 1) == 0)
    break;
    iVar1 = *(int *)(param_1 + 0x35f80);
  }
  return;
}

