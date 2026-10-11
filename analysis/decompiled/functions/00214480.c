/* Ghidra pseudocode. PS2 address: 00214480. Not validated source. */

void FUN_00214480(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00214398(param_1,2);
  if ((uVar1 & 0x100) == 0) {
    FUN_00214398((int)param_1 + 2,3);
  }
  else {
    FUN_00214398((int)param_1 + 5,3);
  }
  return;
}

