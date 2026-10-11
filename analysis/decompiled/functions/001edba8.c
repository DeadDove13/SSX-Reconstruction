/* Ghidra pseudocode. PS2 address: 001edba8. Not validated source. */

void FUN_001edba8(int param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint *puVar8;
  long lVar9;
  
  uVar5 = DAT_002913b8;
  lVar9 = 0;
  FUN_001c5048(0x2913b0,0xffffffffffffffff,1);
  if (0 < *(short *)(*(int *)(param_1 + 0x18) + 0x28)) {
    do {
      puVar6 = DAT_00292808;
      iVar4 = (int)lVar9 * 0x1c;
      puVar8 = (uint *)(iVar4 + *(int *)(param_1 + 0x2c));
      if ((*puVar8 & 0x10) != 0) {
        if ((*puVar8 & 1) != 0) {
          puVar2 = (undefined8 *)puVar8[4];
          puVar2[1] = 0x1400034e00000000;
          *puVar2 = 0;
          puVar7 = DAT_00292808 + 2;
          uVar3 = puVar8[3];
          puVar1 = DAT_00292808 + 1;
          DAT_00292808 = DAT_00292808 + 4;
          *puVar1 = 0;
          *puVar6 = (ulong)uVar3 << 0x20 | 0x50000000;
          FUN_001d39e8(uVar5,puVar6,puVar7,1);
        }
        puVar6 = DAT_00292808;
        puVar8 = (uint *)(iVar4 + *(int *)(param_1 + 0x2c));
        if ((*puVar8 & 2) != 0) {
          puVar2 = (undefined8 *)puVar8[6];
          puVar2[1] = 0x1400038e00000000;
          *puVar2 = 0;
          puVar7 = DAT_00292808 + 2;
          uVar3 = puVar8[5];
          puVar1 = DAT_00292808 + 1;
          DAT_00292808 = DAT_00292808 + 4;
          *puVar1 = 0;
          *puVar6 = (ulong)uVar3 << 0x20 | 0x50000000;
          FUN_001d39e8(uVar5,puVar6,puVar7,1);
        }
      }
      lVar9 = (long)((int)lVar9 + 1);
    } while (lVar9 < *(short *)(*(int *)(param_1 + 0x18) + 0x28));
  }
  return;
}

