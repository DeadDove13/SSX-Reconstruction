/* Ghidra pseudocode. PS2 address: 0011eb00. Not validated source. */

void FUN_0011eb00(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *param_1;
  uVar3 = *(undefined4 *)(iVar1 + 0x82b4);
  uVar4 = *(undefined4 *)(iVar1 + 0x82b8);
  uVar5 = *(undefined4 *)(iVar1 + 0x82bc);
  *param_2 = *(undefined4 *)(iVar1 + 0x82b0);
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  iVar1 = *param_1;
  uVar3 = *(undefined4 *)(iVar1 + 0x82c4);
  uVar4 = *(undefined4 *)(iVar1 + 0x82c8);
  uVar5 = *(undefined4 *)(iVar1 + 0x82cc);
  param_2[4] = *(undefined4 *)(iVar1 + 0x82c0);
  param_2[5] = uVar3;
  param_2[6] = uVar4;
  param_2[7] = uVar5;
  iVar1 = *param_1;
  uVar2 = *(undefined8 *)(iVar1 + 0x82d0);
  uVar3 = *(undefined4 *)(iVar1 + 0x82d8);
  uVar4 = *(undefined4 *)(iVar1 + 0x82dc);
  param_2[8] = (int)uVar2;
  param_2[9] = (int)((ulong)uVar2 >> 0x20);
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  iVar1 = *param_1;
  uVar2 = *(undefined8 *)(iVar1 + 0x82e0);
  uVar3 = *(undefined4 *)(iVar1 + 0x82e8);
  uVar4 = *(undefined4 *)(iVar1 + 0x82ec);
  param_2[0xc] = (int)uVar2;
  param_2[0xd] = (int)((ulong)uVar2 >> 0x20);
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  return;
}

