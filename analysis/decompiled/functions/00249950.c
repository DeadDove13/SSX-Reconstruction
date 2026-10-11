/* Ghidra pseudocode. PS2 address: 00249950. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00249950(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_00249098(5);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    lVar3 = FUN_00267268(0x2d32e0,0x1a,0,0,0,0x2d2ec0,0x18,0);
    uVar1 = DAT_202d2ed0;
    if (lVar3 < 0) {
      SignalSema(DAT_002a5244);
      uVar2 = 0;
    }
    else {
      *param_1 = _DAT_202d2ec8;
      param_1[1] = uVar1;
      *param_2 = DAT_202d2ec4;
      uVar2 = DAT_202d2ec0;
      SignalSema(DAT_002a5244);
    }
  }
  return uVar2;
}

