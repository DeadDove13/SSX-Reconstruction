/* Ghidra pseudocode. PS2 address: 001c4720. Not validated source. */

void FUN_001c4720(int param_1,int param_2,long param_3,ulong param_4,long param_5,int param_6,
                 long param_7,long param_8,int param_9)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  int iStack_f0;
  int iStack_e0;
  
  iStack_e0 = param_9;
  iVar7 = (int)param_4;
  uVar8 = 0;
  switch(param_7) {
  case 0:
    uVar8 = (ulong)(iVar7 << 2);
    break;
  case 1:
    uVar8 = (ulong)(iVar7 * 3);
    break;
  case 2:
  case 10:
    uVar8 = (ulong)(iVar7 << 1);
    break;
  case 0x13:
    uVar8 = param_4;
    break;
  case 0x14:
    uVar8 = (long)(iVar7 >> 1);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1458);
  iStack_f0 = param_2;
  do {
    if (uVar8 == 0) {
      trap(7);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x1458);
    lVar9 = (long)(0x7fff0 / (int)uVar8);
    *puVar2 = 0x10000008;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 1;
    puVar2[1] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 2;
    puVar2[2] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 3;
    lVar3 = (long)iStack_e0;
    lVar4 = (long)iStack_f0;
    lVar6 = param_5;
    if (lVar9 <= param_5) {
      lVar6 = lVar9;
    }
    iVar5 = (int)lVar6;
    iVar7 = (int)uVar8 * iVar5;
    param_5 = (long)((int)param_5 - iVar5);
    iStack_e0 = iStack_e0 + iVar5;
    iVar5 = iVar7 >> 4;
    iStack_f0 = iStack_f0 + iVar7;
    puVar2[3] = ((long)(iVar5 + 7) | 0x50000000U) << 0x20;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 4;
    puVar2[4] = 0x1000000000000005;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 5;
    puVar2[5] = 0xe;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 6;
    puVar2[6] = param_3 << 0x20 | (long)(param_6 >> 6) << 0x30 | param_7 << 0x38;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 7;
    puVar2[7] = 0x50;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 8;
    puVar2[8] = param_8 << 0x20 | lVar3 << 0x30;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 9;
    puVar2[9] = 0x51;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 10;
    puVar2[10] = param_4 | lVar6 << 0x20;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0xb;
    puVar2[0xb] = 0x52;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0xc;
    puVar2[0xc] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0xd;
    puVar2[0xd] = 0x3f;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0xe;
    puVar2[0xe] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0xf;
    puVar2[0xf] = 0x53;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x10;
    puVar2[0x10] = (long)iVar5 | 0x800000000008000;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x11;
    puVar2[0x11] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x12;
    puVar2[0x12] = (long)iVar5 | 0x30000000U | lVar4 << 0x20;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x13;
    puVar2[0x13] = 0;
    *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x14;
  } while (param_5 != 0);
  *(undefined8 **)(param_1 + 0x1458) = puVar2 + 0x16;
  FUN_001d39e8(*(undefined4 *)(param_1 + 8),uVar1,puVar2 + 0x14,0);
  return;
}

