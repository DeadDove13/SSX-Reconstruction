/* Ghidra pseudocode. PS2 address: 0023ed48. Not validated source. */

void FUN_0023ed48(void)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  uVar1 = GetThreadId();
  ReferThreadStatus(uVar1,auStack_50);
  while (DAT_002c5a44 != 0) {
    FUN_0023a998(DAT_002c5a44);
    DAT_002c5a44 = 0;
    FUN_0023e790(0x23eed8);
  }
  DAT_002c5a44 = uStack_48;
  FUN_0023e6e0(0x23eed8,0,0);
  ExitDeleteThread();
  return;
}

