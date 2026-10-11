/* Ghidra pseudocode. PS2 address: 0020e450. Not validated source. */

char * FUN_0020e450(char *param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar8 = param_2 + param_3;
  pcVar6 = param_1;
  iVar9 = 2;
  if (1 < param_4) {
    iVar9 = param_4;
  }
  while (param_2 < pcVar8) {
    iVar7 = 0;
    cVar1 = *param_2;
    pcVar4 = param_2;
    while( true ) {
      iVar5 = 1;
      pcVar3 = pcVar4 + 1;
      if ((cVar1 == pcVar4[1]) && (pcVar3 < pcVar8)) {
        pcVar3 = pcVar4 + 2;
        while (((iVar5 = iVar5 + 1, cVar1 == *pcVar3 && (pcVar3 < pcVar8)) && (iVar5 < 0x7f))) {
          pcVar3 = pcVar3 + 1;
        }
      }
      bVar2 = iVar5 < iVar9;
      if ((pcVar3 == pcVar8) && (bVar2 = iVar5 < iVar9, 1 < iVar5)) {
        iVar5 = iVar5 + -1;
        pcVar3 = pcVar8 + -1;
        bVar2 = iVar5 < iVar9;
      }
      if (bVar2) {
        iVar7 = iVar7 + iVar5;
        iVar5 = 0;
        pcVar4 = pcVar3;
      }
      if (((iVar5 != 0) || (0x7e < iVar7)) || (pcVar8 <= pcVar4)) break;
      cVar1 = *pcVar4;
    }
    if (0x7f < iVar7) {
      iVar7 = 0x7f;
    }
    if (iVar7 != 0) {
      FUN_0023bbd0(pcVar6,-iVar7,1);
      while( true ) {
        iVar7 = iVar7 + -1;
        pcVar6 = pcVar6 + 1;
        if (iVar7 == -1) break;
        cVar1 = *param_2;
        param_2 = param_2 + 1;
        *pcVar6 = cVar1;
      }
    }
    if (iVar5 != 0) {
      FUN_0023bbd0(pcVar6,iVar5 + -1,1);
      pcVar6[1] = *param_2;
      param_2 = param_2 + iVar5;
      pcVar6 = pcVar6 + 2;
    }
  }
  FUN_0023bbd0(pcVar6,0,1);
  return pcVar6 + (1 - (int)param_1);
}

