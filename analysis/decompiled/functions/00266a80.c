/* Ghidra pseudocode. PS2 address: 00266a80. Not validated source. */

void FUN_00266a80(void)

{
  long lVar1;
  
  if (DAT_002a6aa8 == 0) {
    DAT_002a6aa8 = 1;
    FUN_002663c8();
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    DAT_002d73e0 = 0x20;
    DAT_002d73c0 = 1;
    DAT_002d73dc = &DAT_202d6bc0;
    DAT_002d73c4 = &DAT_202d5bc0;
    DAT_002d73d4 = &DAT_202d63c0;
    DAT_002d73c8 = 0x20;
    DAT_002d73cc = 0;
    DAT_002d73d0 = 0;
    DAT_002d73d8 = 0x20;
    DAT_002d73e4 = 0;
    FUN_00266698(0xffffffff80000008,0x266d70,0x2d73c0);
    FUN_00266698(0xffffffff80000009,0x267008,0x2d73c0);
    FUN_00266698(0xffffffff8000000a,0x2671d8,0x2d73c0);
    FUN_00266698(0xffffffff8000000c,0x266e20,0x2d73c0);
    EI();
    lVar1 = sceSifGetReg(0xffffffff80000002);
    if (lVar1 == 0) {
      DAT_002d5c0c = 1;
      FUN_00266830(0xffffffff80000002,0x2d5c00,0x10,0,0,0);
      do {
        lVar1 = FUN_00266380(0);
      } while (lVar1 == 0);
      sceSifSetReg(0xffffffff80000002,1);
      return;
    }
  }
  return;
}

