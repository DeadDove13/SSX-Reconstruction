/* Ghidra pseudocode. PS2 address: 0022d8c8. Not validated source. */

/* WARNING: Instruction at (ram,0x0022d93c) overlaps instruction at (ram,0x0022d938)
    */

void FUN_0022d8c8(undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  undefined4 in_zero_lo;
  undefined4 in_zero_hi;
  undefined4 in_zero_udw;
  undefined4 in_register_0000000c;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (int)param_2;
  if (param_2 < 0x12) {
    iVar4 = iVar3 + -2;
    if (-1 < iVar3 + -1) {
      while( true ) {
        *(undefined1 *)param_1 = 0;
        param_1 = (undefined8 *)((int)param_1 + 1);
        if (iVar4 < 0) break;
        iVar4 = iVar4 + -1;
      }
    }
    return;
  }
  iVar3 = iVar3 + -0x80;
  if (((uint)param_1 & 0xf) != 0) {
    uVar5 = (uint)param_1 & 7;
    *(ulong *)((int)param_1 - uVar5) =
         0L << uVar5 * 8 | *(ulong *)((int)param_1 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8
    ;
    iVar4 = 8 - ((uint)param_1 & 7);
    param_1 = (undefined8 *)((int)param_1 + iVar4);
    uVar5 = (uint)param_1 & 8;
    if (uVar5 != 0) {
      *param_1 = 0;
      param_1 = (undefined8 *)((int)param_1 + uVar5);
    }
    iVar3 = ((iVar3 - iVar4) - uVar5) + -0x80;
  }
  for (; -1 < iVar3; iVar3 = iVar3 + -0x80) {
    *(undefined4 *)param_1 = in_zero_lo;
    *(undefined4 *)((int)param_1 + 4) = in_zero_hi;
    *(undefined4 *)(param_1 + 1) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0xc) = in_register_0000000c;
    *(undefined4 *)(param_1 + 2) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x14) = in_zero_hi;
    *(undefined4 *)(param_1 + 3) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x1c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 4) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x24) = in_zero_hi;
    *(undefined4 *)(param_1 + 5) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x2c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 6) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x34) = in_zero_hi;
    *(undefined4 *)(param_1 + 7) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x3c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 8) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x44) = in_zero_hi;
    *(undefined4 *)(param_1 + 9) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x4c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 10) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x54) = in_zero_hi;
    *(undefined4 *)(param_1 + 0xb) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x5c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 0xc) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 100) = in_zero_hi;
    *(undefined4 *)(param_1 + 0xd) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x6c) = in_register_0000000c;
    *(undefined4 *)(param_1 + 0xe) = in_zero_lo;
    *(undefined4 *)((int)param_1 + 0x74) = in_zero_hi;
    *(undefined4 *)(param_1 + 0xf) = in_zero_udw;
    *(undefined4 *)((int)param_1 + 0x7c) = in_register_0000000c;
    param_1 = param_1 + 0x10;
  }
  for (iVar3 = iVar3 + 0x78; -1 < iVar3; iVar3 = iVar3 + -8) {
    *param_1 = 0;
    param_1 = param_1 + 1;
  }
  if (iVar3 + 7 < 0) {
    return;
  }
  puVar2 = (undefined1 *)((int)param_1 + iVar3 + 7);
  uVar5 = (uint)puVar2 & 7;
  puVar1 = (ulong *)(puVar2 + -uVar5);
  *puVar1 = *puVar1 & -1L << (uVar5 + 1) * 8 | 0UL >> (7 - uVar5) * 8;
  return;
}

