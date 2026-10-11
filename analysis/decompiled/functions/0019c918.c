/* Ghidra pseudocode. PS2 address: 0019c918. Not validated source. */

int FUN_0019c918(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = param_1[1];
  if (0 < *param_1) {
    do {
      lVar2 = FUN_0019bae8(iVar1,param_2,param_3);
      if (lVar2 != 0) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *param_1);
  }
  return 0;
}

