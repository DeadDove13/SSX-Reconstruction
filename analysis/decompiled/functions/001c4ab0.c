/* Ghidra pseudocode. PS2 address: 001c4ab0. Not validated source. */

void FUN_001c4ab0(undefined8 param_1,ulong param_2,long param_3,ulong param_4,long param_5,
                 int param_6,long param_7,long param_8,int param_9)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  ulong in_hi1;
  long lVar4;
  
  iVar7 = (int)param_4;
  puVar5 = &DAT_70000000;
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
  do {
    uVar1 = REG_DMAC_2_GIF_CHCR;
  } while ((uVar1 & 0x100) != 0);
  do {
    iVar7 = (int)uVar8;
    if (uVar8 == 0) {
      trap(7);
    }
    puVar5[6] = param_8 << 0x20 | (long)param_9 << 0x30;
    *puVar5 = 0x10000007;
    uVar6 = param_2 << 0x20;
    puVar5[1] = 0;
    puVar5[2] = 0x1000000000000005;
    puVar5[3] = 0xe;
    puVar5[4] = param_3 << 0x20 | (long)(param_6 >> 6) << 0x30 | param_7 << 0x38;
    puVar5[5] = 0x50;
    puVar5[7] = 0x51;
    puVar5[9] = 0x52;
    puVar5[10] = 0;
    puVar5[0xb] = 0x3f;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0x53;
    puVar5[0xf] = 0;
    lVar4 = (long)(0x7fff0 / iVar7);
    if (param_5 < 0x7fff0 / iVar7) {
      lVar4 = param_5;
    }
    iVar3 = (int)lVar4;
    param_5 = (long)((int)param_5 - iVar3);
    puVar5[8] = param_4 | lVar4 << 0x20;
    uVar2 = (ulong)(iVar7 * iVar3 >> 4);
    puVar5[0xe] = uVar2 | 0x800000000008000;
    if (param_5 != 0) {
      uVar6 = uVar6 | 0x30000000;
    }
    puVar5[0x10] = uVar2 | uVar6;
    param_9 = param_9 + iVar3;
    puVar5[0x11] = 0;
    lVar4 = (param_2 | in_hi1) + (long)(iVar7 * iVar3);
    param_2 = (ulong)(int)lVar4;
    in_hi1 = (ulong)(int)((ulong)lVar4 >> 0x20);
    puVar5 = puVar5 + 0x12;
  } while (param_5 != 0);
  FUN_002166b0(0x70000000,6);
  return;
}

