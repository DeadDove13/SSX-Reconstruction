/* Ghidra pseudocode. PS2 address: 00242e28. Not validated source. */

undefined4 FUN_00242e28(void)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (DAT_002c5b2c == 0x1789a34) {
    lVar1 = FUN_00242f28();
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

