/* Ghidra pseudocode. PS2 address: 00258988. Not validated source. */

byte * FUN_00258988(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = 0;
  uVar2 = bVar1 & 0x7f;
  while (param_1 = param_1 + 1, (bVar1 & 0x80) != 0) {
    bVar1 = *param_1;
    uVar3 = uVar3 + 7;
    uVar2 = uVar2 | (bVar1 & 0x7f) << (uVar3 & 0x1f);
  }
  *param_2 = uVar2;
  return param_1;
}

