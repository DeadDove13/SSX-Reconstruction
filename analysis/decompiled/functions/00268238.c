/* Ghidra pseudocode. PS2 address: 00268238. Not validated source. */

undefined4 FUN_00268238(undefined4 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (DAT_002a6ab0 < 0) {
    uVar1 = 0;
  }
  else {
    DAT_002d7b00 = param_1;
    lVar2 = FUN_00267268(0x2d7a40,2,0,0x2d7b00,4,0x2d7a80,4,0);
    uVar1 = DAT_002d7a80;
    if (lVar2 < 0) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}

