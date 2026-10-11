/* Ghidra pseudocode. PS2 address: 00189ba8. Not validated source. */

void FUN_00189ba8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = FUN_00187ce8();
  if (lVar2 != 0) {
    iVar4 = 2;
    puVar3 = &DAT_00285ab0;
    uVar1 = DAT_00285ab0;
    while( true ) {
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + -1;
      FUN_00186908(0x2c4dd8,uVar1);
      if (iVar4 < 0) break;
      uVar1 = *puVar3;
    }
    return;
  }
  iVar4 = 10;
  puVar3 = &DAT_00285a80;
  uVar1 = DAT_00285a80;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
    FUN_00186908(0x2c4dd8,uVar1);
    if (iVar4 < 0) break;
    uVar1 = *puVar3;
  }
  puVar3 = &DAT_002c4e40;
  iVar4 = 0;
  uVar1 = DAT_002c4e40;
  while( true ) {
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
    FUN_001864b0(0x2c4dd8,uVar1);
    if (iVar4 < 0) break;
    uVar1 = *puVar3;
  }
  FUN_00186908(0x2c4dd8,0xc);
  return;
}

