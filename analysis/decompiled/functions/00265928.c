/* Ghidra pseudocode. PS2 address: 00265928. Not validated source. */

undefined8 FUN_00265928(undefined8 param_1)

{
  uint uVar1;
  
  do {
    uVar1 = REG_SIO_ISR;
  } while ((uVar1 & 0x8000) != 0);
  REG_SIO_TXFIFO = (char)param_1;
  return param_1;
}

