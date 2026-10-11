/* Ghidra pseudocode. PS2 address: 0022d418. Not validated source. */

void FUN_0022d418(void)

{
  long lVar1;
  
  if (DAT_0029af86 != '\0') {
    lVar1 = FUN_00246510(1,0x80f0,0,0);
    if (lVar1 == 0) {
      return;
    }
    DAT_0029af86 = '\0';
    *(undefined4 *)((int)&DAT_0029af88 + ((int)((uint)DAT_0029af85 << 0x18) >> 0x14)) = 0;
    DAT_0029af84 = DAT_0029af84 - 1;
  }
  if (0 < (int)((uint)DAT_0029af84 << 0x18)) {
    FUN_0022cff0();
  }
  return;
}

