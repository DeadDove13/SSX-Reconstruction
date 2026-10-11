/* Ghidra pseudocode. PS2 address: 00101488. Not validated source. */

void FUN_00101488(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    puVar2 = (undefined4 *)(param_1 + 200);
    uVar1 = *puVar2;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_00107a58(uVar1);
      if (*(int *)(param_1 + 0x8c) <= iVar3) break;
      uVar1 = *puVar2;
    }
  }
  return;
}

