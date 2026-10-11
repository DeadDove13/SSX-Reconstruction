/* Ghidra pseudocode. PS2 address: 001205b8. Not validated source. */

void FUN_001205b8(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  
  *param_2 = *param_2 & 0xffffe001;
  uVar1 = FUN_00121560();
  *param_2 = *param_2 & 0xfffffffe | uVar1 & 1;
  return;
}

