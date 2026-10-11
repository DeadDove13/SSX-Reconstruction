/* Ghidra pseudocode. PS2 address: 001093e8. Not validated source. */

undefined8 FUN_001093e8(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x24) != -1) {
    uVar1 = FUN_00189b48();
  }
  return uVar1;
}

