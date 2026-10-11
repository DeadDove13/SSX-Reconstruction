/* Ghidra pseudocode. PS2 address: 002132f8. Not validated source. */

uint FUN_002132f8(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 8 & 0xff;
  if ((param_1 & 0xff) == 0x81) {
    return (uint)(byte)(&DAT_00298738)[uVar2];
  }
  if ((param_1 & 0xff) == 0x82) {
    iVar1 = 0;
    if (9 < uVar2 - 0x4f) {
      iVar1 = 1;
      if ((0x19 < uVar2 - 0x60) && (iVar1 = 2, 0x19 < (uVar2 + 0x7f & 0xff))) {
        iVar1 = 0;
      }
      iVar1 = iVar1 << 1;
    }
    return (uint)(byte)(&DAT_002c5879)[iVar1] + (uVar2 - (byte)(&DAT_002c5878)[iVar1]) & 0xff;
  }
  return 0;
}

