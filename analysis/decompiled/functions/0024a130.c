/* Ghidra pseudocode. PS2 address: 0024a130. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0024a130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            long param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = FUN_002481b0(0xf);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bf0f8);
    }
    if (param_5 != 0) {
      puVar3 = (undefined1 *)param_5;
      DAT_002d3420 = *puVar3;
      DAT_002d3421 = puVar3[1];
      DAT_002d3422 = puVar3[2];
    }
    DAT_002d3410 = param_1;
    DAT_002d3414 = param_2;
    DAT_002d3418 = param_3;
    DAT_002d341c = param_4;
    if (0 < ram0x002a5230) {
      FUN_0025a720(0x2bf110);
    }
    FUN_002669d0(0x2d3410,0x14);
    lVar2 = FUN_00267268(0x2d2180,9,0,0x2d3410,0x14,0x2d1f80,4,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5240);
      uVar1 = 0;
    }
    else {
      if (0 < ram0x002a5230) {
        FUN_0025a720(0x2beec8);
      }
      uVar1 = DAT_202d1f80;
      SignalSema(DAT_002a5240);
    }
  }
  return uVar1;
}

