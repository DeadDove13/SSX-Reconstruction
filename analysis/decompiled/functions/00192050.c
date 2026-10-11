/* Ghidra pseudocode. PS2 address: 00192050. Not validated source. */

void FUN_00192050(int param_1,int *param_2,long param_3,long param_4,long param_5,
                 undefined8 *param_6,undefined8 param_7)

{
  int iVar1;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  uStack_90 = *(undefined4 *)param_6;
  iStack_a0 = *param_2;
  uStack_88 = *(undefined4 *)(param_6 + 1);
  iStack_9c = param_2[1];
  iStack_98 = param_2[2];
  iStack_94 = param_2[3];
  uStack_8c = *(undefined4 *)((int)param_6 + 4);
  uStack_80 = *param_6;
  uStack_78 = uStack_88;
  FUN_001915b0(&iStack_a0,&uStack_80,1);
  FUN_00168720(0x28ad30,param_7);
  if (param_3 != 0) {
    FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x110) + 0x38),*param_2 + 10,
                 param_2[1] + 1,param_3);
  }
  if (param_4 != 0) {
    iVar1 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x110) + 0x38),
                         param_4,0);
    FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x110) + 0x38),
                 *param_2 + (param_2[2] - iVar1) / 2,param_2[1] + 1,param_4);
  }
  if (param_5 != 0) {
    iVar1 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x110) + 0x38),
                         param_5,0);
    FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x110) + 0x38),
                 *param_2 + (param_2[2] - iVar1) + -10,param_2[1] + 1,param_5);
  }
  return;
}

