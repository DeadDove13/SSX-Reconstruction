/* Ghidra pseudocode. PS2 address: 0019f2e8. Not validated source. */

bool FUN_0019f2e8(int param_1)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x58) + 0xc0);
  if (uVar1 == 0xffff) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)((uint)uVar1 * 8 + DAT_00299cd4);
  }
  if (*(int *)(iVar3 + 0x24) == 0) {
    bVar2 = false;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58);
    uStack_30 = *(undefined4 *)(iVar3 + 0xd0);
    uStack_2c = *(undefined4 *)(iVar3 + 0xd4);
    uStack_28 = *(undefined4 *)(iVar3 + 0xd8);
    uStack_24 = 0x3f800000;
    uStack_20 = *(undefined4 *)(iVar3 + 0xdc);
    uStack_1c = *(undefined4 *)(iVar3 + 0xe0);
    uStack_18 = *(undefined4 *)(iVar3 + 0xe4);
    uStack_14 = 0x3f800000;
    lVar4 = FUN_001be110(0x295e90,&uStack_30,&uStack_20);
    bVar2 = lVar4 != 1;
  }
  return bVar2;
}

