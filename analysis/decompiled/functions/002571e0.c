/* Ghidra pseudocode. PS2 address: 002571e0. Not validated source. */

void FUN_002571e0(ulong *param_1,undefined4 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 & 0xfffffffffffff;
  param_2[1] = (uint)(uVar1 >> 0x3f);
  uVar3 = uVar1 >> 0x34 & 0x7ff;
  if (uVar3 == 0) {
    *param_2 = 2;
    return;
  }
  if (uVar3 != 0x7ff) {
    *(ulong *)(param_2 + 4) = uVar2 << 8 | 0x1000000000000000;
    param_2[2] = (int)uVar3 + -0x3ff;
    *param_2 = 3;
    return;
  }
  if (uVar2 == 0) {
    *param_2 = 4;
    return;
  }
  if ((uVar1 & 0x8000000000000) == 0) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  *(ulong *)(param_2 + 4) = uVar2;
  return;
}

