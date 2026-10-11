/* Ghidra pseudocode. PS2 address: 001d43c0. Not validated source. */

void FUN_001d43c0(int param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort *puVar9;
  
  param_2 = param_2 * 8;
  puVar7 = (ushort *)(param_1 + 0xc26 + param_2);
  uVar1 = *puVar7;
  puVar9 = (ushort *)(param_1 + 0xc24 + param_2);
  uVar2 = *(ushort *)(param_1 + 0xc2a + param_2);
  uVar3 = *puVar9;
  uVar4 = *(ushort *)(param_1 + 0xc28 + param_2);
  uVar6 = (ulong)*puVar7;
  uVar8 = (ulong)*puVar9;
  puVar5 = (undefined8 *)*param_3;
  *puVar5 = 0x10000004;
  *param_3 = puVar5 + 10;
  puVar5[3] = 0x5000000300000000;
  puVar5[4] = 0x1000000000008002;
  puVar5[5] = 0xe;
  puVar5[6] = uVar8 | (long)(int)((uVar1 - 1) + (uint)uVar2) << 0x30 |
              uVar6 << 0x20 | (long)(int)((uVar3 - 1) + (uint)uVar4) << 0x10;
  puVar5[7] = 0x40;
  puVar5[8] = uVar8 | (long)(int)((uVar1 - 1) + (uint)uVar2) << 0x30 |
              uVar6 << 0x20 | (long)(int)((uVar3 - 1) + (uint)uVar4) << 0x10;
  puVar5[9] = 0x41;
  puVar5[1] = 0;
  puVar5[2] = 0;
  return;
}

