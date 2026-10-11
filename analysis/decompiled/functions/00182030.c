/* Ghidra pseudocode. PS2 address: 00182030. Not validated source. */

bool FUN_00182030(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if ((int)param_1[1] < 1) {
    return false;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == '\0') {
    iVar2 = param_1[1];
  }
  else {
    iVar2 = param_1[1];
    pcVar3 = (char *)*param_1;
    if (cVar1 < '!') {
      while( true ) {
        *param_1 = pcVar3 + 1;
        param_1[1] = iVar2 + -1;
        if (pcVar3[1] == '\0') break;
        if ((' ' < pcVar3[1]) || (iVar2 + -1 < 1)) {
          iVar2 = param_1[1];
          goto LAB_00182094;
        }
        iVar2 = param_1[1];
        pcVar3 = pcVar3 + 1;
      }
      iVar2 = param_1[1];
    }
  }
LAB_00182094:
  return 0 < iVar2;
}

