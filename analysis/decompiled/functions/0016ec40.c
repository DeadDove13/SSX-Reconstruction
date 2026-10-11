/* Ghidra pseudocode. PS2 address: 0016ec40. Not validated source. */

void FUN_0016ec40(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *param_2;
    while( true ) {
      param_2 = param_2 + 1;
      FUN_0016eb08(param_1,iVar1);
      if (*param_2 == -1) break;
      iVar1 = *param_2;
    }
  }
  return;
}

