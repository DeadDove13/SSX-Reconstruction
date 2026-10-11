/* Ghidra pseudocode. PS2 address: 00181810. Not validated source. */

float FUN_00181810(int *param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  
  uVar1 = param_1[param_2 * 2 + 0x61];
  fVar3 = 0.0;
  if ((uVar1 & 0x3f000) != 0) {
    if ((uVar1 & 0x71c7) == 0) {
      fVar3 = *(float *)(*param_1 + 0x14);
    }
    else {
      fVar3 = *(float *)(*param_1 + 0x10);
    }
    fVar3 = -fVar3;
  }
  bVar2 = fVar3 == 0.0;
  if ((bVar2) && ((uVar1 & 0x3f) != 0)) {
    if ((uVar1 & 0x71c7) == 0) {
      fVar3 = *(float *)(*param_1 + 0x1c);
    }
    else {
      fVar3 = *(float *)(*param_1 + 0x18);
    }
    fVar3 = -fVar3;
    bVar2 = fVar3 == 0.0;
  }
  if ((bVar2) && ((uVar1 & 0xfc0) != 0)) {
    if ((uVar1 & 0x71c7) == 0) {
      fVar3 = *(float *)(*param_1 + 0x24);
    }
    else {
      fVar3 = *(float *)(*param_1 + 0x20);
    }
    fVar3 = -fVar3;
  }
  if (((((uVar1 & 0x12492) == 0) || (0.0 <= fVar3)) && (((uVar1 & 0x24924) == 0 || (fVar3 <= 0.0))))
     && (DAT_002c2984 <= ABS(fVar3))) {
    if (param_1[param_2 * 2 + 0x62] != 0) {
      fVar3 = -fVar3;
    }
    return fVar3;
  }
  return 0.0;
}

