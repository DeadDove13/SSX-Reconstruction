/* Ghidra pseudocode. PS2 address: 001a29d8. Not validated source. */

undefined8 FUN_001a29d8(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  
  FUN_00185ef0();
  iVar15 = (int)param_1;
  *(undefined **)(iVar15 + 8) = &DAT_002b61d8;
  lVar6 = FUN_0023a448(0x2b56f0,0x598,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x598);
  }
  iVar1 = FUN_001b72c0(lVar6);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0xc) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  lVar6 = FUN_0023a448(0x2b56f0,0x390,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x390);
  }
  lVar6 = FUN_001aeb28(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)((int)lVar6 + 0x174);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x10) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 1;
  lVar6 = FUN_0023a448(0x2b56f0,0x1f8,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x1f8);
  }
  lVar6 = FUN_001b37d8(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)lVar6;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x14) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 1;
  lVar6 = FUN_0023a448(0x2b56f0,0x2c0,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x2c0);
  }
  lVar6 = FUN_001b1c68(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)lVar6;
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x18) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  lVar6 = FUN_0023a448(0x2b56f0,0x28,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x28);
  }
  puVar13 = (undefined4 *)lVar6;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(undefined4 **)(iVar15 + 0x1c) = puVar13;
  puVar13[1] = 0;
  puVar13[6] = &DAT_002b5af0;
  lVar6 = FUN_0023a448(0x2b56f0,0x43c,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x43c);
  }
  iVar1 = FUN_001e14c0(lVar6);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x20) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  lVar6 = FUN_0023a448(0x2b56f0,0x4ec,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x4ec);
  }
  lVar6 = FUN_001abfc8(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)((int)lVar6 + 0x174);
  }
  *(undefined4 *)(iVar1 + 8) = 1;
  *(undefined4 *)(iVar1 + 4) = 1;
  *(int *)(iVar15 + 0x24) = iVar1;
  lVar6 = FUN_0023a448(0x2b56f0,0x4c,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x4c);
  }
  puVar13 = (undefined4 *)lVar6;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(undefined4 **)(iVar15 + 0x28) = puVar13;
  puVar13[1] = 0;
  puVar13[6] = &DAT_002b5a80;
  lVar6 = FUN_0023a448(0x2b56f0,0x20,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x20);
  }
  puVar13 = (undefined4 *)lVar6;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(undefined4 **)(iVar15 + 0x2c) = puVar13;
  puVar13[1] = 0;
  puVar13[6] = &DAT_002b5a10;
  lVar6 = FUN_0023a448(0x2b56f0,0x280,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x280);
  }
  lVar6 = FUN_001e52a8(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)((int)lVar6 + 0x174);
  }
  *(undefined4 *)(iVar1 + 8) = 1;
  *(int *)(iVar15 + 0x30) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  lVar6 = FUN_0023a448(0x2b56f0,0xec,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xec);
  }
  FUN_001a9700(lVar6);
  iVar1 = (int)lVar6;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x34) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 1;
  *(undefined **)(iVar1 + 0x18) = &DAT_002b5930;
  lVar6 = FUN_0023a448(0x2b56f0,0x130,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x130);
  }
  piVar14 = (int *)lVar6;
  *piVar14 = (int)(piVar14 + 0x11);
  FUN_001a9700(piVar14 + 0x11);
  FUN_001ab2f0(lVar6,0);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *piVar14;
  }
  *(undefined8 **)(*piVar14 + 0x18) = &DAT_002b5df8;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x38) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 1;
  lVar6 = FUN_0023a448(0x2b56f0,0x1c,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x1c);
  }
  puVar13 = (undefined4 *)lVar6;
  puVar13[2] = 0;
  *puVar13 = 0;
  *(undefined4 **)(iVar15 + 0x3c) = puVar13;
  puVar13[1] = 0;
  puVar13[6] = &DAT_002b59a0;
  lVar6 = FUN_0023a448(0x2b56f0,0x158,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x158);
  }
  lVar6 = FUN_001b2888(lVar6,1);
  iVar1 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)lVar6;
  }
  *(undefined4 *)(iVar1 + 4) = 1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x40) = iVar1;
  lVar6 = FUN_0023a448(0x2b56f0,0xec,0);
  if (lVar6 != 0) {
    FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0xec);
  }
  FUN_001a9700(lVar6);
  iVar1 = (int)lVar6;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(int *)(iVar15 + 0x44) = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined **)(iVar1 + 0x18) = &DAT_002b58c0;
  uVar7 = FUN_00237408(0x2b5700,0x10);
  uVar8 = FUN_0023bff0(uVar7,0x2c50e0);
  uVar2 = FUN_001be538(0x295e90,uVar8,0x2c50e0,0);
  uVar8 = FUN_0023bff0(uVar7,0x2c50e8);
  uVar3 = FUN_001be538(0x295e90,uVar8,0x2c50e8,0);
  uVar8 = FUN_0023bff0(uVar7,0x2c50f0);
  uVar4 = FUN_001be538(0x295e90,uVar8,0x2c50f0,0);
  uVar8 = FUN_0023bff0(uVar7,0x2c50f8);
  uVar5 = FUN_001be538(0x295e90,uVar8,0x2c50f8,0);
  uVar8 = FUN_0023bff0(uVar7,0x2c5100);
  uVar8 = FUN_001be538(0x295e90,uVar8,0x2c5100,0);
  uVar9 = FUN_0023bff0(uVar7,0x2c5108);
  uVar9 = FUN_001be538(0x295e90,uVar9,0x2c5108,0);
  if (*(int *)(DAT_002859e4 + 0x2c) == 0) {
    FUN_001a3d20(*(undefined4 *)(iVar15 + 0xc),uVar2,uVar3,uVar4,uVar5,uVar8,uVar9,
                 0xffffffffffffffff);
  }
  else {
    uVar10 = FUN_00237408(0x2b5718,0x10);
    uVar11 = FUN_0023bff0(uVar10,0x2c5110);
    uVar11 = FUN_001be538(0x295e90,uVar11,0x2c5110,0);
    uVar12 = FUN_0023bff0(uVar10,0x2c5118);
    FUN_001be538(0x295e90,uVar12,0x2c5118,0);
    uVar12 = FUN_0023bff0(uVar10,0x2c5120);
    FUN_001be538(0x295e90,uVar12,0x2c5120,0);
    FUN_001a3d20(*(undefined4 *)(iVar15 + 0xc),uVar2,uVar3,uVar4,uVar5,uVar8,uVar9,uVar11);
    FUN_0023a998(uVar10);
  }
  FUN_0023a998(uVar7);
  return param_1;
}

