/* Ghidra pseudocode. PS2 address: 002570b0. Not validated source. */

ulong FUN_002570b0(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar4 = 0;
  uVar2 = *(ulong *)(param_1 + 4);
  if (uVar1 < 2) {
    uVar4 = 0x7ff;
    uVar3 = uVar2 | 0x8000000000000;
    goto LAB_00257180;
  }
  if (uVar1 == 4) {
LAB_0025713c:
    uVar4 = 0x7ff;
    uVar3 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar3 = 0;
      goto LAB_00257180;
    }
    uVar3 = 0;
    if (uVar2 == 0) goto LAB_00257180;
    uVar1 = param_1[2];
    if ((int)uVar1 < -0x3fe) {
      uVar2 = uVar2 >> (long)(int)(-0x3fe - uVar1);
      if (0x38 < (long)(int)(-0x3fe - uVar1)) {
        uVar2 = 0;
      }
    }
    else {
      uVar4 = (ulong)(int)(uVar1 + 0x3ff);
      if (0x3ff < (int)uVar1) goto LAB_0025713c;
      if ((uVar2 & 0xff) == 0x80) {
        if ((uVar2 & 0x100) != 0) {
          uVar2 = uVar2 + 0x80;
        }
      }
      else {
        uVar2 = uVar2 + 0x7f;
      }
      if (uVar2 < 0x2000000000000000) {
        uVar3 = uVar2 >> 8;
        goto LAB_00257180;
      }
      uVar2 = uVar2 >> 1;
      uVar4 = (ulong)(int)(uVar1 + 0x400);
    }
    uVar3 = uVar2 >> 8;
  }
LAB_00257180:
  return uVar3 & 0xfffffffffffff | (uVar4 & 0x7ff) << 0x34 | (long)(int)param_1[1] << 0x3f;
}

