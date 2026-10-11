/* Ghidra pseudocode. PS2 address: 00204b20. Not validated source. */

bool FUN_00204b20(undefined8 param_1)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = (int)param_1;
  if (**(char **)(iVar4 + 8) != '\0') {
    cVar1 = **(char **)(iVar4 + 8);
    do {
      if ((cVar1 == '#') || (cVar1 == ';')) {
        lVar3 = FUN_00204c88(param_1);
        if (lVar3 != 0) {
          return true;
        }
        pcVar2 = *(char **)(iVar4 + 8);
      }
      else {
        pcVar2 = *(char **)(iVar4 + 8);
      }
      cVar1 = *pcVar2;
      if ((((cVar1 != ' ') && (cVar1 != '\t')) && (cVar1 != '\n')) && (cVar1 != '\r')) {
        return cVar1 == '[';
      }
      FUN_00204b08(param_1);
      cVar1 = **(char **)(iVar4 + 8);
    } while (cVar1 != '\0');
  }
  return true;
}

