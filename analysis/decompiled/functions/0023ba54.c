/* Ghidra pseudocode. PS2 address: 0023ba54. Not validated source. */

uint FUN_0023ba54(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_2 * -8 + 0x20;
  return (uint)(*param_1 << (uVar1 & 0x1f)) >> (uVar1 & 0x1f);
}

