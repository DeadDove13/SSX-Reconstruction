/* Ghidra pseudocode. PS2 address: 002143d0. Not validated source. */

undefined4 FUN_002143d0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_00214398(param_1,2);
  if ((((lVar1 != 0x30fb) && (lVar1 = FUN_00214398(param_1,2), lVar1 != 0x31fb)) &&
      (lVar1 = FUN_00214398(param_1,2), lVar1 != 0x32fb)) &&
     (((lVar1 = FUN_00214398(param_1,2), lVar1 != 0x33fb &&
       (lVar1 = FUN_00214398(param_1,2), lVar1 != 0x34fb)) &&
      (lVar1 = FUN_00214398(param_1,2), lVar1 != 0x35fb)))) {
    return 0;
  }
  return 100;
}

