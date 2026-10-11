/* Ghidra pseudocode. PS2 address: 002678a0. Not validated source. */

void FUN_002678a0(undefined8 param_1)

{
  long lVar1;
  
  do {
    while (lVar1 = FUN_00267670(param_1), lVar1 == 0) {
      SleepThread();
    }
    FUN_002676c0(lVar1);
  } while( true );
}

