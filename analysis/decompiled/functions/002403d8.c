/* Ghidra pseudocode. PS2 address: 002403d8. Not validated source. */

undefined4 FUN_002403d8(ulong param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_002a4b40;
  iVar3 = 0;
  iVar1 = DAT_002a4b40;
  while ((iVar3 = iVar3 + 1, iVar1 == 0 || (*(byte *)(iVar1 + 8) != param_1))) {
    if (3 < iVar3) {
      return 0;
    }
    piVar2 = &DAT_002a4b40 + iVar3 * 2;
    iVar1 = *piVar2;
  }
  *param_2 = piVar2;
  return 1;
}

