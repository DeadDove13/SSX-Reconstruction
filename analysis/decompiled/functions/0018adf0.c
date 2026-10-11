/* Ghidra pseudocode. PS2 address: 0018adf0. Not validated source. */

int FUN_0018adf0(int *param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = param_1 + 0x11;
  while( true ) {
    if (*param_1 <= iVar3) {
      return iVar3;
    }
    lVar1 = FUN_0025baa0(param_2,piVar2);
    piVar2 = piVar2 + 0x21;
    if (lVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

