/* Ghidra pseudocode. PS2 address: 00209660. Not validated source. */

long FUN_00209660(int param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)(param_1 + 0x8b6c0);
  while ((*piVar2 == 0 || (lVar1 = FUN_00209090(*piVar2,param_2), lVar1 == 0))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (1 < iVar3) {
      return 0;
    }
  }
  return lVar1;
}

