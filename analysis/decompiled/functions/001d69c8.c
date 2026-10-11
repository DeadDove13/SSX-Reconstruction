/* Ghidra pseudocode. PS2 address: 001d69c8. Not validated source. */

void FUN_001d69c8(undefined4 param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x30) * 0xa0 + param_2;
  uVar1 = *param_3;
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar3 = *(undefined4 *)((int)param_3 + 0xc);
  *(int *)(iVar4 + 0x40) = (int)uVar1;
  *(int *)(iVar4 + 0x44) = (int)((ulong)uVar1 >> 0x20);
  *(undefined4 *)(iVar4 + 0x48) = uVar2;
  *(undefined4 *)(iVar4 + 0x4c) = uVar3;
  iVar4 = *(int *)(param_2 + 0x30) * 0xa0 + param_2;
  *(undefined8 *)(iVar4 + 0x50) = *param_4;
  *(undefined8 *)(iVar4 + 0x58) = param_4[1];
  *(undefined8 *)(iVar4 + 0x60) = param_4[2];
  *(undefined8 *)(iVar4 + 0x68) = param_4[3];
  *(undefined8 *)(iVar4 + 0x70) = param_4[4];
  *(undefined8 *)(iVar4 + 0x78) = param_4[5];
  *(undefined8 *)(iVar4 + 0x80) = param_4[6];
  *(undefined8 *)(iVar4 + 0x88) = param_4[7];
  iVar4 = *(int *)(param_2 + 0x30) * 0xa0 + param_2;
  *(undefined8 *)(iVar4 + 0x90) = *param_5;
  *(undefined8 *)(iVar4 + 0x98) = param_5[1];
  *(undefined8 *)(iVar4 + 0xa0) = param_5[2];
  *(undefined8 *)(iVar4 + 0xa8) = param_5[3];
  *(undefined8 *)(iVar4 + 0xb0) = param_5[4];
  *(undefined8 *)(iVar4 + 0xb8) = param_5[5];
  *(undefined8 *)(iVar4 + 0xc0) = param_5[6];
  *(undefined8 *)(iVar4 + 200) = param_5[7];
  iVar4 = *(int *)(param_2 + 0x30) * 0xa0 + param_2;
  *(undefined4 *)(iVar4 + 0xd4) = param_6;
  *(undefined4 *)(iVar4 + 0xd0) = param_1;
  *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + 1;
  return;
}

