/* Ghidra pseudocode. PS2 address: 0016ebe0. Not validated source. */

void FUN_0016ebe0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *param_2;
    while( true ) {
      param_2 = param_2 + 1;
      FUN_0016eae0(param_1,iVar1);
      if (*param_2 == -1) break;
      iVar1 = *param_2;
    }
  }
  return;
}

