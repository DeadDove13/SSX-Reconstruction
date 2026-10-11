/* Ghidra pseudocode. PS2 address: 001bf300. Not validated source. */

void FUN_001bf300(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0xc;
  puVar2 = &DAT_00296270;
  uVar1 = DAT_00296270;
  while( true ) {
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
    FUN_00186990(0x2c4dd8,uVar1);
    if (iVar3 < 0) break;
    uVar1 = *puVar2;
  }
  return;
}

