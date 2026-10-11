/* Ghidra pseudocode. PS2 address: 00250fd8. Not validated source. */

int FUN_00250fd8(void)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  FUN_00266a80(0);
  while( true ) {
    lVar3 = FUN_002670b8(0x2d3e80,0xffffffff80000400,0);
    if (lVar3 < 0) {
      FUN_0025a720(0x2bf5d0);
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    if (DAT_002d3ea4 != 0) break;
    iVar2 = 0xfffff;
    do {
      bVar1 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar1);
  }
  lVar3 = FUN_00267268(0x2d3e80,0xfe,0,0x2d3f00,0x30,0x2d5440,0xc,0);
  if (lVar3 < 0) {
    DAT_002d3ea4 = 0;
    iVar2 = (int)lVar3 + -100;
  }
  else if (DAT_002d5444 < 0x205) {
    FUN_0025a720(0x2bf5e8);
    DAT_002d3ea4 = 0;
    iVar2 = -0x78;
  }
  else {
    iVar2 = DAT_002d5440;
    if (DAT_002d5448 < 0x206) {
      FUN_0025a720(0x2bf610);
      DAT_002d3ea4 = 0;
      iVar2 = -0x79;
    }
  }
  return iVar2;
}

