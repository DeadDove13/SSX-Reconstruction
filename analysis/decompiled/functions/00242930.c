/* Ghidra pseudocode. PS2 address: 00242930. Not validated source. */

uint FUN_00242930(int param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < 8) {
    uVar1 = (uint)*(byte *)((int)param_2 * 2 +
                           param_1 + ((uint)*(byte *)(param_1 + 6) * 2 + 3 & 0x3fc) + 0xc);
  }
  return uVar1;
}

