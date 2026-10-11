/* Ghidra pseudocode. PS2 address: 001d2990. Not validated source. */

void FUN_001d2990(int param_1,int param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x28) + param_2 * 0x58;
  switch(*(undefined4 *)(iVar5 + 0x20)) {
  case 0:
  case 1:
    iVar3 = 4;
    break;
  case 2:
    iVar3 = 2;
    break;
  default:
    iVar3 = 0;
    break;
  case 0x13:
  case 0x1b:
    iVar3 = 1;
  }
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar1 * iVar3 == 0) {
    trap(7);
  }
  lVar2 = 1;
  if (0 < (long)(iVar1 >> 6)) {
    lVar2 = (long)(iVar1 >> 6);
  }
  uVar4 = (ulong)(iVar1 * iVar3 * *(int *)(iVar5 + 0x18) >> 4);
  DAT_70000070 = uVar4 | 0x30000000 | (long)*(int *)(iVar5 + 0x2c) << 0x20;
  DAT_70000020 = (long)*(int *)(iVar5 + 0x20) << 0x18 | (long)*(int *)(iVar5 + 0x20) << 0x38 |
                 lVar2 << 0x30 | param_3 << 0x20;
  DAT_70000040 = (long)iVar1 | (long)*(int *)(iVar5 + 0x18) << 0x20;
  DAT_70000060 = uVar4 | 0x800000000000000;
  DAT_70000010 = 0x1000000000000004;
  DAT_70000000 = 0x10000006;
  DAT_70000028 = 0x50;
  DAT_70000038 = 0x51;
  DAT_70000048 = 0x52;
  DAT_70000058 = 0x53;
  DAT_70000080 = 0x70000002;
  DAT_70000090 = 0x1000000000008001;
  DAT_70000098 = 0xe;
  DAT_700000a8 = 0x3f;
  DAT_70000008 = 0;
  DAT_70000018 = 0xe;
  DAT_70000030 = 0;
  DAT_70000050 = 0;
  DAT_70000068 = 0;
  DAT_70000078 = 0;
  DAT_70000088 = 0;
  DAT_700000a0 = 0;
  FlushCache(0);
  FUN_002166b0(0x70000000,6);
  return;
}

