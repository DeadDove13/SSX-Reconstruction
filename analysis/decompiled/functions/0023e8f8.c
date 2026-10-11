/* Ghidra pseudocode. PS2 address: 0023e8f8. Not validated source. */

void FUN_0023e8f8(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_002a36c0;
  if (param_1 < 1) {
    RotateThreadReadyQueue(0x80);
    return;
  }
  FUN_0023ee58(DAT_002c5a40);
  iVar1 = 0;
  do {
    if (0xff < iVar1) {
LAB_0023e964:
      FUN_0023ef10(0x23e860);
      FUN_0023ea60(DAT_002c5a40);
      SleepThread();
      return;
    }
    iVar1 = iVar1 + 1;
    if (*piVar2 == 0) {
      iVar1 = FUN_0023efc0();
      *piVar2 = iVar1 + (int)param_1;
      iVar1 = GetThreadId();
      piVar2[1] = iVar1;
      goto LAB_0023e964;
    }
    piVar2 = piVar2 + 2;
  } while( true );
}

