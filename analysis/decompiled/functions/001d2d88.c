/* Ghidra pseudocode. PS2 address: 001d2d88. Not validated source. */

void FUN_001d2d88(int param_1,int param_2,undefined4 *param_3,long param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = (undefined8 *)*param_3;
  *puVar1 = 0x10000007;
  iVar2 = *(int *)(param_1 + 0x28);
  puVar1[4] = 0x1000000000000004;
  puVar1[6] = param_4 << 0x20 | 0x1000000000000;
  puVar1[7] = 0x50;
  puVar1[5] = 0xe;
  puVar1[3] = 0x5000004800000000;
  puVar1[9] = 0x51;
  puVar1[10] = 0x1000000010;
  puVar1[0xb] = 0x52;
  puVar1[0xd] = 0x53;
  puVar1[0xe] = 0x800000000000040;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[8] = 0;
  puVar1[0xc] = 0;
  puVar1[0xf] = 0;
  uVar3 = *(uint *)(param_2 * 0x58 + iVar2 + 0x38);
  puVar1[0x15] = 0xe;
  *param_3 = puVar1 + 0x18;
  puVar1[0x12] = 0x10000002;
  puVar1[0x14] = 0x1000000000008001;
  puVar1[0x10] = (ulong)uVar3 << 0x20 | 0x30000040;
  puVar1[0x17] = 0x3f;
  puVar1[0x11] = 0;
  puVar1[0x13] = 0;
  puVar1[0x16] = 0;
  return;
}

