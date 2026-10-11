/* Ghidra pseudocode. PS2 address: 002678e0. Not validated source. */

uint FUN_002678e0(void)

{
  int iVar1;
  uint uVar2;
  
  do {
    DI();
    SYNC(0x10);
  } while ((Status & 0x10000) != 0);
  uVar2 = 0x2d7910;
  iVar1 = DAT_002d7914;
  while( true ) {
    if (iVar1 == 0) {
      *(undefined4 *)(uVar2 + 4) = 0x10000000;
      EI();
      return uVar2;
    }
    if (0x2d7a0f < uVar2 + 0x10) break;
    iVar1 = *(int *)(uVar2 + 0x14);
    uVar2 = uVar2 + 0x10;
  }
  EI();
  return 0;
}

