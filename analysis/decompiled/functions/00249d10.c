/* Ghidra pseudocode. PS2 address: 00249d10. Not validated source. */

undefined4 FUN_00249d10(undefined4 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00249098(0x1a);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    DAT_002d3400 = param_1;
    FUN_002669d0(0x2d3400,4);
    lVar2 = FUN_00267268(0x2d32e0,5,0,0x2d3400,4,0x2d2ec0,8,0);
    if (lVar2 < 0) {
      SignalSema(DAT_002a5244);
      uVar1 = 0xffffffff;
    }
    else {
      if (param_2 != 0) {
        *(undefined4 *)param_2 = DAT_202d2ec4;
      }
      uVar1 = DAT_202d2ec0;
      SignalSema(DAT_002a5244);
    }
  }
  return uVar1;
}

