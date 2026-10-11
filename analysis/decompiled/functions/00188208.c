/* Ghidra pseudocode. PS2 address: 00188208. Not validated source. */

void FUN_00188208(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x298)) {
    puVar2 = (undefined4 *)(param_1 + 0xa0);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 0x20;
      FUN_0015f258(uVar1);
      if (*(int *)(param_1 + 0x298) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}

