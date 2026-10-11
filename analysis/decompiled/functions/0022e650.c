/* Ghidra pseudocode. PS2 address: 0022e650. Not validated source. */

undefined4 FUN_0022e650(undefined8 param_1)

{
  undefined4 uVar1;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    FUN_00234160(param_1);
    uVar1 = 0;
    (&DAT_002a1b10)[(int)param_1] = 0;
  }
  return uVar1;
}

