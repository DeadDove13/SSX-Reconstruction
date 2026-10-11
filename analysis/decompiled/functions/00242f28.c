/* Ghidra pseudocode. PS2 address: 00242f28. Not validated source. */

undefined4 * FUN_00242f28(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((DAT_002c5b30 == (undefined4 *)0x0) &&
      (DAT_002c5b34 = param_1, DAT_002c5b30 = (undefined4 *)FUN_00208820(0x2be968,param_1 << 2),
      DAT_002c5b30 != (undefined4 *)0x0)) &&
     (iVar2 = DAT_002c5b34, puVar1 = DAT_002c5b30, 0 < DAT_002c5b34)) {
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  return DAT_002c5b30;
}

