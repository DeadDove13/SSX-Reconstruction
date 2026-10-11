/* Ghidra pseudocode. PS2 address: 00267a70. Not validated source. */

int FUN_00267a70(char *param_1,uint param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int *piVar5;
  
  if (DAT_002a6aac == 0) {
    FUN_00267978();
  }
  lVar2 = FUN_002678e0();
  if (lVar2 == 0) {
    iVar4 = -0x13;
  }
  else {
    DAT_002d7404._0_1_ = *param_1;
    iVar4 = 0;
    if ((char)DAT_002d7404 != '\0') {
      for (iVar4 = 1;
          (iVar4 < 0x400 &&
          (cVar1 = param_1[iVar4], *(char *)((int)&DAT_002d7404 + iVar4) = cVar1, cVar1 != '\0'));
          iVar4 = iVar4 + 1) {
      }
    }
    if (iVar4 == 0x400) {
      DAT_002d7803 = 0;
      iVar4 = 0x3ff;
    }
    DAT_002d7400 = param_2 & 0xfffffff;
    lVar3 = FUN_00267268(0x2d7a10,0,0,0x2d7400,iVar4 + 5,0x2d7840,4,0);
    iVar4 = DAT_202d7840;
    if (lVar3 < 0) {
      iVar4 = -1;
    }
    else {
      piVar5 = (int *)lVar2;
      if (DAT_202d7840 < 0) {
        piVar5[1] = 0;
      }
      else {
        *piVar5 = DAT_202d7840;
        piVar5[1] = piVar5[1] | param_2;
        iVar4 = (int)(piVar5 + -0xb5e44) >> 4;
      }
    }
  }
  return iVar4;
}

