/* Ghidra pseudocode. PS2 address: 00229740. Not validated source. */

int FUN_00229740(byte *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = (int)param_2 + -1;
  if (param_2 != 0) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 * 0x100 + (uint)bVar1;
    } while (iVar2 != -1);
  }
  if ((param_2 == 1) && (0x7f < iVar3)) {
    iVar3 = iVar3 + -0x100;
  }
  else if (((param_2 == 2) && (iVar2 = -0x10000, 0x7fff < iVar3)) ||
          ((param_2 == 3 && (iVar2 = -0x1000000, 0x7fffff < iVar3)))) {
    iVar3 = iVar3 + iVar2;
  }
  return iVar3;
}

