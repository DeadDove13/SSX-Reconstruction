/* Ghidra pseudocode. PS2 address: 001d0960. Not validated source. */

void FUN_001d0960(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28) + param_2 * 0x58;
  iVar1 = *(int *)(iVar5 + 0x18);
  iVar2 = *(int *)(iVar5 + 0x10);
  iVar3 = *(int *)(*(int *)(param_1 + 0x54) + *(int *)(iVar5 + 0x24) * 0x14);
  puVar4 = (undefined8 *)*param_3;
  iVar5 = *(int *)(iVar5 + 0x20);
  *puVar4 = 0x10000005;
  *param_3 = puVar4 + 0xc;
  puVar4[2] = 0x1300000000000000;
  puVar4[3] = 0x5000000400000000;
  puVar4[4] = 0x1000000000008003;
  puVar4[5] = 0xe;
  puVar4[6] = (long)iVar3 >> 5 | ((long)iVar2 >> 6) << 0x10 | (long)iVar5 << 0x18;
  puVar4[7] = 0x4c;
  puVar4[8] = (long)(iVar2 + -1) << 0x10 | (long)(iVar1 + -1) << 0x30;
  puVar4[9] = 0x40;
  puVar4[10] = (long)((0x800 - (iVar2 >> 1)) * 0x10) | (long)((0x800 - (iVar1 >> 1)) * 0x10) << 0x20
  ;
  puVar4[0xb] = 0x18;
  puVar4[1] = 0;
  return;
}

