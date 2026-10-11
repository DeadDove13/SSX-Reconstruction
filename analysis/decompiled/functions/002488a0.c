/* Ghidra pseudocode. PS2 address: 002488a0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_002488a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  long lVar1;
  
  lVar1 = FUN_00248330();
  if ((lVar1 != 6) && (lVar1 = FUN_002481b0(5), lVar1 != 0)) {
    DAT_002d22cc = *param_4;
    DAT_002d22cd = param_4[1];
    DAT_002d22ce = param_4[2];
    DAT_002d22d0 = &DAT_002d2200;
    DAT_002d22d4 = &DAT_002d2640;
    DAT_002d22c0 = param_1;
    DAT_002d22c4 = param_2;
    DAT_002d22c8 = param_3;
    FUN_002669d0(0x2d22c0,0x18);
    DAT_002a5274 = 1;
    DAT_002a524c = 1;
    lVar1 = FUN_00267268(0x2d2180,0xd,1,0x2d22c0,0x18,0,0,0x247a10);
    if (-1 < lVar1) {
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2beec8);
      }
      SignalSema(DAT_002a5240);
      return 1;
    }
    DAT_002a5274 = 0;
    DAT_002a524c = 0;
    SignalSema(DAT_002a5240);
  }
  return 0;
}

