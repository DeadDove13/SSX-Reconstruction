/* Ghidra pseudocode. PS2 address: 001eac78. Not validated source. */

int FUN_001eac78(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != param_1 + 0x1d4; iVar1 = *(int *)(iVar1 + 0x34)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

