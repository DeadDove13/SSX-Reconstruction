/* Ghidra pseudocode. PS2 address: 00249b20. Not validated source. */

undefined4 FUN_00249b20(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(7);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    DAT_002d33f0 = *param_1;
    DAT_002d33f8 = param_1[1];
    FUN_002669d0(0x2d33f0,0x10);
    lVar2 = FUN_00267268(0x2d32e0,0x1b,0,0x2d33f0,0x10,0x2d2ec0,8,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0;
    }
    else {
      *param_2 = DAT_202d2ec4;
      uVar1 = DAT_202d2ec0;
      SignalSema(DAT_002a5244);
    }
  }
  return uVar1;
}

