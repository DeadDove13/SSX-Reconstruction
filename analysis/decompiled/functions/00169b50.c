/* Ghidra pseudocode. PS2 address: 00169b50. Not validated source. */

bool FUN_00169b50(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uStack_50;
  
  uStack_50 = CONCAT22((short)param_2,(short)((ulong)param_2 >> 8)) & 0xffffff;
  lVar1 = FUN_002237f8(0x299cc8,uStack_50);
  if (lVar1 != 0) {
    FUN_00169840(param_1,lVar1,param_2);
  }
  return lVar1 == 0;
}

