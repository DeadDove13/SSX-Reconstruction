/* Ghidra pseudocode. PS2 address: 00223ab0. Not validated source. */

void FUN_00223ab0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xa1;
  puVar1 = (undefined4 *)(param_1 + 0x2d4);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  return;
}

