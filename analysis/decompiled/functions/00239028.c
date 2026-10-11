/* Ghidra pseudocode. PS2 address: 00239028. Not validated source. */

uint FUN_00239028(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)(DAT_002a3374 + (param_1 >> 0x18) * 0x30);
  uVar1 = puVar2[2];
  uVar3 = 0;
  if (uVar1 != 0) {
    if ((int)uVar1 < 1) {
      if ((-3 < (int)uVar1) && ((uVar1 = *puVar2 >> 0x14 & 0xf, uVar1 == 2 || (uVar1 == 9)))) {
        FUN_00238bc8(puVar2[9]);
      }
    }
    else if (uVar1 == 1) {
      switch(*puVar2 >> 0x14 & 0xf) {
      case 2:
      case 9:
        uVar3 = puVar2[9];
        break;
      case 3:
      case 7:
      case 10:
        uVar3 = puVar2[2];
        break;
      case 4:
      case 5:
        uVar3 = puVar2[7];
        break;
      case 6:
      case 8:
        uVar3 = puVar2[6];
      }
    }
  }
  FUN_00238b78(puVar2);
  return uVar3;
}

