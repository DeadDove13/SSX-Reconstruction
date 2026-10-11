/* Ghidra pseudocode. PS2 address: 002435f8. Not validated source. */

void FUN_002435f8(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  puVar1 = &DAT_002a4fd0;
  iVar2 = 0x1f;
  do {
    *puVar1 = 0xffff;
    iVar2 = iVar2 + -1;
    puVar1[1] = 0xffff;
    puVar1 = puVar1 + 2;
  } while (-1 < iVar2);
  DAT_002c5b54 = 0;
  FUN_00243498(param_1 * 0x10001);
  return;
}

