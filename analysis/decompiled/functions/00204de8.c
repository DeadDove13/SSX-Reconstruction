/* Ghidra pseudocode. PS2 address: 00204de8. Not validated source. */

undefined4 FUN_00204de8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = *(char **)((int)param_1 + 8);
  while( true ) {
    if (*pcVar1 == '\0') {
      return 0;
    }
    lVar2 = FUN_00204d00(param_1);
    if (lVar2 == 0) break;
    lVar2 = FUN_0025b730(lVar2,param_2);
    if (lVar2 == 0) {
      return 1;
    }
    pcVar1 = *(char **)((int)param_1 + 8);
  }
  return 0;
}

