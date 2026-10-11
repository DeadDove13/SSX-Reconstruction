/* Ghidra pseudocode. PS2 address: 00265378. Not validated source. */

long FUN_00265378(long param_1)

{
  long in_v0;
  long lVar1;
  undefined1 auStack_60 [24];
  undefined4 uStack_48;
  
  syscall(0xffffffffffffffd1);
  if (in_v0 == param_1) {
    iReferThreadStatus(param_1,auStack_60);
    _iSuspendThread(param_1);
    _iWakeupThread(param_1);
    lVar1 = iResumeThread(param_1);
    syscall(0xffffffffffffffd1);
    while (lVar1 != param_1) {
      lVar1 = RotateThreadReadyQueue(uStack_48);
      syscall(0xffffffffffffffd1);
    }
  }
  else {
    param_1 = _iWakeupThread(param_1);
  }
  return param_1;
}

