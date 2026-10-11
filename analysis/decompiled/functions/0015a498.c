/* Ghidra pseudocode. PS2 address: 0015a498. Not validated source. */

undefined4 FUN_0015a498(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int aiStack_80 [4];
  
  uVar5 = 0;
  iVar4 = (int)param_1;
  **(undefined4 **)(iVar4 + 8) = 6;
  iVar1 = FUN_0015a570(param_1,*(undefined4 *)(iVar4 + 0x14));
  FUN_00159298(*(undefined4 *)(*(int *)(iVar4 + 8) + 0x274),aiStack_80);
  puVar3 = &DAT_0027ec00 + iVar1 * 0xc;
  *(int *)(*(int *)(iVar4 + 8) + 0x284) = *(int *)(iVar4 + 0x14) + -0x18 + aiStack_80[0] * 0x10000;
  iVar1 = 0;
  do {
    iVar4 = iVar1 + 1;
    lVar2 = FUN_0015a390(param_1,iVar1,*puVar3);
    if (lVar2 != 0) {
      uVar5 = 1;
    }
    puVar3 = puVar3 + 2;
    iVar1 = iVar4;
  } while (iVar4 < 6);
  return uVar5;
}

