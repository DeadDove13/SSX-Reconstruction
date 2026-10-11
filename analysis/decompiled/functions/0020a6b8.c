/* Ghidra pseudocode. PS2 address: 0020a6b8. Not validated source. */

void FUN_0020a6b8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x35340)) {
    iVar1 = *(int *)(param_1 + 0x35344);
    while( true ) {
      if (*(int *)(iVar2 * 4 + iVar1) == 0) {
        iVar1 = *(int *)(param_1 + 0x35340);
      }
      else {
        FUN_00209ee0();
        iVar1 = *(int *)(param_1 + 0x35340);
      }
      iVar2 = iVar2 + 1;
      if (iVar1 <= iVar2) break;
      iVar1 = *(int *)(param_1 + 0x35344);
    }
  }
  return;
}

