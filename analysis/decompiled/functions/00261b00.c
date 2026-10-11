/* Ghidra pseudocode. PS2 address: 00261b00. Not validated source. */

ulong FUN_00261b00(int param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = (param_1 >> 0x20 & 0x7ff00000U) + 0xfcc00000;
  if ((long)iVar1 < 1) {
    uVar2 = -iVar1 >> 0x14;
    if ((int)uVar2 < 0x14) {
      uVar3 = (long)(0x80000 >> (uVar2 & 0x1f)) << 0x20;
    }
    else {
      if ((int)(uVar2 - 0x14) < 0x1f) {
        uVar2 = 1 << (0x1f - (uVar2 - 0x14) & 0x1f);
      }
      else {
        uVar2 = 1;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  else {
    uVar3 = (long)iVar1 << 0x20;
  }
  return uVar3;
}

