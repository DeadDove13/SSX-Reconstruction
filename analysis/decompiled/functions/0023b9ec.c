/* Ghidra pseudocode. PS2 address: 0023b9ec. Not validated source. */

uint FUN_0023b9ec(byte *param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (param_2 + -3 < 0) {
    if (-1 < param_2 + -2) {
      return (uint)CONCAT11(bVar1,param_1[1]);
    }
    return (uint)bVar1;
  }
  if (param_2 != 3) {
    return CONCAT22(CONCAT11(bVar1,param_1[1]),CONCAT11(param_1[2],param_1[3]));
  }
  return (uint)CONCAT21(CONCAT11(bVar1,param_1[1]),param_1[2]);
}

