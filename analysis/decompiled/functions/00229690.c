/* Ghidra pseudocode. PS2 address: 00229690. Not validated source. */

undefined4 FUN_00229690(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  
  iVar2 = DAT_0029a8f0;
  cVar1 = *(char *)(DAT_0029a8f0 + param_1 * 0x6c + 0x1a);
  if (cVar1 == '\0') {
    if (-1 < *param_2) {
      return 0;
    }
    *param_2 = param_1;
  }
  else {
    iVar3 = *param_2 + 1;
    *param_2 = iVar3;
    lVar6 = (long)DAT_0029a890;
    if (lVar6 <= iVar3) {
      return 0;
    }
    while( true ) {
      iVar3 = *param_2;
      piVar5 = (int *)(iVar3 * 0x6c + iVar2);
      lVar4 = (long)(iVar3 + 1);
      if (((*(char *)((int)piVar5 + 0x1a) == cVar1) &&
          (lVar4 = (long)(iVar3 + 1), *(char *)((int)piVar5 + 0xb) == '\x01')) &&
         (lVar4 = (long)(iVar3 + 1), -1 < *piVar5)) break;
      *param_2 = (int)lVar4;
      if (lVar6 <= lVar4) {
        return 0;
      }
    }
  }
  return 1;
}

