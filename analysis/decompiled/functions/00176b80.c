/* Ghidra pseudocode. PS2 address: 00176b80. Not validated source. */

undefined8 FUN_00176b80(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 0x120) == 0) {
    uVar1 = 0;
    if ((param_2 & 0x880) == 0) {
      uVar1 = FUN_001746e0();
    }
  }
  else {
    FUN_001faea0(DAT_002c56e8);
    uVar1 = 3;
  }
  return uVar1;
}

