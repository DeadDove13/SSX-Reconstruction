/* Ghidra pseudocode. PS2 address: 00221a30. Not validated source. */

void FUN_00221a30(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = 0xa1;
  puVar1 = (undefined4 *)(param_1 + 0x284);
  do {
    *puVar1 = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + -1;
  } while (-1 < iVar2);
  *(undefined4 *)(param_1 + 0x288) = 0;
  return;
}

