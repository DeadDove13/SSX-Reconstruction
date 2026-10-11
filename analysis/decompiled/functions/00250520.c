/* Ghidra pseudocode. PS2 address: 00250520. Not validated source. */

void FUN_00250520(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar11 = 0;
  iVar2 = *(int *)(DAT_002a52a4 + 0x40);
  uVar9 = param_2;
  uVar10 = param_1;
  if (DAT_002a546c == 2) {
    uVar11 = 0x40;
    uVar9 = param_1;
    uVar10 = param_2;
  }
  FUN_00250270(uVar9,DAT_002a52a4 + 0x10,DAT_002a52a4 + 0x18,DAT_002a52a4 + 0x20);
  iVar8 = DAT_002a52a4;
  uVar1 = *(undefined4 *)(DAT_002a52a4 + 0x10);
  iVar7 = DAT_002a52a4 + 0x38;
  iVar6 = DAT_002a52a4 + 0x28;
  *(undefined8 *)(iVar2 + 0x88) = 1;
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  FUN_00250270(uVar10,iVar6,iVar8 + 0x30,iVar7);
  iVar8 = DAT_002a52a4;
  uVar1 = *(undefined4 *)(DAT_002a52a4 + 0x28);
  *(undefined8 *)(iVar2 + 0x88) = 1;
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  uVar3 = *(ulong *)(iVar8 + 0x20);
  iVar6 = (int)uVar9;
  uVar5 = *(ulong *)(iVar8 + 0x38);
  *(undefined4 *)(iVar2 + 0xcc) = *(undefined4 *)(iVar6 + 0x5c);
  *(ulong *)(iVar8 + 0x20) = uVar3 | uVar11;
  uVar1 = *(undefined4 *)(iVar6 + 0x60);
  *(ulong *)(iVar8 + 0x38) = uVar5 | uVar11;
  *(undefined4 *)(iVar2 + 0xd0) = uVar1;
  *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar6 + 0x44);
  *(undefined4 *)(iVar2 + 0xb8) = *(undefined4 *)((int)uVar10 + 0x48);
  *(undefined4 *)(iVar2 + 0xc0) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)((int)uVar10 + 0x54);
  lVar4 = FUN_0024ff78(param_1);
  if (((lVar4 != 0) && (iVar8 = (int)param_1, *(int *)(iVar8 + 0x28) == 1)) &&
     (*(int *)((int)param_2 + 0x28) == 1)) {
    *(int *)(iVar8 + 0x10) = *(int *)(iVar8 + 0x10) << 1;
    if (*(int *)(iVar2 + 0xb0) == 0) {
      FUN_00250018(param_1);
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    else {
      FUN_00250a20(param_1);
      iVar2 = *(int *)(iVar8 + 0x10);
    }
    *(int *)(iVar8 + 0x10) = iVar2 >> 1;
    uVar1 = DAT_002a53c4;
    iVar2 = *(int *)(DAT_002a52a4 + 0x40);
    if (*(int *)(iVar2 + 8) != 2) {
      *(undefined4 *)(iVar2 + 8) = 2;
      *(undefined4 *)(iVar2 + 0xac) = uVar1;
    }
    DAT_002a5b40 = 1;
    return;
  }
  return;
}

