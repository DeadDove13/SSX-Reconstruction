/* Ghidra pseudocode. PS2 address: 001571e8. Not validated source. */

void FUN_001571e8(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xf4);
  iVar1 = 0;
  do {
    puVar2[-4] = iVar1;
    puVar2[-3] = 0;
    iVar1 = iVar1 + 1;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 0x31;
  } while (iVar1 < 8);
  return;
}

