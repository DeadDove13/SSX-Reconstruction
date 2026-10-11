/* Ghidra pseudocode. PS2 address: 00257da8. Not validated source. */

uint FUN_00257da8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = 0;
  uVar1 = param_1[3];
  if (uVar2 < 2) {
    uVar3 = 0xff;
    uVar2 = uVar1 | 0x100000;
    goto LAB_00257e68;
  }
  if (uVar2 == 4) {
LAB_00257e28:
    uVar3 = 0xff;
    uVar2 = 0;
  }
  else {
    if (uVar2 == 2) {
      uVar2 = 0;
      goto LAB_00257e68;
    }
    uVar2 = 0;
    if (uVar1 == 0) goto LAB_00257e68;
    uVar2 = param_1[2];
    if ((int)uVar2 < -0x7e) {
      uVar1 = uVar1 >> (-uVar2 - 0x7e & 0x1f);
      if (0x19 < (int)(-uVar2 - 0x7e)) {
        uVar1 = 0;
      }
    }
    else {
      uVar3 = uVar2 + 0x7f;
      if (0x7f < (int)uVar2) goto LAB_00257e28;
      if ((uVar1 & 0x7f) == 0x40) {
        if ((uVar1 & 0x80) != 0) {
          uVar1 = uVar1 + 0x40;
        }
      }
      else {
        uVar1 = uVar1 + 0x3f;
      }
      if (-1 < (int)uVar1) {
        uVar2 = uVar1 >> 7;
        goto LAB_00257e68;
      }
      uVar1 = uVar1 >> 1;
      uVar3 = uVar2 + 0x80;
    }
    uVar2 = uVar1 >> 7;
  }
LAB_00257e68:
  return uVar2 & 0x7fffff | (uVar3 & 0xff) << 0x17 | param_1[1] << 0x1f;
}

