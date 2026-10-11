/* Ghidra pseudocode. PS2 address: 00207618. Not validated source. */

undefined4 FUN_00207618(undefined8 param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  
  iVar7 = (int)param_1;
  bVar2 = false;
  if (*(int *)(*(int *)(*(int *)(iVar7 + 0x35f88) + 8) * 0x1c + *(int *)(iVar7 + 0x351c4)) == 1) {
    uVar4 = FUN_001f4c90(param_1);
    lVar5 = FUN_00225a70(uVar4);
    bVar2 = lVar5 == 1;
  }
  uVar3 = 0;
  if (!bVar2) {
    iVar1 = *(int *)(iVar7 + 0x32000);
    *(undefined4 *)(*(int *)(iVar7 + 0x35f88) + 0xfc) = 0;
    uVar6 = (**(code **)(iVar1 + 0x1c))(iVar7 + *(short *)(iVar1 + 0x18));
    uVar3 = 1;
    if ((uVar6 & 3) == 0) {
      FUN_002072d8(param_1);
      uVar3 = 1;
    }
  }
  return uVar3;
}

