/* Ghidra pseudocode. PS2 address: 001c4dd8. Not validated source. */

void FUN_001c4dd8(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = param_1[0x516];
  FUN_0011ecd8(0x295e90,param_2,1);
  FUN_001d0a80(*param_1,param_2,param_3,param_1 + 0x516);
  iVar2 = param_1[0x516];
  param_1[0x516] = iVar2 + 0x10;
  FUN_001d39e8(param_1[2],uVar1,iVar2,1);
  return;
}

