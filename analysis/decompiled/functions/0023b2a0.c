/* Ghidra pseudocode. PS2 address: 0023b2a0. Not validated source. */

undefined8 FUN_0023b2a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0023acc8(0,0x2c5a28,param_1,param_2,0x40,0x80,0,0);
  DAT_002a33cc = DAT_002a33c8;
  if (DAT_002c5ad4 == 0) {
    DAT_002c5ad4 = (int)param_1;
  }
  return uVar1;
}

