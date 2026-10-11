/* Ghidra pseudocode. PS2 address: 00205108. Not validated source. */

char FUN_00205108(undefined8 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_00204b20();
  if ((**(char **)((int)param_1 + 8) != '\0') && (pcVar2 = param_2, *param_2 != '\0')) {
    do {
      cVar1 = FUN_00204b08(param_1);
      if (cVar1 != *pcVar2) {
        return '\x01';
      }
      iVar3 = iVar3 + 1;
    } while ((**(char **)((int)param_1 + 8) != '\0') && (pcVar2 = param_2 + iVar3, *pcVar2 != '\0'))
    ;
    param_2 = param_2 + iVar3;
  }
  return *param_2;
}

