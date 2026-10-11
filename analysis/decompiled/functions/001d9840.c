/* Ghidra pseudocode. PS2 address: 001d9840. Not validated source. */

void FUN_001d9840(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_0023a448(0x2c5358,0xc80,0);
  if (lVar3 != 0) {
    FUN_0023bbd0(lVar3,0xffffffffdeadc0de,0xc80);
  }
  uVar2 = FUN_00210ce0(lVar3);
  uVar1 = DAT_002c3670;
  *(undefined4 *)(param_1 + 0x16c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

