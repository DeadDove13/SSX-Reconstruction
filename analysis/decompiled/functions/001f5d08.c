/* Ghidra pseudocode. PS2 address: 001f5d08. Not validated source. */

void FUN_001f5d08(undefined4 param_1)

{
  long lVar1;
  
  lVar1 = FUN_001f5e68();
  if (lVar1 != 0) {
    FUN_001f57b0(param_1,lVar1,0xffffffffffffffff);
    return;
  }
  return;
}

