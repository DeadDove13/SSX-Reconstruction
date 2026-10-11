/* Ghidra pseudocode. PS2 address: 001f4f18. Not validated source. */

undefined4 FUN_001f4f18(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((float)((int *)param_1)[0x23] == 0.0) {
      lVar2 = FUN_001f4e70(param_1);
      uVar1 = 0;
      if (lVar2 != 0) {
        FUN_001f4ee8(param_1);
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

