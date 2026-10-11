/* Ghidra pseudocode. PS2 address: 00209480. Not validated source. */

undefined8 FUN_00209480(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x8b6c0 + param_2 * 4) != 0) {
    uVar1 = FUN_00208f00();
  }
  return uVar1;
}

