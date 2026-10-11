/* Ghidra pseudocode. PS2 address: 002486d0. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_002486d0(undefined4 param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  
  lVar2 = FUN_00248330();
  if ((lVar2 != 6) && (lVar2 = FUN_002481b0(4), lVar2 != 0)) {
    DAT_002d22c8 = (undefined4)param_3;
    DAT_002d22cc = *param_4;
    DAT_002d22cd = param_4[1];
    DAT_002d22ce = param_4[2];
    DAT_002d22d4 = &DAT_002d2640;
    DAT_002d22d0 = &DAT_002d2200;
    bVar1 = param_4[2];
    if (bVar1 == 1) {
      iVar3 = param_2 * 0x918;
    }
    else if (bVar1 < 2) {
      iVar3 = param_2 << 0xb;
    }
    else if (bVar1 == 2) {
      iVar3 = param_2 * 0x924;
    }
    else {
      iVar3 = param_2 << 0xb;
    }
    DAT_002d2640 = 0;
    DAT_002d22c0 = param_1;
    DAT_002d22c4 = param_2;
    FUN_002669d0(param_3,iVar3);
    FUN_002669d0(0x2d2200,0x90);
    FUN_002669d0(0x2d22c0,0x18);
    FUN_002669d0(0x2d2640,4);
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2beed8);
    }
    DAT_002a5274 = 1;
    DAT_002a524c = 1;
    lVar2 = FUN_00267268(0x2d2180,1,1,0x2d22c0,0x18,0,0,0x247c18);
    if (-1 < lVar2) {
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

