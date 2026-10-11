/* Ghidra pseudocode. PS2 address: 00261e98. Not validated source. */

void FUN_00261e98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iStack_50;
  int iStack_4c;
  
  uVar2 = FUN_00261b98(param_1,&iStack_50);
  uVar3 = FUN_00261b98(param_2,(uint)&iStack_50 | 4);
  iVar1 = (iStack_50 - iStack_4c) +
          (*(int *)((int)param_1 + 0x10) - *(int *)((int)param_2 + 0x10)) * 0x20;
  if (iVar1 < 1) {
    uVar3 = uVar3 & 0xffffffff | (long)((int)(uVar3 >> 0x20) + iVar1 * -0x100000) << 0x20;
  }
  else {
    uVar2 = uVar2 & 0xffffffff | (long)((int)(uVar2 >> 0x20) + iVar1 * 0x100000) << 0x20;
  }
  FUN_00257828(uVar2,uVar3);
  return;
}

