/* Ghidra pseudocode. PS2 address: 0023ea98. Not validated source. */

void FUN_0023ea98(void)

{
  undefined8 uVar1;
  
  uVar1 = GetThreadId();
  DAT_002c5bf0 = (undefined4)uVar1;
  ChangeThreadPriority(uVar1,100);
  DAT_002c5a40 = FUN_0023ee10();
  return;
}

