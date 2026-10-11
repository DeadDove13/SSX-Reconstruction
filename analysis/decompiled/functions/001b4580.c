/* Ghidra pseudocode. PS2 address: 001b4580. Not validated source. */

undefined4 FUN_001b4580(int param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  ulong in_hi;
  
  iVar4 = *(int *)(param_1 + 0x100);
  iVar7 = iVar4 * 0x10;
  piVar10 = &DAT_0027c330 + iVar4 * 4;
  uVar1 = *(uint *)(&DAT_0027c338 + iVar7);
  if (0 < iVar4) {
    uVar6 = FUN_001553a8(0x27a598,*(undefined4 *)(param_1 + 0x104),param_1 + 0x54);
    FUN_0025bbe4(param_1 + 0x54,uVar6);
    FUN_0025bbe4((&DAT_0027c32c)[*(int *)(param_1 + 0x100) * 4],uVar6);
  }
  if (*piVar10 < 0) {
    uVar5 = 0;
  }
  else {
    FUN_0023bbd0(0x28b270,0,0x4000);
    FUN_0023bbd0(0x28b180,0,0x20);
    bVar2 = *(int *)(param_1 + 0x104) != *piVar10;
    if (bVar2) {
      *(undefined4 *)(param_1 + 0x108) = 1;
    }
    iVar11 = param_1 + 0x54;
    *(int *)(param_1 + 0x104) = *piVar10;
    iVar8 = 0;
    iVar4 = 0;
    do {
      iVar9 = iVar4 + 1;
      iVar3 = (uVar1 | (uint)in_hi) + iVar4 * 0x18;
      FUN_0019a8f0(&DAT_0028b270 + iVar8,0x2c5190);
      if (iVar3 == *(int *)(&DAT_0027c33c + iVar7)) {
        (&DAT_0028b1c0)[iVar4] = 0;
        *(undefined4 *)(param_1 + 0x44) = (&DAT_0028b200)[iVar4];
        if (!bVar2) goto LAB_001b477c;
        FUN_0025bbe4(iVar11,iVar3);
        uVar6 = FUN_00234e80(DAT_002852fc,0x4d);
        FUN_0019a7c0(uVar6);
        FUN_0025bcf8(iVar11);
        FUN_0019a8a8(param_1 + 0x60,uVar6,iVar11);
        iVar4 = *(int *)(iVar3 + 0x10);
      }
      else {
        (&DAT_0028b1c0)[iVar4] = 0xffffffff;
        FUN_0019a830(iVar8 + 0x28ba70,iVar3);
LAB_001b477c:
        iVar4 = *(int *)(iVar3 + 0x10);
      }
      in_hi = (ulong)(uint)(iVar4 * 0x3c >> 0x1f);
      FUN_0019a830(&DAT_0028c270 + iVar8,*(undefined4 *)(iVar4 * 0x3c + 0x27c384));
      if (*(int *)(*(int *)(&DAT_0027c338 + iVar7) + 0x7c) == 0) {
        FUN_0019a8f0(iVar8 + 0x28ca70,0x2c5190,*(undefined4 *)(iVar3 + 0x14));
      }
      else {
        FUN_001a2650(*(undefined4 *)(iVar3 + 0x14),iVar8 + 0x28ca70);
      }
      iVar8 = iVar9 * 0x80;
      iVar4 = iVar9;
    } while (iVar9 < 5);
    if (*(int *)(*(int *)(&DAT_0027c338 + iVar7) + 0x7c) == 0) {
      uVar6 = FUN_00234e80(DAT_002852fc,0x15);
      FUN_0019a7f8(0x28f3f0,uVar6);
    }
    else {
      uVar6 = FUN_00234e80(DAT_002852fc,0x14);
      FUN_0019a7f8(0x28f3f0,uVar6);
    }
    *(undefined4 *)(param_1 + 0x48) = 2;
    *(undefined4 *)(param_1 + 0x4c) = 0xd;
    uVar5 = FUN_0025bcf8(iVar11);
    *(undefined4 *)(param_1 + 0x50) = uVar5;
    uVar5 = 1;
    *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  }
  return uVar5;
}

