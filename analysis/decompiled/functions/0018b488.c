/* Ghidra pseudocode. PS2 address: 0018b488. Not validated source. */

void FUN_0018b488(void)

{
  long lVar1;
  
  do {
    while( true ) {
      while( true ) {
        WaitSema(DAT_00285b0c);
        lVar1 = FUN_002497e0();
        if (lVar1 == 0) break;
        if (0 < DAT_00285b18) {
          DAT_00285b10 = DAT_00285b10 + -1;
          if (DAT_00285b10 < 1) {
            DAT_00285b18 = DAT_002c5aa0;
          }
          else {
            FUN_0018b378();
          }
        }
      }
      if ((DAT_00285b00 & 1) != 0) {
        DAT_00285b14 = DAT_00285b34;
        DAT_00285b00 = DAT_00285b00 & 0xfffffffe;
        FUN_0023bac0(DAT_00285b3c,DAT_00285b44 + DAT_00285b30,DAT_00285b28);
      }
      if ((int)DAT_00285b2c < 1) break;
      DAT_00285b3c = DAT_00285b3c + DAT_00285b28;
      DAT_00285b30 = 0;
      DAT_00285b34 = DAT_00285b34 + DAT_00285b38;
      if ((int)DAT_00285b2c < 0x800) {
        DAT_00285b38 = 1;
        DAT_00285b00 = DAT_00285b00 | 1;
        DAT_00285b28 = DAT_00285b2c;
      }
      else if ((DAT_00285b3c & 0x3f) == 0) {
        DAT_00285b28 = DAT_00285b2c & 0xfffff800;
        DAT_00285b00 = DAT_00285b00 & 0xfffffffe;
        DAT_00285b38 = (int)DAT_00285b2c >> 0xb;
      }
      else {
        DAT_00285b28 = 0x800;
        DAT_00285b00 = DAT_00285b00 | 1;
        DAT_00285b38 = 1;
      }
      DAT_00285b2c = DAT_00285b2c - DAT_00285b28;
      FUN_0018b378();
    }
    if (DAT_00285b1c != (code *)0x0) {
      if (DAT_002c4e9c != (code *)0x0) {
        (*DAT_002c4e9c)(DAT_002c4ea0,0,0);
      }
      DAT_00285b18 = -1;
      (*DAT_00285b1c)(1);
    }
  } while( true );
}

