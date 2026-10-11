/* Ghidra pseudocode. PS2 address: 00138540. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0013876c) */

void FUN_00138540(int param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uStack_50;
  
  uVar7 = *param_2;
  uStack_50._4_4_ = (uint)(uVar7 >> 0x20);
  uVar11 = uStack_50._4_4_ & 0xf0000;
  uStack_50 = uVar7;
  if (uVar11 == 0x10000) {
    uStack_50 = uVar7 & 0xfff0ffffffffffff;
  }
  uVar7 = uStack_50;
  uVar9 = uStack_50 & 0x7ffffffffffffff;
  uStack_50._4_4_ = (uint)(uVar9 >> 0x20);
  uVar4 = uStack_50._4_4_ & 0xf00000;
  uVar11 = uStack_50._4_4_;
  uStack_50 = uVar9;
  if (uVar4 == 0x200000) {
    uStack_50 = uVar7 & 0x70fffffffffffff;
    uVar11 = 0;
  }
  uVar4 = uStack_50._4_4_;
  if ((uVar11 & 0xf00000) == 0x100000) {
    uVar7 = uStack_50 & 0xff0fffffffffffff;
    uStack_50._4_4_ = (uint)(uVar7 >> 0x20);
    uVar4 = uStack_50._4_4_;
    uStack_50 = uVar7;
  }
  if ((uVar4 & 0x7000000) == 0x1000000) {
    uStack_50 = uStack_50 & 0xf8ffffffffffffff;
  }
  if ((((*(int *)(DAT_002859e4 + 0x38) == 0) ||
       (iVar1 = *(int *)(*(int *)(DAT_002859e4 + 0x38) + 0x18), iVar1 == 0 || 9 < iVar1)) &&
      (*(int *)(DAT_002859e4 + 0x2c) == 0)) &&
     (-1 < *(char *)(*(int *)(*(int *)(param_1 + 0x1a0) + 0x394) + 0x54))) {
    piVar5 = (int *)FUN_00154a38(0x27a598);
    iVar6 = FUN_00154a70(0x27a598,*(undefined1 *)
                                   (*(int *)(*(int *)(param_1 + 0x1a0) + 0x394) + 0x54));
    uVar3 = DAT_002c56e8;
    iVar1 = *(int *)(&DAT_00284e18 + *piVar5 * 4);
    iVar10 = iVar1 * 0x32;
    iVar13 = iVar1 * 0x32 + 0x32;
    uVar11 = 0xffffffff;
    if (iVar10 < iVar13) {
      piVar8 = (int *)(&DAT_002780b8 + iVar1 * 400);
      do {
        if (((int)uStack_50 == *piVar8) && (uStack_50._4_4_ == piVar8[1])) {
          uVar11 = iVar10 % 0x32;
          break;
        }
        iVar10 = iVar10 + 1;
        piVar8 = piVar8 + 2;
      } while (iVar10 < iVar13);
    }
    if (uVar11 != 0xffffffff) {
      uVar4 = (int)uVar11 < 0x1f ^ 1;
      if (uVar4 != 0) {
        uVar11 = uVar11 - 0x1e;
      }
      uVar2 = piVar5[uVar4 + 3];
      if ((((int)uVar2 >> (uVar11 & 0x1f) & 1U) == 0) &&
         ((piVar5[uVar4 + 1] >> (uVar11 & 0x1f) & 1U) == 0)) {
        puVar12 = (uint *)(uVar4 * 4 + iVar6);
        uVar11 = 1 << (uVar11 & 0x1f);
        piVar5[uVar4 + 3] = uVar2 | uVar11;
        *puVar12 = *puVar12 | uVar11;
        FUN_00201088(uVar3);
      }
    }
  }
  return;
}

