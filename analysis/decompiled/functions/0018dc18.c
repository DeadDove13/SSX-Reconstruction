/* Ghidra pseudocode. PS2 address: 0018dc18. Not validated source. */

undefined4 FUN_0018dc18(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_0018dd60();
  if (lVar2 == 0x1b) {
    uVar1 = 2;
  }
  else if (lVar2 < 0x1c) {
    uVar1 = 0;
    if (lVar2 == 8) {
      uVar1 = 1;
    }
  }
  else if (lVar2 == 0x4800) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
    if (lVar2 == 0x5000) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

