/* Ghidra pseudocode. PS2 address: 001cf850. Not validated source. */

undefined4 FUN_001cf850(void)

{
  uint uVar1;
  undefined1 auStack_110 [256];
  
  FUN_001cf5b0(auStack_110);
  uVar1 = REG_VIF1_STAT;
  if ((uVar1 & 0x400) != 0) {
    REG_VIF1_FBRST = 8;
  }
  DAT_0029662c = DAT_0029662c + 1;
  FUN_001cf740(auStack_110);
  SYNC(0);
  EI();
  return 1;
}

