/* Ghidra pseudocode. PS2 address: 00100528. Not validated source. */

undefined4 FUN_00100528(int param_1,char param_2)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    puVar1 = &DAT_0027b814;
    do {
      iVar2 = iVar2 + 1;
      if (puVar1[0x54] == param_2) {
        return 1;
      }
      puVar1 = puVar1 + 0x68;
    } while (iVar2 < *(int *)(param_1 + 0x8c));
  }
  return 0;
}

