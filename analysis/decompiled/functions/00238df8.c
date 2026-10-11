/* Ghidra pseudocode. PS2 address: 00238df8. Not validated source. */

uint FUN_00238df8(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((param_1 >> 0x18) * 0x30 + DAT_002a3374);
  uVar1 = 0xfffffffd;
  if ((param_1 & 0xfffff) == (*puVar2 & 0xfffff)) {
    uVar1 = puVar2[2];
  }
  return uVar1;
}

