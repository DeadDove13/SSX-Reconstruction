/* Ghidra pseudocode. PS2 address: 002475d0. Not validated source. */

undefined4 FUN_002475d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  DAT_002d1e80 = 9;
  DAT_002d1e84 = param_1;
  DAT_002d1e88 = param_2;
  lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
  uVar1 = DAT_002d1e8c;
  if (lVar2 < 0) {
    uVar1 = 0;
  }
  return uVar1;
}

