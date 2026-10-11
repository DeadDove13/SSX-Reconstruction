/* Ghidra pseudocode. PS2 address: 00121c00. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00121c20) */

void FUN_00121c00(int *param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(DAT_002859e4 + 0x14) + 0x18) % 0x3c == 0) {
    if (*(int *)(*param_1 + 0x8c) < 0) {
      iVar1 = param_1[0x228];
    }
    else {
      iVar1 = FUN_00189b78(DAT_002859e4);
      if (*(int *)(iVar1 + 0x9c) < *(int *)(*param_1 + 0x9c)) {
        iVar1 = param_1[0x228];
      }
      else {
        iVar1 = param_1[0x229];
      }
    }
    param_1[0x227] = iVar1;
  }
  return;
}

