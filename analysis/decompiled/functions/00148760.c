/* Ghidra pseudocode. PS2 address: 00148760. Not validated source. */

int FUN_00148760(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + 0x1d4;
  for (iVar1 = *(int *)(param_2 + 0x34); iVar1 != param_2 + 0x1d4; iVar1 = *(int *)(iVar1 + 0x34)) {
    iVar2 = *(int *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x14) = *(float *)(iVar1 + 0x14) + param_1;
  }
  return iVar2;
}

