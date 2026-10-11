/* Ghidra pseudocode. PS2 address: 00246bf0. Not validated source. */

undefined4 FUN_00246bf0(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_3 & 0x3f) == 0) {
    iVar4 = 1;
    uVar3 = param_3;
    do {
      *(undefined4 *)(uVar3 + 0x58) = 0;
      *(undefined1 *)(uVar3 + 0x70) = 5;
      *(undefined1 *)(uVar3 + 0x71) = 2;
      *(undefined1 *)(uVar3 + 0x67) = 0;
      iVar4 = iVar4 + -1;
      FUN_0025a60c(uVar3,0xff,0x20);
      *(undefined4 *)(uVar3 + 0x60) = 0;
      uVar3 = uVar3 + 0x80;
    } while (-1 < iVar4);
    DAT_002d1e80 = 1;
    DAT_002d1e84 = param_1;
    DAT_002d1e88 = param_2;
    DAT_002d1e90 = param_3;
    lVar2 = FUN_00267268(0x2d1800,1,0,0x2d1e80,0x80,0x2d1e80,0x80,0);
    uVar1 = DAT_002d1e8c;
    if (lVar2 < 0) {
      uVar1 = 0;
    }
    else {
      iVar4 = param_2 * 0x60 + param_1 * 0x300;
      *(undefined4 *)(&DAT_002d1860 + iVar4) = DAT_002d1e94;
      (&DAT_002d1850)[param_1 * 0xc0 + param_2 * 0x18] = 1;
      *(undefined4 *)(&DAT_002d1870 + iVar4) = 0;
      *(undefined4 *)(&DAT_002d1874 + iVar4) = 0;
      *(undefined4 *)(&DAT_002d1878 + iVar4) = 0;
      *(undefined4 *)(&DAT_002d187c + iVar4) = 0;
      *(uint *)(&DAT_002d185c + iVar4) = param_3;
    }
  }
  else {
    FUN_0025a720(0x2bece8,param_3);
    uVar1 = 0;
  }
  return uVar1;
}

