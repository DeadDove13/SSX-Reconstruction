/* Ghidra pseudocode. PS2 address: 00216818. Not validated source. */

undefined4 FUN_00216818(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  FUN_00168740(0x295e90);
  do {
    lVar2 = FUN_001c3a08(0x2913b0);
  } while (lVar2 == 0);
  uVar1 = DAT_002c58b4;
  DAT_002c58b4 = param_1;
  return uVar1;
}

