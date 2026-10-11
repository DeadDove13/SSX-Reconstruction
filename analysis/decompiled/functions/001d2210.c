/* Ghidra pseudocode. PS2 address: 001d2210. Not validated source. */

ulong FUN_001d2210(int param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = param_2 ^ 0x10;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((uVar2 & 0x40000000) == 0) {
    if ((uVar2 & 0xc000000) == 0) {
      lVar1 = FUN_0023a448(0x2b7628,0x2af80,uVar2 & 0x3ffffff);
    }
    else {
      lVar1 = FUN_00210840(0x28ac20,0x2af80,uVar2,0x2b7628,0,0);
    }
  }
  else {
    lVar1 = FUN_002107c8(0x298590,0x2af80,uVar2,0x2b7628,0,0);
  }
  if (lVar1 == 0) {
    uVar2 = uVar2 & 0x20000000;
  }
  else {
    if ((long)uVar2 < 0) {
      uVar2 = FUN_0023bbd0(lVar1,0,0x2af80);
      *(int *)(param_1 + 0x30) = (int)param_2;
      goto LAB_001d231c;
    }
    uVar2 = FUN_0023bbd0(lVar1,0xffffffffdeadc0ed,0x2af80);
  }
  *(int *)(param_1 + 0x30) = (int)param_2;
LAB_001d231c:
  *(int *)(param_1 + 0x3c) = (int)lVar1;
  return uVar2;
}

