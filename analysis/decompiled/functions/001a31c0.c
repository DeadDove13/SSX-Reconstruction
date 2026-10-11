/* Ghidra pseudocode. PS2 address: 001a31c0. Not validated source. */

void FUN_001a31c0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0xe;
  puVar2 = (undefined4 *)(param_1 + 0xc);
  uVar1 = *puVar2;
  while( true ) {
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
    FUN_001a3880(uVar1,0xffffffffffffffff);
    if (iVar3 < 0) break;
    uVar1 = *puVar2;
  }
  return;
}

