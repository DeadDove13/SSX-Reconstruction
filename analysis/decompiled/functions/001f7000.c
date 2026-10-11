/* Ghidra pseudocode. PS2 address: 001f7000. Not validated source. */

void FUN_001f7000(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x30000;
  *(int *)(param_1 + 0x3201c) = *(int *)(param_1 + 0x3201c) + 1;
  iVar3 = *(int *)(param_1 + 0x3201c) * 0x18 + param_1;
  uVar5 = *(undefined8 *)(param_1 + 0x3200c);
  uVar4 = *(undefined8 *)(param_1 + 0x32014);
  *(undefined8 *)(iVar3 + 0x32020) = *(undefined8 *)(param_1 + 0x32004);
  *(undefined8 *)(iVar3 + 0x32028) = uVar5;
  *(undefined8 *)(iVar3 + 0x32030) = uVar4;
  iVar3 = *(int *)(param_1 + 0x3201c);
  iVar1 = *(int *)(param_1 + 0x3201c);
  iVar2 = *(int *)(param_1 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 4 + 0x2080) = 0;
  *(undefined4 *)(iVar6 + iVar3 * 4 + 0x2090) = 0;
  *(int *)(iVar6 + iVar1 * 4 + 0x20a0) = (int)*(char *)(iVar2 * 0x18 + param_1 + 0x32020);
  iVar3 = *(int *)(param_1 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 4 + 0x20b0) = 0;
  FUN_0025a60c(param_1 + iVar3 * 8 + 0x320c0,0,8);
  iVar3 = *(int *)(param_1 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 4 + 0x20e0) = 0;
  *(undefined4 *)(iVar6 + iVar3 * 4 + 0x20f0) = 0;
  iVar3 = *(int *)(param_1 + 0x3201c);
  iVar1 = *(int *)(param_1 + 0x3201c);
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 4 + 0x2100) = 0;
  *(undefined4 *)(iVar6 + iVar1 * 0x10 + 0x2124) = 0;
  *(undefined4 *)(iVar6 + iVar3 * 4 + 0x2110) = 0;
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 0x10 + 0x2120) = 100;
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 0x10 + 0x2128) = 0x5a;
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 0x10 + 0x212c) = 0x32;
  *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x3201c) * 4 + 0x51d0) = param_2;
  return;
}

