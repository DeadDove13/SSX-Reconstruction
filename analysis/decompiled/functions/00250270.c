/* Ghidra pseudocode. PS2 address: 00250270. Not validated source. */

void FUN_00250270(int param_1,long *param_2,undefined8 *param_3,ulong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  if (*(int *)(iVar1 + 0x70) == 0) {
    *param_2 = *(long *)(param_1 + 0x18);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 < 0) {
      iVar2 = *(int *)(iVar1 + 0x80);
      if (iVar2 < 0) {
        *param_2 = lVar6;
      }
      else {
        uVar8 = (uint)*(undefined8 *)(iVar1 + 0x88);
        uVar9 = uVar8 & 1;
        uVar7 = FUN_00256a78(uVar9,*(ulong *)(iVar1 + 0x78) & 1);
        iVar5 = FUN_00256a78(uVar7,*(uint *)(iVar1 + 0x90) & 1);
        lVar6 = FUN_00256a78(*(undefined8 *)(iVar1 + 0x78),uVar8);
        *param_2 = (long)(iVar2 + (int)((ulong)(lVar6 << 0x1f) >> 0x20) + iVar5);
        lVar6 = FUN_00256a78(uVar9,*(ulong *)(iVar1 + 0x78) & 1);
        if (lVar6 != 0) {
          *(int *)(iVar1 + 0x90) = *(int *)(iVar1 + 0x90) + 1;
        }
      }
    }
    else {
      *param_2 = lVar6;
    }
  }
  if (*(int *)(iVar1 + 0xf8) == 2) {
    if (*(long *)(iVar1 + 0xf0) < 0) {
      lVar6 = (long)*(int *)(param_1 + 0x40);
    }
    else {
      *param_2 = *(long *)(iVar1 + 0xf0);
      *(undefined4 *)(iVar1 + 0xf8) = 0;
      *(undefined8 *)(iVar1 + 0xf0) = 0xffffffffffffffff;
      lVar6 = (long)*(int *)(param_1 + 0x40);
    }
  }
  else {
    lVar6 = (long)*(int *)(param_1 + 0x40);
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar5 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x38);
  *param_3 = *(undefined8 *)(param_1 + 0x20);
  *param_4 = (long)iVar2 << 8 | (long)iVar3 | lVar6 << 5 | (long)iVar1 << 6 |
             (long)iVar4 << 7 | (long)iVar5 << 3;
  return;
}

