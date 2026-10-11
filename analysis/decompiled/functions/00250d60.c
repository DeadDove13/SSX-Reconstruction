/* Ghidra pseudocode. PS2 address: 00250d60. Not validated source. */

uint FUN_00250d60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    do {
      iVar1 = REG_IPU_CTRL;
    } while (iVar1 < 0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_1 == 1) {
      uVar2 = REG_IPU_CTRL;
      uVar2 = uVar2 >> 0x1f;
    }
  }
  return uVar2;
}

