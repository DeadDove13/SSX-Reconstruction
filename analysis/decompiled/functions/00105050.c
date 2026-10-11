/* Ghidra pseudocode. PS2 address: 00105050. Not validated source. */

void FUN_00105050(int param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  *(int *)(param_1 + 0x6cc) = (int)param_2;
  *(int *)(param_1 + 0x390) = (int)param_2;
  uVar1 = *(undefined4 *)(param_3 + 0x28);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x148) = uVar1;
  *(int *)(param_1 + 0x394) = param_3;
  if (0 < *(int *)(param_1 + 0x6cdc)) {
    iVar5 = 0;
    iVar3 = *(int *)(param_1 + 0x6c50);
    while( true ) {
      iVar4 = iVar4 + 1;
      iVar3 = iVar5 + iVar3;
      iVar2 = *(int *)(iVar3 + 4);
      iVar5 = iVar5 + 0x14;
      (**(code **)(iVar2 + 0x14))(iVar3 + *(short *)(iVar2 + 0x10),param_2);
      if (*(int *)(param_1 + 0x6cdc) <= iVar4) break;
      iVar3 = *(int *)(param_1 + 0x6c50);
    }
  }
  return;
}

