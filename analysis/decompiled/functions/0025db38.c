/* Ghidra pseudocode. PS2 address: 0025db38. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0025db80) */
/* WARNING: Removing unreachable block (ram,0x0025dba4) */

int FUN_0025db38(undefined1 *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_e [14];
  
  *param_1 = param_3;
  if (param_2 < 0) {
    param_2 = -param_2;
    param_1[1] = 0x2d;
  }
  else {
    param_1[1] = 0x2b;
  }
  pcVar6 = param_1 + 2;
  pcVar3 = acStack_e + 2;
  pcVar4 = pcVar3;
  if (param_2 < 10) {
    *pcVar6 = '0';
    param_1[3] = (char)param_2 + '0';
    pcVar6 = param_1 + 4;
  }
  else {
    do {
      pcVar5 = pcVar4;
      iVar1 = param_2 / 10;
      pcVar4 = pcVar5 + -1;
      *pcVar4 = (char)(param_2 % 10) + '0';
      param_2 = iVar1;
    } while (9 < iVar1);
    pcVar5 = pcVar5 + -2;
    *pcVar5 = (char)iVar1 + '0';
    if (pcVar5 < pcVar3) {
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar2;
        pcVar6 = pcVar6 + 1;
      } while (pcVar5 < pcVar3);
      return (int)pcVar6 - (int)param_1;
    }
  }
  return (int)pcVar6 - (int)param_1;
}

