/* Ghidra pseudocode. PS2 address: 001d2b88. Not validated source. */

void FUN_001d2b88(int param_1,int param_2,undefined4 *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  iVar4 = 2;
  iVar5 = *(int *)(param_1 + 0x28) + param_2 * 0x58;
  iVar1 = *(int *)(iVar5 + 0x20);
  if (iVar1 != 2) {
    if (iVar1 < 3) {
      iVar4 = 4;
      if (-1 < iVar1) {
        uVar9 = (ulong)*(int *)(iVar5 + 0x10);
        goto LAB_001d2bfc;
      }
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      if (iVar1 != 0x13) {
        uVar9 = (ulong)*(int *)(iVar5 + 0x10);
        goto LAB_001d2bfc;
      }
      iVar4 = 1;
    }
  }
  uVar9 = (ulong)*(int *)(iVar5 + 0x10);
LAB_001d2bfc:
  iVar1 = *(int *)(iVar5 + 0x18);
  iVar4 = (int)uVar9 * iVar4;
  iVar2 = *(int *)(iVar5 + 0x2c);
  if (iVar4 == 0) {
    trap(7);
  }
  lVar7 = (long)((int)uVar9 >> 6);
  iVar5 = *(int *)(iVar5 + 0x20);
  puVar3 = (undefined8 *)*param_3;
  *puVar3 = 0x10000001;
  lVar6 = 1;
  if (0 < lVar7) {
    lVar6 = lVar7;
  }
  uVar8 = (ulong)(iVar4 * iVar1 >> 4);
  puVar3[0x17] = 0x5000000200000000;
  puVar3[0x18] = 0x1000000000008001;
  puVar3[0x19] = 0xe;
  puVar3[0x1b] = 0x3f;
  puVar3[7] = 0xe;
  *param_3 = puVar3 + 0x1c;
  puVar3[3] = ((long)((iVar4 * iVar1 >> 4) + 6) | 0x50000000U) << 0x20;
  puVar3[4] = 0x10000006;
  puVar3[6] = 0x1000000000000004;
  puVar3[8] = (long)iVar5 << 0x18 | (long)iVar5 << 0x38 | lVar6 << 0x30 | param_4 << 0x20;
  puVar3[9] = 0x50;
  puVar3[0xb] = 0x51;
  puVar3[0xc] = uVar9 | (long)iVar1 << 0x20;
  puVar3[0xd] = 0x52;
  puVar3[0xf] = 0x53;
  puVar3[0x10] = uVar8 | 0x800000000000000;
  puVar3[0x12] = uVar8 | 0x30000000 | (long)iVar2 << 0x20;
  puVar3[0x14] = 0x10000003;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[10] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x13] = 0;
  puVar3[0x15] = 0;
  puVar3[0x16] = 0;
  puVar3[0x1a] = 0;
  return;
}

