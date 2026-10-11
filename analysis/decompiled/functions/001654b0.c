/* Ghidra pseudocode. PS2 address: 001654b0. Not validated source. */

undefined4 FUN_001654b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_002368e8(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_00237128(param_2,0);
  }
  FUN_00165568(param_1,uVar2);
  return 1;
}

