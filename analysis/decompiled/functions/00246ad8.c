/* Ghidra pseudocode. PS2 address: 00246ad8. Not validated source. */

undefined4 FUN_00246ad8(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_002d1850;
  DAT_002d1850 = 0;
  while( true ) {
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[0xc0] = 0;
    puVar3[0xc2] = 0;
    puVar3[0xc1] = 0;
    puVar3 = puVar3 + 0x18;
    if (0x2d1b4f < (int)puVar3) break;
    *puVar3 = 0;
  }
  DAT_002d1e80 = 0x10;
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  uVar1 = DAT_002d1e8c;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

