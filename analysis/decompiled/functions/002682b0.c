/* Ghidra pseudocode. PS2 address: 002682b0. Not validated source. */

undefined4 FUN_002682b0(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  uVar2 = 0;
  if (-1 < DAT_002a6ab0) {
    DAT_002d7b44 = *param_1;
    iVar4 = 0;
    if (DAT_002d7b44 != '\0') {
      for (iVar4 = 1;
          (iVar4 < 0xfc && (cVar1 = param_1[iVar4], (&DAT_002d7b44)[iVar4] = cVar1, cVar1 != '\0'));
          iVar4 = iVar4 + 1) {
      }
    }
    if (iVar4 == 0xfc) {
      iVar4 = 0xfb;
    }
    DAT_002d7c3f = 0;
    DAT_002d7b40 = param_2;
    lVar3 = FUN_00267268(0x2d7a40,3,0,0x2d7b40,iVar4 + 5,0x2d7a80,4,0);
    uVar2 = DAT_002d7a80;
    if (lVar3 < 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

