/* Ghidra pseudocode. PS2 address: 0024fa20. Not validated source. */

long FUN_0024fa20(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if ((DAT_002a546c == 3) && (DAT_002a53dc != 0)) {
    FUN_0024af98(0x2bf548);
    DAT_002a53dc = 0;
  }
  iVar1 = DAT_002a5504;
  iVar3 = DAT_002a550c;
  if (DAT_002a546c != 2) {
    if (DAT_002a546c < 3) {
      iVar3 = DAT_002a5508;
      if (DAT_002a546c == 1) goto LAB_0024fad0;
    }
    else {
      iVar3 = iVar1;
      if (DAT_002a546c == 3) goto LAB_0024fad0;
    }
    FUN_0024af98(0x2bf568);
    iVar3 = iVar1;
  }
LAB_0024fad0:
  lVar2 = FUN_0024dc00(param_1);
  if (lVar2 != 0) {
    *(undefined4 *)(iVar3 + 0x28) = 1;
  }
  return lVar2;
}

