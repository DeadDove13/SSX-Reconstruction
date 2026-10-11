/* Ghidra pseudocode. PS2 address: 0024aab8. Not validated source. */

ulong FUN_0024aab8(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  
  bVar1 = false;
  iVar6 = (int)param_1;
  iVar2 = *(int *)(iVar6 + 0x40);
  if ((param_3 == -1) || (param_2 < param_3)) {
    if (*(int *)(iVar2 + 8) == 0) {
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar2 + 8) = 1;
    }
    lVar4 = FUN_0024fbc0(0);
    uVar5 = 0;
    if (lVar4 != 0) {
      lVar4 = FUN_0024fa20(DAT_002a53c4,*(undefined4 *)(iVar2 + 4));
      uVar5 = (ulong)(lVar4 != 0);
    }
  }
  else {
    bVar1 = true;
    uVar5 = FUN_0024fbc0(0);
    FUN_0024a7b8(param_1);
  }
  FUN_0024fb08(DAT_002a53c4,*(undefined4 *)(iVar2 + 4));
  iVar3 = DAT_002a53c4;
  if ((DAT_002a546c != 3) && (!bVar1)) {
    DAT_002a53dc = (uint)(DAT_002a53dc == 0);
  }
  bVar1 = DAT_002a53dc == 0;
  *(int *)(iVar6 + 8) = DAT_002a53c4 - *(int *)(iVar2 + 0xac);
  if (bVar1) {
    DAT_002a53c4 = iVar3 + 1;
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  return uVar5;
}

