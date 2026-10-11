/* Ghidra pseudocode. PS2 address: 00243f08. Not validated source. */

undefined * FUN_00243f08(ulong param_1)

{
  if (param_1 < 10) {
    return (&PTR_REG_DMAC_0_VIF0_CHCR_002a5090)[(int)param_1];
  }
  return (undefined *)0x0;
}

