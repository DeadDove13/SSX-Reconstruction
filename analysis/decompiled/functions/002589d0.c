/* Ghidra pseudocode. PS2 address: 002589d0. Not validated source. */

byte * FUN_002589d0(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (uVar2 & 0x1f);
    uVar2 = uVar2 + 7;
  } while ((bVar1 & 0x80) != 0);
  if ((uVar2 < 0x20) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1 << (uVar2 & 0x1f);
  }
  *param_2 = uVar3;
  return param_1;
}

