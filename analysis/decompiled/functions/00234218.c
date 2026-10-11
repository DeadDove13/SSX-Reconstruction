/* Ghidra pseudocode. PS2 address: 00234218. Not validated source. */

int FUN_00234218(long param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &DAT_002a1b10;
  iVar2 = 0;
  while (((undefined4 *)*piVar3 == (undefined4 *)0x0 ||
         (lVar1 = FUN_00229330(*(undefined4 *)*piVar3), lVar1 != param_1))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
    if (7 < iVar2) {
      return -1;
    }
  }
  return iVar2;
}

