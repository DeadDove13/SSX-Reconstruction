/* Ghidra pseudocode. PS2 address: 001820a0. Not validated source. */

undefined4 FUN_001820a0(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (0 < (int)((undefined4 *)param_1)[1]) {
    lVar2 = FUN_00182030(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_0025bf10(*(undefined4 *)param_1,0x2c4d78,2);
      if (lVar2 != 0) {
        return 0;
      }
      FUN_00182100(param_1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

