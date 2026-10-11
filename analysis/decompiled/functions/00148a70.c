/* Ghidra pseudocode. PS2 address: 00148a70. Not validated source. */

void FUN_00148a70(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != param_1 + 0x1d4; iVar1 = *(int *)(iVar1 + 0x34)) {
    if (*(int *)(iVar1 + 0x1e0) == param_2) {
      *(undefined4 *)(iVar1 + 0x208) = 1000;
    }
  }
  return;
}

