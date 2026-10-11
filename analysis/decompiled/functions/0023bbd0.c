/* Ghidra pseudocode. PS2 address: 0023bbd0. Not validated source. */

/* WARNING: Instruction at (ram,0x0023bc5c) overlaps instruction at (ram,0x0023bc58)
    */

void FUN_0023bbd0(ulong *param_1,undefined8 param_2,int param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar5 [16];
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  
  auVar5 = _pextlw(param_2,param_2);
  if (param_3 < 0x12) {
    iVar9 = param_3 + -2;
    if (-1 < param_3 + -1) {
      while( true ) {
        *(char *)param_1 = auVar5[0];
        param_1 = (ulong *)((int)param_1 + 1);
        if ((iVar9 < 0) && (iVar9 < 0)) break;
        iVar9 = iVar9 + -1;
      }
    }
    return;
  }
  auVar5 = _pcpyld(auVar5,auVar5);
  uVar4 = auVar5._0_8_;
  if (((uint)param_1 & 0xf) != 0) {
    uVar10 = (uint)param_1 & 7;
    *(ulong *)((int)param_1 - uVar10) =
         uVar4 << uVar10 * 8 |
         *(ulong *)((int)param_1 - uVar10) & 0xffffffffffffffffU >> (8 - uVar10) * 8;
    iVar9 = 8 - ((uint)param_1 & 7);
    param_1 = (ulong *)((int)param_1 + iVar9);
    uVar10 = (uint)param_1 & 8;
    param_3 = (param_3 - iVar9) - uVar10;
    if (uVar10 != 0) {
      *param_1 = uVar4;
      param_1 = (ulong *)((int)param_1 + uVar10);
    }
  }
  while (-1 < param_3 + -0x80) {
    uVar3 = auVar5._0_4_;
    *(undefined4 *)param_1 = uVar3;
    uVar6 = auVar5._4_4_;
    *(undefined4 *)((int)param_1 + 4) = uVar6;
    uVar7 = auVar5._8_4_;
    *(undefined4 *)(param_1 + 1) = uVar7;
    uVar8 = auVar5._12_4_;
    *(undefined4 *)((int)param_1 + 0xc) = uVar8;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(undefined4 *)((int)param_1 + 0x14) = uVar6;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((int)param_1 + 0x1c) = uVar8;
    *(undefined4 *)(param_1 + 4) = uVar3;
    *(undefined4 *)((int)param_1 + 0x24) = uVar6;
    *(undefined4 *)(param_1 + 5) = uVar7;
    *(undefined4 *)((int)param_1 + 0x2c) = uVar8;
    *(undefined4 *)(param_1 + 6) = uVar3;
    *(undefined4 *)((int)param_1 + 0x34) = uVar6;
    *(undefined4 *)(param_1 + 7) = uVar7;
    *(undefined4 *)((int)param_1 + 0x3c) = uVar8;
    *(undefined4 *)(param_1 + 8) = uVar3;
    *(undefined4 *)((int)param_1 + 0x44) = uVar6;
    *(undefined4 *)(param_1 + 9) = uVar7;
    *(undefined4 *)((int)param_1 + 0x4c) = uVar8;
    *(undefined4 *)(param_1 + 10) = uVar3;
    *(undefined4 *)((int)param_1 + 0x54) = uVar6;
    *(undefined4 *)(param_1 + 0xb) = uVar7;
    *(undefined4 *)((int)param_1 + 0x5c) = uVar8;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(undefined4 *)((int)param_1 + 100) = uVar6;
    *(undefined4 *)(param_1 + 0xd) = uVar7;
    *(undefined4 *)((int)param_1 + 0x6c) = uVar8;
    *(undefined4 *)(param_1 + 0xe) = uVar3;
    *(undefined4 *)((int)param_1 + 0x74) = uVar6;
    *(undefined4 *)(param_1 + 0xf) = uVar7;
    *(undefined4 *)((int)param_1 + 0x7c) = uVar8;
    param_1 = param_1 + 0x10;
    param_3 = param_3 + -0x80;
  }
  param_3 = param_3 + -8;
  while (-1 < param_3) {
    do {
      *param_1 = uVar4;
      param_3 = param_3 + -8;
      param_1 = param_1 + 1;
    } while (-1 < param_3);
  }
  if (param_3 + 7 < 0) {
    return;
  }
  puVar2 = (undefined1 *)((int)param_1 + param_3 + 7);
  uVar10 = (uint)puVar2 & 7;
  puVar1 = (ulong *)(puVar2 + -uVar10);
  *puVar1 = *puVar1 & -1L << (uVar10 + 1) * 8 | uVar4 >> (7 - uVar10) * 8;
  return;
}

