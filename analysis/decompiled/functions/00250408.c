/* Ghidra pseudocode. PS2 address: 00250408. Not validated source. */

void FUN_00250408(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  
  iVar1 = *(int *)(DAT_002a52a4 + 0x40);
  FUN_00250270(param_1,DAT_002a52a4 + 0x10,DAT_002a52a4 + 0x18,DAT_002a52a4 + 0x20);
  lVar4 = *(long *)(DAT_002a52a4 + 0x20);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(DAT_002a52a4 + 0x10);
  iVar5 = (int)param_1;
  uVar2 = *(uint *)(&DAT_002a5c38 + ((uint)((ulong)(lVar4 << 0x1b) >> 0x20) & 0xf) * 4);
  *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar5 + 0x5c);
  *(ulong *)(iVar1 + 0x88) = (ulong)uVar2;
  *(undefined4 *)(iVar1 + 0xd0) = *(undefined4 *)(iVar5 + 0x60);
  *(undefined4 *)(iVar1 + 0xb4) = *(undefined4 *)(iVar5 + 0x44);
  *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(iVar5 + 0x48);
  *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(iVar5 + 0x4c);
  *(undefined4 *)(iVar1 + 0xc0) = *(undefined4 *)(iVar5 + 0x50);
  *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(iVar1 + 200) = *(undefined4 *)(iVar5 + 0x58);
  lVar4 = FUN_0024ff78(param_1);
  if ((lVar4 != 0) && (*(int *)(iVar5 + 0x28) == 1)) {
    if (*(int *)(iVar1 + 0xb0) == 0) {
      FUN_00250018(param_1);
    }
    else {
      FUN_00250a20(param_1);
    }
    uVar3 = DAT_002a53c4;
    iVar1 = *(int *)(DAT_002a52a4 + 0x40);
    if (*(int *)(iVar1 + 8) != 2) {
      *(undefined4 *)(iVar1 + 8) = 2;
      *(undefined4 *)(iVar1 + 0xac) = uVar3;
    }
    DAT_002a5b40 = 1;
    return;
  }
  return;
}

