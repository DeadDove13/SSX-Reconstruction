/* Ghidra pseudocode. PS2 address: 00204c88. Not validated source. */

undefined4 FUN_00204c88(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)((int)param_1 + 8);
  cVar1 = *pcVar2;
  while( true ) {
    if (cVar1 == '\0') {
      return 1;
    }
    if (*pcVar2 == '\r') break;
    if (*pcVar2 == '\n') {
      return 0;
    }
    FUN_00204b08(param_1);
    pcVar2 = *(char **)((int)param_1 + 8);
    cVar1 = *pcVar2;
  }
  return 0;
}

