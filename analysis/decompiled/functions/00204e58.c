/* Ghidra pseudocode. PS2 address: 00204e58. Not validated source. */

undefined4 FUN_00204e58(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  do {
    if (**(char **)((int)param_1 + 8) == '\0') {
      return 0;
    }
    lVar2 = FUN_00204d00(param_1);
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = FUN_0025c288(param_2,lVar2);
    if (lVar1 != 0) {
      return 1;
    }
    lVar2 = FUN_0025c288(lVar2,param_2);
  } while (lVar2 == 0);
  return 1;
}

