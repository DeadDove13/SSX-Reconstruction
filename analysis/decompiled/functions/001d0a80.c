/* Ghidra pseudocode. PS2 address: 001d0a80. Not validated source. */

void FUN_001d0a80(int param_1,int param_2,float *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar4 = *(int *)(param_1 + 0x28) + param_2 * 0x58;
  puVar1 = (undefined8 *)*param_4;
  fVar6 = param_3[1];
  *puVar1 = 0x10000006;
  puVar1[3] = 0x5000000500000000;
  puVar1[4] = 0x4400000000000001;
  puVar1[5] = 0x5510;
  puVar1[6] = 0x10e;
  puVar1[1] = 0;
  puVar1[2] = 0;
  fVar7 = param_3[3];
  fVar9 = param_3[2];
  fVar8 = *param_3;
  iVar2 = *(int *)(iVar4 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x10);
  iVar3 = iVar2 >> 1;
  iVar5 = iVar4 >> 1;
  *param_4 = puVar1 + 0xe;
  puVar1[7] = (long)(int)(fVar6 * 128.0) | 0x3f80000000000000U |
              (long)(int)(fVar7 * 128.0) << 0x10 | (long)(int)(fVar9 * 128.0) << 8 |
              (long)(int)(fVar8 * 128.0) << 0x18;
  puVar1[8] = (long)((0x800 - iVar5) * 0x10) | (long)((0x800 - iVar3) * 0x10) << 0x10 | 0x100000000;
  puVar1[9] = (long)((iVar5 + 0x801) * 0x10) | (long)((iVar3 + 0x801) * 0x10) << 0x10 | 0x100000000;
  puVar1[10] = 0x1000000000008001;
  puVar1[0xb] = 0xe;
  puVar1[0xc] = (long)(iVar4 + -2) << 0x10 | (long)(iVar2 + -2) << 0x30 | 0x100000001U;
  puVar1[0xd] = 0x40;
  return;
}

