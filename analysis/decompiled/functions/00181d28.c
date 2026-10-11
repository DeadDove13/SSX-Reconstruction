/* Ghidra pseudocode. PS2 address: 00181d28. Not validated source. */

uint FUN_00181d28(undefined8 param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (*param_2 == '\0') {
    return 0;
  }
  do {
    iVar6 = 0;
    ppuVar5 = &PTR_DAT_00285108;
    do {
      uVar3 = FUN_0025bcf8(*ppuVar5);
      lVar4 = FUN_0025bf10(param_2,*ppuVar5,uVar3);
      if (lVar4 == 0) {
        uVar7 = uVar7 | (uint)ppuVar5[1];
        iVar2 = FUN_0025bcf8(*ppuVar5);
        param_2 = param_2 + iVar2;
        break;
      }
      iVar6 = iVar6 + 1;
      ppuVar5 = ppuVar5 + 2;
    } while (iVar6 < 0x31);
    if (0x30 < iVar6) {
      return uVar7;
    }
    cVar1 = *param_2;
    while( true ) {
      if (cVar1 == '\0') {
        return uVar7;
      }
      if (((cVar1 != ' ') && (cVar1 != '|')) && (cVar1 != '\t')) break;
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    }
    if (*param_2 == '\0') {
      return uVar7;
    }
  } while( true );
}

