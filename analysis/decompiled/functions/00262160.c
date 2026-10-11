/* Ghidra pseudocode. PS2 address: 00262160. Not validated source. */

int FUN_00262160(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = 0x7ff00000 -
          ((uint)((ulong)param_1 >> 0x20) & 0x7fffffff | ((uint)param_1 | -(uint)param_1) >> 0x1f);
  return ((int)(uVar1 | -uVar1) >> 0x1f) + 1;
}

