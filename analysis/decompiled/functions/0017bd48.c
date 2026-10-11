/* Ghidra pseudocode. PS2 address: 0017bd48. Not validated source. */

void FUN_0017bd48(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar5 + 0x334) + 0xb3c);
  iVar2 = *(int *)(iVar1 + *(char *)(iVar5 + 0x298) * 4 + 0x364);
  if (*(int *)(iVar2 + 0x6c4c) == 0) {
    if ((-1 < *(int *)(iVar5 + 0x2a0)) && (lVar4 = FUN_001e95f8(iVar1 + 0x40), lVar4 != 0)) {
      FUN_001e9ae8(*(int *)(*(int *)(iVar5 + 0x334) + 0xb3c) + 0x40,*(undefined4 *)(iVar5 + 0x2a0));
      FUN_001e9538(*(int *)(*(int *)(iVar5 + 0x334) + 0xb3c) + 0x40,*(undefined4 *)(iVar5 + 0x2a0));
      *(undefined4 *)(iVar5 + 0x2a0) = 0xffffffff;
      FUN_0017ada8(param_1);
      uVar3 = DAT_002859d4;
      *(undefined4 *)(iVar5 + 0x2fc) = *(undefined4 *)(iVar5 + 0x2e0);
      *(undefined4 *)(iVar5 + 0x2e8) = uVar3;
      *(undefined4 *)(iVar5 + 0x2ec) = *(undefined4 *)(iVar5 + 0x2c4);
      *(undefined4 *)(iVar5 + 0x2f8) = DAT_002859d4;
    }
  }
  else if (*(int *)(iVar2 + 0x6cf4) != 0) {
    FUN_0014c020(0x3f800000);
    FUN_0014c0f0(*(undefined4 *)(iVar2 + 0x6cf4));
    return;
  }
  return;
}

