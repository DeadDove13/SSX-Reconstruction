/* Ghidra pseudocode. PS2 address: 00197148. Not validated source. */

int FUN_00197148(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar2 = 0;
  iVar3 = -1;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1 == *(undefined4 **)(param_1 + 8)) {
      iVar3 = 0;
    }
    else {
      for (puVar1 = (undefined4 *)*puVar1;
          (iVar2 = iVar2 + 1, iVar3 = -1, puVar1 != (undefined4 *)0x0 &&
          (iVar3 = iVar2, puVar1 != *(undefined4 **)(param_1 + 8))); puVar1 = (undefined4 *)*puVar1)
      {
      }
    }
  }
  return iVar3;
}

