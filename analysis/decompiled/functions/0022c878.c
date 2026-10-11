/* Ghidra pseudocode. PS2 address: 0022c878. Not validated source. */

undefined8 FUN_0022c878(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = (uint)param_1 & 0xffffff1f;
  (&DAT_0029e8d1)[uVar1] = (char)param_1;
  DAT_0029e8c8 = FUN_0022c7a0;
  if (DAT_0029a888 != '\0') {
    FUN_0022c7a0(param_1,(&DAT_0029a8f8)[uVar1 * 4]);
  }
  return 0;
}

