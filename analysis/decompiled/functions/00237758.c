/* Ghidra pseudocode. PS2 address: 00237758. Not validated source. */

void FUN_00237758(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  DAT_002c5a58 = 0;
  FUN_0023e6e0(0x237a40,0,0);
  uVar1 = DAT_002c5a58 | 2;
  if (param_2 == 0) {
    DAT_002c5a54 = 2;
  }
  else {
    uVar1 = DAT_002c5a58 | 3;
    DAT_002c5a54 = 1;
  }
  DAT_002c5a58 = uVar1;
  return;
}

