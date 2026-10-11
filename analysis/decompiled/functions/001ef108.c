/* Ghidra pseudocode. PS2 address: 001ef108. Not validated source. */

void FUN_001ef108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00237128(param_2,0);
  *(undefined4 *)param_1 = (int)uVar1;
  FUN_001ef140(param_1,uVar1);
  return;
}

