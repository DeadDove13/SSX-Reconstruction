/* Ghidra pseudocode. PS2 address: 0024f118. Not validated source. */

undefined4 FUN_0024f118(void)

{
  ulong uVar1;
  undefined4 auStack_c0 [2];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  
  while( true ) {
    while( true ) {
      while( true ) {
        FUN_0024f040();
        uVar1 = FUN_0024eec8(0x20);
        if (uVar1 != 0x1b3) break;
        FUN_0024b0f0();
      }
      if (0x1b3 < uVar1) break;
      if (uVar1 == 0x100) {
        FUN_0024f240();
        auStack_c0[0] = 5;
        uStack_b0 = 0xffffffffffffffff;
        uStack_b8 = 0xffffffffffffffff;
        FUN_0024a768(DAT_002a52a4,auStack_c0);
        DAT_002a5b50 = uStack_b0;
        DAT_002a5b48 = uStack_b8;
        return DAT_002a543c;
      }
    }
    if (uVar1 == 0x1b7) break;
    if (uVar1 == 0x1b8) {
      FUN_0024f700();
    }
  }
  return 0;
}

