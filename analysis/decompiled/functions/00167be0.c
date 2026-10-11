/* Ghidra pseudocode. PS2 address: 00167be0. Not validated source. */

void FUN_00167be0(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 auStack_c0 [4];
  undefined *puStack_bc;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  
  FUN_00168750(0x295e90,0);
  FUN_00221b88(0x299cc8,0xffffffffffffffff);
  iVar4 = 0;
  while( true ) {
    iVar12 = 0;
    if (DAT_00299cc8 != 0) {
      iVar12 = DAT_0029a7ac;
    }
    if (iVar12 <= iVar4) break;
    iVar12 = 0;
    if (iVar4 != 0xffff) {
      iVar12 = *(int *)(iVar4 * 8 + DAT_00299cd4);
    }
    iVar4 = iVar4 + 1;
    if (iVar12 != 0) {
      iVar10 = 0;
      while (iVar10 < (int)*(short *)(DAT_00299cc8 + 0x42) * (int)*(short *)(DAT_00299cc8 + 0x42)) {
        iVar8 = iVar10 * 0x30;
        iVar10 = iVar10 + 1;
        iVar8 = *(int *)(iVar12 + 4) + iVar8;
        if (iVar8 != 0) {
          lVar7 = (long)*(short *)(iVar8 + 4);
          if (0 < lVar7) {
            iVar2 = *(int *)(iVar12 + 0xc);
            puVar9 = (ushort *)(*(int *)(iVar12 + 8) + *(short *)(iVar8 + 0x10) * 4 + 2);
            do {
              uVar1 = *puVar9;
              lVar7 = (long)((int)lVar7 + -1);
              puVar9 = puVar9 + 2;
              iVar8 = (uint)uVar1 * 0x110 + iVar2;
              *(undefined4 *)(iVar8 + 0x100) = 0;
              *(uint *)(iVar8 + 0xe8) =
                   *(uint *)(iVar8 + 0xe8) & 0xffff0000 | (int)*(uint *)(iVar8 + 0xe8) >> 0x10 | 2;
            } while (lVar7 != 0);
          }
        }
      }
    }
  }
  iVar4 = (int)param_1;
  FUN_00167b88(param_1);
  FUN_001a0460(iVar4 + 0x3cc,0x2b0190,0);
  puVar11 = (undefined4 *)(iVar4 + 0x364);
  FUN_001a0460(iVar4 + 0x434,0x2b01a8,0);
  iVar12 = 1;
  FUN_001a0460(iVar4 + 0x400,0x2b01c0,0);
  *(undefined4 *)(iVar4 + 0x418) = 0x3fa00000;
  *(undefined4 *)(iVar4 + 0x41c) = 0x3f800000;
  uVar5 = FUN_002369a0(0x2b01d8,0);
  uVar6 = FUN_0023bff0(uVar5,0x2c48b8);
  uVar3 = FUN_001be538(0x295e90,uVar6,0x2c48b8,0);
  *(undefined4 *)(iVar4 + 0x468) = uVar3;
  FUN_0023a998(uVar5);
  do {
    puStack_bc = &DAT_002b0258;
    lVar7 = FUN_0023a448(0x2c48c0,0x8590,0x10);
    if (lVar7 != 0) {
      FUN_0023bbd0(lVar7,0xffffffffdeadc0de,0x8590);
    }
    uVar5 = FUN_00104c08(lVar7);
    iVar12 = iVar12 + -1;
    *puVar11 = (int)uVar5;
    FUN_001e8970(auStack_c0,uVar5,0);
    puVar11 = puVar11 + 1;
    FUN_001689b8(auStack_c0,2);
  } while (-1 < iVar12);
  FUN_00169be8(iVar4 + 0x4c8);
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0x3f800000;
  FUN_00222e98(0x299cc8,&uStack_b0,0x14);
  uVar5 = FUN_0023b170();
  iVar4 = FUN_0023b170();
  FUN_0018ac08(0x2b01f0,uVar5,0x8000002 - iVar4);
  return;
}

