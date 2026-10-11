/* Ghidra pseudocode. PS2 address: 00228a10. Not validated source. */

uint FUN_00228a10(undefined8 param_1)

{
  uint uVar1;
  
  if (DAT_0029a888 == '\0') {
    uVar1 = 0xfffffff6;
  }
  else {
    FUN_002250c0();
    uVar1 = FUN_00229330(param_1);
    uVar1 = uVar1 >> 0x1f;
    FUN_002250a0();
  }
  return uVar1;
}

