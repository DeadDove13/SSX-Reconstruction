/* Ghidra pseudocode. PS2 address: 002410e0. Not validated source. */

undefined8 FUN_002410e0(void)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if (DAT_002c5b28 != (code *)0x0) {
    uVar1 = (*DAT_002c5b28)();
  }
  return uVar1;
}

