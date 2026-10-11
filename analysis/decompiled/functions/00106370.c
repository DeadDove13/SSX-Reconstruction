/* Ghidra pseudocode. PS2 address: 00106370. Not validated source. */

void FUN_00106370(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iStack_60;
  int iStack_5c;
  short sStack_50;
  short sStack_4e;
  
  FUN_001978a0(param_2,*param_1 + 0x10,0x380);
  FUN_001978a0(param_2,&iStack_60,8);
  if (iStack_60 != 0) {
    FUN_0014bf88(*(undefined4 *)(*param_1 + 0x6cf4),param_2);
  }
  iVar1 = *param_1;
  if (iStack_5c != 0) {
    FUN_0014bf88(*(undefined4 *)(iVar1 + 0x6cf8),param_2);
    iVar1 = *param_1;
  }
  FUN_0010e648(iVar1 + 0x8300,param_2);
  FUN_00138488(*param_1 + 0x8370,param_2);
  FUN_0010ddd0(*param_1 + 0x354);
  FUN_0013f598(param_1 + 0x120,param_2);
  FUN_001409d8(param_1 + 300,param_2);
  FUN_001416d0(param_1 + 0x130,param_2);
  FUN_001455d8(param_1 + 0x13c,param_2);
  FUN_00145b88(param_1 + 0x17c,param_2);
  FUN_00139270(param_1 + 0x184,param_2);
  FUN_00138dc8(param_1 + 0x18c,param_2);
  FUN_0013d748(param_1 + 0x19c,param_2);
  FUN_0013a828(param_1 + 0x1a8,param_2);
  FUN_00139d20(param_1 + 0x1bc,param_2);
  FUN_0013ade0(param_1 + 0x1c0,param_2);
  FUN_0013a2f0(param_1 + 0x1c4,param_2);
  FUN_0013e4f0(param_1 + 0x1cc,param_2);
  FUN_0013bda8(param_1 + 0x1d4,param_2);
  FUN_0013cb48(param_1 + 0x1f8,param_2);
  FUN_0013da20(param_1 + 0x214,param_2);
  FUN_001978a0(param_2,&sStack_50,4);
  iVar1 = *param_1;
  *(int *)(iVar1 + 0x82f0) = DAT_0028acfc + sStack_50 * 0x3c;
  *(int *)(iVar1 + 0x82f4) = DAT_0028ad04 + sStack_4e * 0x3c;
  return;
}

