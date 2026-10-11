/* Ghidra pseudocode. PS2 address: 00195550. Not validated source. */

int FUN_00195550(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] == 0) {
    return 0;
  }
  iVar2 = 0;
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

