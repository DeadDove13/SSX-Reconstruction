/* Ghidra pseudocode. PS2 address: 0020a848. Not validated source. */

undefined4 FUN_0020a848(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 * 4 + *(int *)(param_1 + 0x35344)) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00209e10();
  }
  return uVar1;
}

