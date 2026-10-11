/* Ghidra pseudocode. PS2 address: 001d4800. Not validated source. */

void FUN_001d4800(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  
  if (param_3 == 1) {
    iVar5 = 0x4e;
  }
  else {
    iVar5 = 0x4e;
    if (param_3 != 2) {
      puVar4 = (undefined8 *)*param_4;
      goto LAB_001d4834;
    }
    iVar5 = 0x4f;
  }
  puVar4 = (undefined8 *)*param_4;
LAB_001d4834:
  *puVar4 = 0x10000003;
  iVar1 = *(int *)(param_1 + 0xd08c);
  puVar4[3] = 0x5000000200000000;
  puVar4[5] = 0xe;
  puVar4[4] = 0x1000000000008001;
  puVar4[1] = 0;
  puVar4[2] = 0;
  uVar2 = *(uint *)(param_1 + 0xd090);
  *param_4 = puVar4 + 7;
  uVar3 = (ulong)uVar2 | (ulong)(iVar1 - 0x30) << 0x18;
  if (param_2 == 1) {
    uVar3 = uVar3 | 0x100000000;
  }
  puVar4[6] = uVar3;
  *param_4 = puVar4 + 8;
  puVar4[7] = (long)iVar5;
  return;
}

