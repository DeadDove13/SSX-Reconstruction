/* Ghidra pseudocode. PS2 address: 001656f8. Not validated source. */

bool FUN_001656f8(int param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0025bcf8(param_2);
  if (uVar1 < 0x40) {
    FUN_0025bbe4(param_1 + 0x30,param_2);
  }
  return uVar1 < 0x40;
}

