/* Ghidra pseudocode. PS2 address: 00197008. Not validated source. */

int FUN_00197008(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0x10;
  for (puVar1 = *(undefined4 **)(param_1 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = iVar2 + 1000;
  }
  return iVar2;
}

