/* Ghidra pseudocode. PS2 address: 001c4f28. Not validated source. */

void FUN_001c4f28(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  puVar7 = *(undefined8 **)(param_1 + 0x1458);
  uVar8 = *(uint *)(param_1 + 0x240);
  puVar7[2] = 0x1300000000000000;
  puVar7[3] = 0x5000000400000000;
  *puVar7 = 0x10000005;
  uVar1 = *(ushort *)(param_1 + 0x1e2);
  uVar9 = *(uint *)(param_1 + 0x244);
  puVar7[4] = 0x1000000000008003;
  puVar7[5] = 0xe;
  puVar7[1] = 0;
  uVar2 = *(ushort *)(param_1 + 0x1e6);
  uVar3 = *(ushort *)(param_1 + 0x1e0);
  uVar4 = *(ushort *)(param_1 + 0x1e4);
  uVar5 = *(ushort *)(param_1 + 0x1e2);
  uVar6 = *(ushort *)(param_1 + 0x1e0);
  uVar10 = *(undefined4 *)(param_1 + 8);
  puVar7[6] = (ulong)*(uint *)(param_1 + 0x278) | (ulong)*(uint *)(param_1 + 600) << 0x10 |
              (ulong)*(uint *)(param_1 + 0x248) << 0x18;
  puVar7[7] = 0x4c;
  puVar7[8] = (ulong)uVar6 | (long)(int)((uVar1 - 1) + (uint)uVar2) << 0x30 |
              (ulong)uVar5 << 0x20 | (long)(int)((uVar3 - 1) + (uint)uVar4) << 0x10;
  puVar7[9] = 0x40;
  puVar7[10] = CONCAT44((0x800 - (uVar9 >> 1)) * 0x10,(0x800 - (uVar8 >> 1)) * 0x10);
  puVar7[0xb] = 0x18;
  *(undefined8 **)(param_1 + 0x1458) = puVar7 + 0xe;
  FUN_001d39e8(uVar10,puVar7,puVar7 + 0xc,1);
  return;
}

