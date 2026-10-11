/* Ghidra pseudocode. PS2 address: 00132d30. Not validated source. */

void FUN_00132d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  param_1[1] = 0;
  puVar1 = param_1 + 0x12;
  *param_1 = 0;
  iVar2 = 2;
  do {
    puVar1[-0x10] = param_1;
    iVar2 = iVar2 + -1;
    puVar1[-1] = param_1;
    puVar1[-0xe] = 1;
    puVar1[1] = 0;
    puVar1[-0xf] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
  } while (-1 < iVar2);
  return;
}

