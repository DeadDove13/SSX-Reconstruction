/* Ghidra pseudocode. PS2 address: 00264a88. Not validated source. */

undefined8 FUN_00264a88(void)

{
  uint uVar1;
  undefined1 auStack_20 [8];
  undefined8 uStack_18;
  
  SetVSyncFlag(auStack_20,(uint)auStack_20 | 8);
  REG_INTC_STAT = 4;
  do {
    uVar1 = REG_INTC_STAT;
  } while ((uVar1 & 4) == 0);
  REG_INTC_STAT = 4;
  return uStack_18;
}

