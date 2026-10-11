/* Ghidra pseudocode. PS2 address: 00256a78. Not validated source. */

ulong FUN_00256a78(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (param_1 & 0xffffffff) * (param_2 & 0xffffffff);
  return uVar1 & 0xffffffff |
         (long)((int)(uVar1 >> 0x20) +
               (int)param_1 * (int)(param_2 >> 0x20) + (int)(param_1 >> 0x20) * (int)param_2) <<
         0x20;
}

