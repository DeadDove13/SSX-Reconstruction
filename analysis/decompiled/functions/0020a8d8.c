/* Ghidra pseudocode. PS2 address: 0020a8d8. Not validated source. */

undefined8 FUN_0020a8d8(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344)) != 0) {
    uVar1 = FUN_00209e58();
  }
  return uVar1;
}

