/* Ghidra pseudocode. PS2 address: 00148aa8. Not validated source. */

int FUN_00148aa8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x1d4;
  for (iVar1 = *(int *)(param_1 + 0x34); iVar1 != param_1 + 0x1d4; iVar1 = *(int *)(iVar1 + 0x34)) {
    iVar2 = *(int *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x210) = 0;
  }
  return iVar2;
}

