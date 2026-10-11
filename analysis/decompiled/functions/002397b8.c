/* Ghidra pseudocode. PS2 address: 002397b8. Not validated source. */

void FUN_002397b8(uint param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(DAT_002a3374 + (param_1 >> 0x18) * 0x30);
  uVar1 = puVar2[2];
  if (uVar1 != 0) {
    if ((int)uVar1 < 1) {
      if ((-3 < (int)uVar1) && ((uVar1 = *puVar2 >> 0x14 & 0xf, uVar1 == 2 || (uVar1 == 9)))) {
        FUN_00238bc8(puVar2[9]);
      }
    }
    else if (uVar1 == 1) {
      switch(*puVar2 >> 0x14 & 0xf) {
      case 3:
      case 7:
      case 10:
      }
    }
  }
  FUN_00238b78(puVar2);
  FUN_002385e0(param_3);
  return;
}

