/* Ghidra pseudocode. PS2 address: 002067f0. Not validated source. */

undefined8 FUN_002067f0(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  
  FUN_0020a060();
  iVar5 = (int)param_1;
  iVar4 = iVar5 + 0x35350;
  *(undefined **)(iVar5 + 0x32000) = &DAT_002bd140;
  FUN_00204960(iVar4,0x2bd0e8,0x10);
  *(undefined4 *)(iVar5 + 0x35f88) = 0;
  *(undefined4 *)(iVar5 + 0x35f7c) = 0;
  *(undefined4 *)(iVar5 + 0x35f80) = 0;
  *(undefined4 *)(iVar5 + 0x35f84) = 0;
  *(undefined4 *)(iVar5 + 0x35358) = *(undefined4 *)(iVar5 + 0x35354);
  DAT_002c5bc8 = iVar5;
  lVar2 = FUN_00204de8(iVar4,0x2c5750);
  if (lVar2 != 0) {
    while (lVar2 = FUN_002051a8(iVar4), lVar2 == 0) {
      FUN_00204f90(iVar4);
      FUN_00205210(iVar4,0x2bd100,iVar5 + 0x35b5c);
    }
  }
  *(undefined4 *)(iVar5 + 0x35f7c) = 0;
  *(undefined4 *)(iVar5 + 0x35358) = *(undefined4 *)(iVar5 + 0x35354);
  while ((*(int *)(iVar5 + 0x35f7c) < 0x20 && (lVar2 = FUN_00204d00(iVar5 + 0x35350), lVar2 != 0)))
  {
    lVar3 = FUN_0025b730(lVar2,0x2c5750);
    if (lVar3 != 0) {
      uVar1 = *(uint *)(iVar5 + 0x35f7c);
      *(uint *)(iVar5 + 0x35f84) = *(uint *)(iVar5 + 0x35f84) | 1 << (uVar1 & 0x1f);
      *(uint *)(iVar5 + 0x35f7c) = uVar1 + 1;
      FUN_0025bbe4(iVar5 + uVar1 * 0x20 + 0x35b7c,lVar2);
    }
  }
  return param_1;
}

