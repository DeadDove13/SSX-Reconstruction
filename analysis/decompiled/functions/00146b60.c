/* Ghidra pseudocode. PS2 address: 00146b60. Not validated source. */

void FUN_00146b60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0x21;
  puVar2 = (undefined4 *)(param_1 + 600);
  iVar1 = param_1;
  do {
    iVar3 = iVar3 + -1;
    FUN_001467e0(iVar1);
    iVar1 = iVar1 + 0x10;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  *(undefined4 *)(param_1 + 0x240) = 0;
  if (*(int *)(param_1 + 0x244) != 0) {
    FUN_002193f8(param_1 + 0x244);
    return;
  }
  return;
}

