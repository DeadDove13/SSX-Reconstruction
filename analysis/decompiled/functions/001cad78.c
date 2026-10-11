/* Ghidra pseudocode. PS2 address: 001cad78. Not validated source. */

void FUN_001cad78(int param_1,int *param_2,float *param_3)

{
  uint uVar1;
  ulong uVar2;
  
  FlushCache(0);
  do {
    uVar1 = REG_DMAC_1_VIF1_CHCR;
  } while ((uVar1 & 0x100) != 0);
  do {
    uVar1 = REG_DMAC_2_GIF_CHCR;
  } while ((uVar1 & 0x100) != 0);
  do {
    uVar1 = REG_VIF1_STAT;
  } while ((uVar1 & 0x1f000003) != 0);
  do {
    uVar2 = REG_GS_CSR;
  } while ((uVar2 & 0xc000) != 0x4000);
  DAT_70000000 = 0x1000000000008003;
  DAT_70000008 = 0xe;
  DAT_70000018 = 0x4c;
  DAT_70000020 = 0x30000;
  DAT_70000010 = (ulong)*(uint *)(param_1 + 0x27c) | (ulong)*(uint *)(param_1 + 600) << 0x10 |
                 (ulong)*(uint *)(param_1 + 0x248) << 0x18;
  DAT_70000028 = 0x47;
  DAT_70000030 = 0x8000000044;
  DAT_70000038 = 0x42;
  FUN_00216198(0x70000000,4,6);
  DAT_70000000 = 0x4400000000008001;
  DAT_70000018 = (long)(int)(*param_3 * 128.0) | 0x3f80000000000000U |
                 (long)(int)(param_3[2] * 128.0) << 0x10 | (long)(int)(param_3[1] * 128.0) << 8 |
                 0x80000000;
  DAT_70000008 = 0x5510;
  DAT_70000010 = 0x46;
  DAT_70000020 = (long)(int)(((float)*param_2 * 16.0 + 32768.0) -
                            (float)*(uint *)(param_1 + 0x240) * 8.0) |
                 (long)(int)(((float)param_2[1] * 16.0 + 32768.0) -
                            (float)*(uint *)(param_1 + 0x244) * 8.0) << 0x10 | 0x100000000;
  DAT_70000028 = (long)(int)(((float)(*param_2 + param_2[2]) * 16.0 + 32768.0) -
                            (float)*(uint *)(param_1 + 0x240) * 8.0) |
                 (long)(int)(((float)(param_2[1] + param_2[3]) * 16.0 + 32768.0) -
                            (float)*(uint *)(param_1 + 0x244) * 8.0) << 0x10 | 0x100000000;
  FUN_00216198(0x70000000,3,6);
  DAT_70000000 = 0x1000000000008001;
  DAT_70000008 = 0xe;
  DAT_70000010 = (ulong)*(uint *)(param_1 + 0x278) | (ulong)*(uint *)(param_1 + 600) << 0x10 |
                 (ulong)*(uint *)(param_1 + 0x248) << 0x18;
  DAT_70000018 = 0x4c;
  FUN_00216198(0x70000000,2,6);
  return;
}

