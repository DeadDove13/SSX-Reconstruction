/* Ghidra pseudocode. PS2 address: 002122a8. Not validated source. */

bool FUN_002122a8(int param_1,int param_2)

{
  long lVar1;
  
  lVar1 = FUN_0025bcf8(param_2 * 0x6c + param_1 + 0x178);
  return lVar1 != 0;
}

