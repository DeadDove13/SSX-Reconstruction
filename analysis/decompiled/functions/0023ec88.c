/* Ghidra pseudocode. PS2 address: 0023ec88. Not validated source. */

void FUN_0023ec88(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  
  if (param_1 == -1) {
    uVar1 = GetThreadId();
  }
  else {
    uVar1 = *(undefined4 *)((int)param_1 + 0x10);
  }
  ReferThreadStatus(uVar1,auStack_50);
  TerminateThread(uVar1);
  FUN_0023a998(uStack_48);
  return;
}

