/* Ghidra pseudocode. PS2 address: 0024ac10. Not validated source. */

ulong FUN_0024ac10(undefined8 param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  bVar2 = false;
  DAT_002a53dc = 0;
  iVar6 = (int)param_1;
  puVar1 = *(undefined4 **)(iVar6 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    bVar2 = true;
    iVar3 = puVar1[2];
  }
  else {
    iVar3 = puVar1[2];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(iVar6 + 8) = 0;
    puVar1[2] = 1;
  }
  lVar4 = FUN_0024fbc0(0);
  if ((lVar4 != 0) && (bVar2)) {
    FUN_0024fa20(DAT_002a53c4,puVar1[1]);
  }
  DAT_002a53dc = 1;
  lVar4 = FUN_0024f118();
  if (lVar4 == 0) {
    FUN_0024ad88(param_1);
    *puVar1 = 1;
    uVar5 = 0;
  }
  else {
    iVar3 = 2;
    if (puVar1[0x35] != 1) {
      iVar3 = 1;
    }
    if (DAT_002a546c == iVar3) {
      lVar4 = FUN_0024fbc0(1);
      uVar5 = 0;
      if ((lVar4 != 0) && (bVar2)) {
        lVar4 = FUN_0024fa20(DAT_002a53c4,puVar1[1]);
        uVar5 = (ulong)(lVar4 != 0);
      }
      FUN_0024fb08(DAT_002a53c4,puVar1[1]);
      DAT_002a53dc = 0;
      *(int *)(iVar6 + 8) = DAT_002a53c4 - puVar1[0x2b];
      DAT_002a53c4 = DAT_002a53c4 + 1;
      puVar1[1] = puVar1[1] + 1;
      if (!bVar2) {
        FUN_0024a7b8(param_1);
      }
    }
    else {
      uVar5 = 0xffffffffffffffff;
    }
  }
  return uVar5;
}

