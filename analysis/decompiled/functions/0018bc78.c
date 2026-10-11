/* Ghidra pseudocode. PS2 address: 0018bc78. Not validated source. */

uint FUN_0018bc78(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_3 + 0x7ff;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  DAT_002c4ea0 = DAT_00285b40 + param_1 * 0x4c + -0x4c;
  DAT_00285b30 = param_3 + (iVar1 >> 0xb) * -0x800;
  uVar2 = *(int *)(DAT_002c4ea0 + 0x48) - param_3;
  if ((int)param_4 <= (int)uVar2) {
    uVar2 = param_4;
  }
  DAT_00285b28 = uVar2;
  if (DAT_00285b30 == 0) {
    if ((int)uVar2 < 0x800) {
      DAT_00285b38 = 1;
      DAT_00285b00 = DAT_00285b00 | 1;
    }
    else if ((param_2 & 0x3f) == 0) {
      DAT_00285b00 = DAT_00285b00 & 0xfffffffe;
      DAT_00285b38 = (int)uVar2 >> 0xb;
      DAT_00285b28 = uVar2 & 0xfffff800;
    }
    else {
      DAT_00285b38 = 1;
      DAT_00285b00 = DAT_00285b00 | 1;
      DAT_00285b28 = 0x800;
    }
  }
  else {
    DAT_00285b38 = 1;
    DAT_00285b00 = DAT_00285b00 | 1;
    if (0x800 < (int)(DAT_00285b30 + uVar2)) {
      DAT_00285b28 = 0x800 - DAT_00285b30;
    }
  }
  DAT_00285b2c = uVar2 - DAT_00285b28;
  iVar1 = param_3 + 0x7ff;
  if (-1 < param_3) {
    iVar1 = param_3;
  }
  DAT_00285b34 = *(int *)(DAT_002c4ea0 + 0x44) + (iVar1 >> 0xb);
  DAT_00285b3c = param_2;
  if ((DAT_00285b34 == DAT_00285b14) && ((int)DAT_00285b28 < 0x801)) {
    FUN_0023bac0(param_2,DAT_00285b44 + DAT_00285b30);
    if ((int)DAT_00285b2c < 1) {
      if (DAT_00285b1c == (code *)0x0) {
        return uVar2;
      }
      if (DAT_002c4e9c != (code *)0x0) {
        (*DAT_002c4e9c)(DAT_002c4ea0,0,0);
      }
      DAT_00285b18 = 0xffffffff;
      (*DAT_00285b1c)(1);
      return uVar2;
    }
    DAT_00285b34 = DAT_00285b34 + 1;
    DAT_00285b30 = 0;
    DAT_00285b3c = DAT_00285b3c + DAT_00285b28;
    if ((int)DAT_00285b2c < 0x800) {
      DAT_00285b38 = 1;
      DAT_00285b00 = DAT_00285b00 | 1;
      DAT_00285b28 = DAT_00285b2c;
    }
    else if ((DAT_00285b3c & 0x3f) == 0) {
      DAT_00285b28 = DAT_00285b2c & 0xfffff800;
      DAT_00285b00 = DAT_00285b00 & 0xfffffffe;
      DAT_00285b38 = (int)DAT_00285b2c >> 0xb;
    }
    else {
      DAT_00285b28 = 0x800;
      DAT_00285b38 = 1;
      DAT_00285b00 = DAT_00285b00 | 1;
    }
    DAT_00285b2c = DAT_00285b2c - DAT_00285b28;
  }
  if (DAT_002c4e9c != (code *)0x0) {
    (*DAT_002c4e9c)(DAT_002c4ea0,DAT_00285b34,DAT_00285b38);
  }
  DAT_00285b10 = 3;
  FUN_0018b378();
  return uVar2;
}

