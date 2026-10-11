/* Ghidra pseudocode. PS2 address: 00168f18. Not validated source. */

void FUN_00168f18(undefined8 param_1,undefined4 param_2)

{
  undefined4 uStack_30;
  
  uStack_30 = CONCAT22((short)param_2,(short)((uint)param_2 >> 8)) & 0xffffff;
  FUN_002237f8(0x299cc8,uStack_30);
  return;
}

