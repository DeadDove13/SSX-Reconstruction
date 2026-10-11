/* Ghidra pseudocode. PS2 address: 00257d50. Not validated source. */

void FUN_00257d50(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ulong uStack_30;
  undefined8 auStack_20 [2];
  
  auStack_20[0] = param_1;
  FUN_002571e0(auStack_20,&uStack_40);
  uVar2 = (long)(uStack_30 << 2) >> 0x20;
  uVar1 = uVar2 | 1;
  if ((uStack_30 & 0x3fffffff) == 0) {
    uVar1 = uVar2;
  }
  FUN_00258918(uStack_40,uStack_3c,uStack_38,uVar1);
  return;
}

