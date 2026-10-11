/* Ghidra pseudocode. PS2 address: 00146760. Not validated source. */

void FUN_00146760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)param_1 == 0) {
    uVar1 = FUN_00237128(param_2,param_3);
    FUN_001467b0(param_1,uVar1);
    return;
  }
  return;
}

