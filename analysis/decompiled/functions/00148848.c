/* Ghidra pseudocode. PS2 address: 00148848. Not validated source. */

void FUN_00148848(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_60 [4];
  
  FUN_001978a0(param_2,aiStack_60,4);
  iVar4 = 0;
  if (0 < aiStack_60[0]) {
    do {
      iVar4 = iVar4 + 1;
      uVar2 = (**(code **)(*(int *)(param_1 + 0x3b0) + 0xc))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x3b0) + 8));
      iVar3 = (int)uVar2;
      (**(code **)(*(int *)(iVar3 + 0x1d0) + 0x24))
                (iVar3 + *(short *)(*(int *)(iVar3 + 0x1d0) + 0x20),param_2);
      iVar1 = *(int *)(*(int *)(param_1 + 0x3ac) + 0x3d4);
      (**(code **)(iVar1 + 0xc))(*(int *)(param_1 + 0x3ac) + (int)*(short *)(iVar1 + 8),uVar2);
      *(int *)(iVar3 + 0x30) = param_1;
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0x34);
      *(int *)(*(int *)(param_1 + 0x34) + 0x30) = iVar3;
      *(int *)(param_1 + 0x34) = iVar3;
    } while (iVar4 < aiStack_60[0]);
  }
  return;
}

