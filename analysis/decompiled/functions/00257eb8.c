/* Ghidra pseudocode. PS2 address: 00257eb8. Not validated source. */

void FUN_00257eb8(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 0x7fffff;
  uVar3 = uVar1 >> 0x17 & 0xff;
  param_2[1] = uVar1 >> 0x1f;
  if (uVar3 == 0) {
    *param_2 = 2;
    return;
  }
  if (uVar3 == 0xff) {
    if (uVar2 == 0) {
      *param_2 = 4;
      return;
    }
    if ((uVar1 & 0x100000) == 0) {
      *param_2 = 0;
    }
    else {
      *param_2 = 1;
    }
    param_2[3] = uVar2;
    return;
  }
  param_2[3] = uVar2 << 7 | 0x40000000;
  param_2[2] = uVar3 - 0x7f;
  *param_2 = 3;
  return;
}

