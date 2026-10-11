/* Ghidra pseudocode. PS2 address: 001746b0. Not validated source. */

undefined8 FUN_001746b0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffffffffffff;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = FUN_00173108();
  }
  return uVar1;
}

