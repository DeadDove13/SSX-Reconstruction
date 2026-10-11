/* Ghidra pseudocode. PS2 address: 00265a48. Not validated source. */

int FUN_00265a48(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = ((param_1 & 0x7fffffffffffffff) >> 0x34) - 0x433;
  if (lVar3 < -0x35) {
    return 0;
  }
  if (0xc < lVar3) {
    return 9999;
  }
  uVar2 = param_1 & 0xfffffffffffff | 0x10000000000000;
  if (lVar3 < 0) {
    uVar2 = uVar2 >> (long)(-2 - (int)lVar3);
    if ((uVar2 & 3) == 3) {
      iVar1 = (int)(uVar2 >> 2) + 1;
    }
    else {
      iVar1 = (int)(uVar2 >> 2);
    }
  }
  else {
    iVar1 = (int)(uVar2 << (long)(int)lVar3);
  }
  return iVar1;
}

