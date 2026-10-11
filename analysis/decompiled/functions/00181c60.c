/* Ghidra pseudocode. PS2 address: 00181c60. Not validated source. */

undefined4 FUN_00181c60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  do {
    lVar1 = FUN_00182030(param_1);
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_0025bcf8(param_2);
    lVar1 = FUN_0025bf10(*(undefined4 *)param_1,param_2,uVar2);
    if (lVar1 == 0) {
      lVar1 = FUN_00182100(param_1);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_00182030(param_1);
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = FUN_0025bf10(*(undefined4 *)param_1,0x2c4d08,1);
      if (lVar1 == 0) {
        lVar1 = FUN_00182100(param_1);
        if (lVar1 == 0) {
          return 0;
        }
        return 1;
      }
    }
    lVar1 = FUN_00182100(param_1);
    if (lVar1 == 0) {
      return 0;
    }
  } while( true );
}

