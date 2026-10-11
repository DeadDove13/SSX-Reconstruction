/* Ghidra pseudocode. PS2 address: 00260c38. Not validated source. */

void FUN_00260c38(int *param_1)

{
  bool bVar1;
  long lVar2;
  ushort uVar3;
  undefined1 auStack_b0 [4];
  uint uStack_ac;
  
  uVar3 = *(ushort *)(param_1 + 3);
  if ((uVar3 & 2) != 0) {
    param_1[5] = 1;
    param_1[4] = (int)param_1 + 0x43;
    *param_1 = (int)param_1 + 0x43;
    return;
  }
  if (-1 < *(short *)((int)param_1 + 0xe)) {
    lVar2 = FUN_00263b28(param_1[0x15],*(short *)((int)param_1 + 0xe),auStack_b0);
    if (-1 < lVar2) {
      bVar1 = (uStack_ac & 0xf000) == 0x2000;
      if ((uStack_ac & 0xf000) == 0x8000) {
        uVar3 = *(ushort *)(param_1 + 3);
        if ((code *)param_1[10] != FUN_00262290) goto LAB_00260cec;
        param_1[0x13] = 0x400;
        uVar3 = uVar3 | 0x400;
      }
      else {
        uVar3 = *(ushort *)(param_1 + 3);
LAB_00260cec:
        uVar3 = uVar3 | 0x800;
      }
      *(ushort *)(param_1 + 3) = uVar3;
      goto LAB_00260cf4;
    }
    uVar3 = *(ushort *)(param_1 + 3);
  }
  bVar1 = false;
  *(ushort *)(param_1 + 3) = uVar3 | 0x800;
LAB_00260cf4:
  lVar2 = FUN_00259d50(param_1[0x15],0x400);
  uVar3 = *(ushort *)(param_1 + 3);
  if (lVar2 == 0) {
    param_1[4] = (int)param_1 + 0x43;
    param_1[5] = 1;
    *(ushort *)(param_1 + 3) = uVar3 | 2;
    *param_1 = (int)param_1 + 0x43;
  }
  else {
    param_1[4] = (int)lVar2;
    *(undefined1 **)(param_1[0x15] + 0x3c) = &LAB_00260078;
    *(ushort *)(param_1 + 3) = uVar3 | 0x80;
    param_1[5] = 0x400;
    *param_1 = (int)lVar2;
    if ((bVar1) && (lVar2 = FUN_00264cc0(*(undefined2 *)((int)param_1 + 0xe)), lVar2 != 0)) {
      *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 1;
    }
  }
  return;
}

