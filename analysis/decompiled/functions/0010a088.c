/* Ghidra pseudocode. PS2 address: 0010a088. Not validated source. */

void FUN_0010a088(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)((int)param_1 + 0x8584);
  uVar2 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 1);
  uVar4 = *(undefined4 *)((int)param_2 + 0xc);
  *(int *)(iVar1 + 0x510) = (int)uVar2;
  *(int *)(iVar1 + 0x514) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar1 + 0x518) = uVar3;
  *(undefined4 *)(iVar1 + 0x51c) = uVar4;
  uVar2 = param_2[2];
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((int)param_2 + 0x1c);
  *(int *)(iVar1 + 0x520) = (int)uVar2;
  *(int *)(iVar1 + 0x524) = (int)((ulong)uVar2 >> 0x20);
  *(undefined4 *)(iVar1 + 0x528) = uVar3;
  *(undefined4 *)(iVar1 + 0x52c) = uVar4;
  uVar3 = *(undefined4 *)((int)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((int)param_2 + 0x2c);
  *(undefined4 *)(iVar1 + 0x530) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(iVar1 + 0x534) = uVar3;
  *(undefined4 *)(iVar1 + 0x538) = uVar4;
  *(undefined4 *)(iVar1 + 0x53c) = uVar5;
  *(undefined4 *)(iVar1 + 0x540) = *(undefined4 *)(param_2 + 6);
  FUN_0010b330(param_1,0x14);
  FUN_0010b340(param_1,5);
  thunk_FUN_001f1b08(DAT_002c56e8,param_1);
  FUN_001f27c0(DAT_002c56e8,param_1);
  return;
}

