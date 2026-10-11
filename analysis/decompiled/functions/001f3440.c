/* Ghidra pseudocode. PS2 address: 001f3440. Not validated source. */

void FUN_001f3440(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 0x32000) = &DAT_002bc758;
  FUN_001f4368(iVar1 + 0x3532c,2);
  FUN_001f4368(iVar1 + 0x3531c,2);
  FUN_001f4368(iVar1 + 0x3530c,2);
  FUN_001f4368(iVar1 + 0x352fc,2);
  FUN_001f6180(param_1,param_2);
  return;
}

