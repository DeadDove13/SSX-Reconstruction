/* Ghidra pseudocode. PS2 address: 00173700. Not validated source. */

void FUN_00173700(float param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = (int)param_2;
  iVar4 = *(int *)(iVar3 + 0x2c);
  if (*(int *)(iVar3 + 0x2c) == 0) {
    iVar4 = param_3;
  }
  iVar2 = *(int *)(iVar3 + 0x28);
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = param_3;
  }
  iVar5 = (int)(param_1 * 0.5 * (float)(*(int *)(param_3 + 0xc) - *(int *)(iVar4 + 0xc)));
  FUN_00173278(param_2);
  if (*(int *)(iVar3 + 0x30) != 0) {
    iVar1 = FUN_001a0840(0x3f800000,iVar2,0x2c4938,0);
    FUN_00172dd0(param_1,param_2,iVar4,(int)((float)param_4 + (float)iVar1 * param_1),
                 param_5 + iVar5,*(undefined4 *)(iVar3 + 0x30),0);
  }
  if (*(int *)(iVar3 + 0x34) != 0) {
    iVar2 = FUN_001a0840(0x3f800000,iVar2,0x2c4938,0);
    FUN_00172ef0(param_1,param_2,iVar4,(int)((float)param_4 + (float)iVar2 * param_1),
                 param_5 + iVar5,*(undefined4 *)(iVar3 + 0x34),0);
    return;
  }
  return;
}

