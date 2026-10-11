/* Ghidra pseudocode. PS2 address: 0016ccc0. Not validated source. */

void FUN_0016ccc0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = &DAT_00280ec8;
  iVar3 = 10;
  uVar1 = DAT_00280ec8;
  while( true ) {
    puVar4 = puVar4 + 1;
    iVar3 = iVar3 + -1;
    lVar2 = FUN_0016dd88(param_1,uVar1);
    if (lVar2 != 0) {
      FUN_0016eae0(param_1,0xffffffffffffffff);
    }
    if (iVar3 < 0) break;
    uVar1 = *puVar4;
  }
  return;
}

