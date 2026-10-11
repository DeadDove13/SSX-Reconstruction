/* Ghidra pseudocode. PS2 address: 00261368. Not validated source. */

int FUN_00261368(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 7) == 0) {
    iVar2 = 0;
    if ((uVar1 & 0xffff) == 0) {
      iVar2 = 0x10;
      uVar1 = uVar1 >> 0x10;
    }
    if ((uVar1 & 0xff) == 0) {
      iVar2 = iVar2 + 8;
      uVar1 = uVar1 >> 8;
    }
    if ((uVar1 & 0xf) == 0) {
      iVar2 = iVar2 + 4;
      uVar1 = uVar1 >> 4;
    }
    if ((uVar1 & 3) == 0) {
      iVar2 = iVar2 + 2;
      uVar1 = uVar1 >> 2;
    }
    if ((uVar1 & 1) == 0) {
      iVar2 = iVar2 + 1;
      if (uVar1 >> 1 == 0) {
        return 0x20;
      }
      *param_1 = uVar1 >> 1;
    }
    else {
      *param_1 = uVar1;
    }
    return iVar2;
  }
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  if ((uVar1 & 2) == 0) {
    *param_1 = uVar1 >> 2;
    return 2;
  }
  *param_1 = uVar1 >> 1;
  return 1;
}

