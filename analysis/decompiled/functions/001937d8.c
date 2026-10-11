/* Ghidra pseudocode. PS2 address: 001937d8. Not validated source. */

int FUN_001937d8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_2 = *param_1;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x30) == 0) break;
    iVar1 = *(int *)(iVar1 + 0x28);
  }
  iVar2 = *(int *)(iVar1 + 0x28);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x30) == 0) {
    return iVar1;
  }
  iVar2 = *(int *)(iVar2 + 0x28);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if (*(int *)(iVar2 + 0x30) == 0) break;
    iVar2 = *(int *)(iVar2 + 0x28);
  }
  if (iVar2 != 0) {
    return iVar1;
  }
  return 0;
}

