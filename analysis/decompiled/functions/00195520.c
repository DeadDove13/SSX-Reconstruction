/* Ghidra pseudocode. PS2 address: 00195520. Not validated source. */

int FUN_00195520(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = 0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x28);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

