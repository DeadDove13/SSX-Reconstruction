/* Ghidra pseudocode. PS2 address: 00265640. Not validated source. */

int FUN_00265640(char *param_1,int param_2)

{
  long lVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = -1;
  if (DAT_002d561c == 0) {
    do {
      DI();
      SYNC(0x10);
    } while ((Status & 0x10000) != 0);
    DAT_002d561c = 1;
    pcVar3 = &DAT_202d564c;
    DAT_002d5620 = &DAT_202d5640;
    iVar5 = 0;
    do {
      param_2 = param_2 + -1;
      if (param_2 == -1) break;
      if (*param_1 == '\n') {
        *pcVar3 = '\r';
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 1;
        if (0xff < iVar4) break;
        cVar2 = *param_1;
      }
      else {
        cVar2 = *param_1;
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 1;
      iVar5 = iVar5 + 1;
      *pcVar3 = cVar2;
      pcVar3 = pcVar3 + 1;
    } while (iVar4 < 0x100);
    DAT_002d5614 = iVar4 + 0xc;
    DAT_202d5640 = (undefined2)DAT_002d5614;
    lVar1 = FUN_00268c60(DAT_002d5610,DAT_202d5647);
    if (lVar1 < 0) {
      DAT_002d561c = 0;
      EI();
      iVar5 = -1;
    }
    else {
      while (DAT_002d561c != 0) {
        FUN_00268c90(DAT_002d5610);
      }
      EI();
    }
  }
  return iVar5;
}

