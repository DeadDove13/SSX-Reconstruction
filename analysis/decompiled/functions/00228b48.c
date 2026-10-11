/* Ghidra pseudocode. PS2 address: 00228b48. Not validated source. */

void FUN_00228b48(ulong param_1,undefined8 param_2,long param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = (uint)param_1 & 0xffffff1f;
  uVar3 = param_1 | 0xe0;
  if ((param_1 & 0xe0) != 0) {
    uVar3 = param_1;
  }
  (&DAT_0029a8f8)[uVar1 * 4] = (int)param_3;
  (&DAT_0029a904)[uVar1 * 4] = param_5;
  (&DAT_0029a900)[uVar1 * 4] = param_4;
  FUN_0022c878(uVar3);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = param_2;
  }
  FUN_00228bc8(uVar3,uVar2);
  return;
}

