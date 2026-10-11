/* Ghidra pseudocode. PS2 address: 00124210. Not validated source. */

void FUN_00124210(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 auStack_60 [4];
  
  FUN_001861f0();
  iVar1 = DAT_00299cf4;
  *(undefined4 *)(param_1 + 0x30) = 0xb0;
  *(undefined4 *)(param_1 + 0x34) = 0xdeadbf01;
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) - iVar1;
  FUN_001973f0(param_2,param_1 + 0x30,0xb0);
  *(int *)(param_1 + 0xc0) = DAT_00299cf4 + *(int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0xe8) == 0) {
    auStack_60[0] = 0xffffffff;
  }
  else {
    auStack_60[0] = *(undefined4 *)(*(int *)(param_1 + 0xe8) + 0x390);
  }
  FUN_001973f0(param_2,auStack_60,4);
  FUN_00197db8(param_2,*(undefined4 *)(param_1 + 0xe4),param_2);
  return;
}

