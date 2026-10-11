/* Ghidra pseudocode. PS2 address: 00238ef0. Not validated source. */

void FUN_00238ef0(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)((param_1 >> 0x18) * 0x30 + DAT_002a3374);
  if ((((param_1 & 0xfffff) == (*puVar2 & 0xfffff)) && (uVar1 = param_1 >> 0x14 & 0xf, uVar1 != 3))
     && (uVar1 != 10)) {
    puVar2[1] = 1;
  }
  return;
}

