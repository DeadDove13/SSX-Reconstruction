/* Ghidra pseudocode. PS2 address: 00148668. Not validated source. */

void FUN_00148668(int param_1,undefined8 param_2)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != param_1 + 0x1d4; iVar1 = *(int *)(iVar1 + 0x34)) {
    FUN_001479a0(iVar1,param_2);
  }
  return;
}

