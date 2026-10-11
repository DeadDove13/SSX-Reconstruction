/* Ghidra pseudocode. PS2 address: 0020e608. Not validated source. */

int FUN_0020e608(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar1 = *param_2;
  pcVar5 = param_1;
  do {
    pcVar4 = param_2 + 1;
    if (cVar1 < '\0') {
      iVar3 = -(int)cVar1;
      do {
        cVar2 = *pcVar4;
        iVar3 = iVar3 + -1;
        pcVar4 = pcVar4 + 1;
        *pcVar5 = cVar2;
        pcVar5 = pcVar5 + 1;
      } while (iVar3 != 0);
    }
    else {
      iVar3 = cVar1 + 1;
      if (cVar1 == '\0') {
LAB_0020e688:
        return (int)pcVar5 - (int)param_1;
      }
      do {
        iVar3 = iVar3 + -1;
        *pcVar5 = *pcVar4;
        pcVar5 = pcVar5 + 1;
      } while (iVar3 != 0);
      pcVar4 = param_2 + 2;
    }
    if (cVar1 == '\0') goto LAB_0020e688;
    cVar1 = *pcVar4;
    param_2 = pcVar4;
  } while( true );
}

