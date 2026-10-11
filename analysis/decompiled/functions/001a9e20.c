/* Ghidra pseudocode. PS2 address: 001a9e20. Not validated source. */

void FUN_001a9e20(int param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = DAT_002859e4;
  *(int *)(param_1 + 0xcc) = (int)param_2;
  *(int *)(param_1 + 0xd0) = (int)param_3;
  *(int *)(param_1 + 0xd4) = (int)param_4;
  *(int *)(param_1 + 0xd8) = (int)param_6;
  *(int *)(param_1 + 0xdc) = (int)param_5;
  uVar1 = *(undefined4 *)(iVar2 + 0x5c);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_001a0a88(0x3f800000,uVar1,param_2,0);
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_001a0a88(0x3f800000,uVar1,param_3,0);
  }
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_001a0a88(0x3f800000,uVar1,param_4,0);
    iVar4 = iVar4 + 0x28;
  }
  if (param_5 != 0) {
    iVar5 = FUN_001a0a88(0x3f800000,uVar1,param_5,0);
    iVar4 = iVar4 + 0x28 + iVar5;
  }
  if (param_6 != 0) {
    iVar5 = FUN_001a0a88(0x3f800000,uVar1,param_6,0);
    iVar4 = iVar4 + 0x28 + iVar5;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + 0xe4) = 0x428c0000;
  *(float *)(param_1 + 0xe0) = (float)iVar2 + 0.0 + 0.0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0x42c80000;
  }
  if (param_3 != 0) {
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 30.0;
  }
  *(float *)(param_1 + 0xe8) = (*(float *)(param_1 + 0xe0) - (float)iVar4) * 0.5;
  return;
}

