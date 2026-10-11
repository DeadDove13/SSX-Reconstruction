/* Ghidra pseudocode. PS2 address: 001468d0. Not validated source. */

void FUN_001468d0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_002196a0(param_2,param_3,param_4,0,0);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

