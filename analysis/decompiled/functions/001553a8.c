/* Ghidra pseudocode. PS2 address: 001553a8. Not validated source. */

char * FUN_001553a8(int param_1,char param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  FUN_0025bcf8(param_3);
  iVar3 = FUN_00156b78(param_1,param_2);
  iVar4 = param_1 + 0x1514;
  cVar1 = *param_3;
  pcVar7 = *(char **)(iVar4 + iVar3 * 0x50);
  pcVar5 = param_3;
  while( true ) {
    if (cVar1 == '\0') {
      return pcVar7;
    }
    if (cVar1 != ' ') break;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar5;
  }
  if (*pcVar5 == '\0') {
    return pcVar7;
  }
  cVar2 = *param_3;
  cVar1 = *param_3;
  while (cVar1 != '\0') {
    if ((long)*pcVar7 != (long)(int)cVar2) {
      *(undefined4 *)(param_1 + 0x1664) = 1;
    }
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *param_3;
    cVar1 = *param_3;
  }
  *pcVar7 = '\0';
  iVar6 = 0;
  iVar8 = param_1;
  do {
    if (*(int *)(param_1 + 0x1278) <= iVar6) {
LAB_001554d8:
      return *(char **)(iVar3 * 0x50 + iVar4);
    }
    if (*(char *)(iVar8 + 0x12d0) == param_2) {
      FUN_0025bbe4(iVar8 + 0x1280,*(undefined4 *)(iVar3 * 0x50 + iVar4));
      goto LAB_001554d8;
    }
    iVar8 = iVar8 + 0x68;
    iVar6 = iVar6 + 1;
  } while( true );
}

