/* Ghidra pseudocode. PS2 address: 00204c18. Not validated source. */

void FUN_00204c18(undefined8 param_1)

{
  char cVar1;
  
  FUN_00204b20();
  cVar1 = **(char **)((int)param_1 + 8);
  while (cVar1 == '[') {
    FUN_00204d00(param_1);
    FUN_00204b20(param_1);
    cVar1 = **(char **)((int)param_1 + 8);
  }
  FUN_002051a8(param_1);
  return;
}

