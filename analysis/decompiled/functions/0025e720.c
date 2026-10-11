/* Ghidra pseudocode. PS2 address: 0025e720. Not validated source. */

char * FUN_0025e720(int param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  lVar6 = (long)*param_2;
  bVar1 = lVar6 == 0x5e;
  pcVar5 = param_2 + 1;
  if (bVar1) {
    lVar6 = (long)*pcVar5;
    pcVar5 = param_2 + 2;
  }
  iVar7 = 0xff;
  iVar3 = param_1 + 0xff;
  do {
    *(bool *)iVar3 = bVar1;
    iVar7 = iVar7 + -1;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar7);
  if (lVar6 == 0) {
    return pcVar5 + -1;
  }
LAB_0025e780:
  pcVar4 = (char *)(param_1 + (int)lVar6);
  do {
    *pcVar4 = '\x01' - bVar1;
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    while (lVar8 = (long)cVar2, lVar8 == 0x2d) {
      lVar8 = (long)*pcVar5;
      if ((lVar8 == 0x5d) || (lVar8 < lVar6)) {
        lVar6 = 0x2d;
        goto LAB_0025e780;
      }
      pcVar4 = pcVar5 + 1;
      pcVar5 = pcVar5 + 2;
      do {
        iVar3 = (int)lVar6 + 1;
        lVar6 = (long)iVar3;
        *(char *)(param_1 + iVar3) = '\x01' - bVar1;
      } while (lVar6 < lVar8);
      cVar2 = *pcVar4;
    }
    lVar6 = lVar8;
    if (lVar8 < 0x2e) {
      if (lVar8 == 0) {
        return pcVar5 + -1;
      }
      pcVar4 = (char *)(param_1 + cVar2);
    }
    else {
      if (lVar8 == 0x5d) {
        return pcVar5;
      }
      pcVar4 = (char *)(param_1 + cVar2);
    }
  } while( true );
}

