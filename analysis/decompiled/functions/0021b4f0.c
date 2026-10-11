/* Ghidra pseudocode. PS2 address: 0021b4f0. Not validated source. */

void FUN_0021b4f0(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar5;
  undefined8 in_hi;
  long lVar4;
  
  iVar2 = *param_1;
  param_2 = param_2 * 0x30;
  param_1[1] = iVar2 + 0x30;
  param_1[2] = iVar2 + 0x30 + param_2;
  iVar5 = iVar2 + (param_2 + *(short *)(iVar2 + 0x2c) * 4 + 0x3fU & 0xfffffff0);
  param_1[3] = iVar5;
  sVar1 = *(short *)(iVar2 + 0x24);
  lVar4 = ((long)iVar5 | CONCAT44((int)((ulong)in_hi >> 0x20),param_2 >> 0x1f)) +
          (long)(sVar1 * 0x110);
  uVar3 = (uint)lVar4;
  param_1[4] = uVar3;
  iVar5 = (uVar3 | (uint)((ulong)lVar4 >> 0x20)) + *(short *)(iVar2 + 0x26) * 0x1c0;
  param_1[7] = iVar5;
  param_1[5] = iVar5 + *(short *)(iVar2 + 0x2a) * 0x80;
  if (sVar1 == 0) {
    param_1[3] = 0;
  }
  iVar2 = *param_1;
  if (*(short *)(iVar2 + 0x26) == 0) {
    param_1[4] = 0;
  }
  if (*(short *)(iVar2 + 0x28) == 0) {
    param_1[5] = 0;
  }
  if (*(short *)(iVar2 + 0x2a) == 0) {
    param_1[7] = 0;
  }
  return;
}

