/* Ghidra pseudocode. PS2 address: 0020ef10. Not validated source. */

void FUN_0020ef10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  FUN_0020dcf8(*(int *)(iVar3 + 0xa0) != 0);
  iVar4 = (int)param_2;
  FUN_0020dcf8(*(int *)(iVar4 + 0xa0) != 0);
  if (*(int *)(*(int *)(iVar3 + 0xa0) + 8) == 0) {
    iVar2 = *(int *)(iVar4 + 0xa0);
  }
  else {
    uVar1 = FUN_0020dac0(param_1);
    *(undefined4 *)(*(int *)(iVar3 + 0xa0) + 0x28) = uVar1;
    iVar2 = *(int *)(iVar4 + 0xa0);
  }
  if (*(int *)(iVar2 + 8) == 0) {
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  else {
    uVar1 = FUN_0020dac0(param_1);
    *(undefined4 *)(*(int *)(iVar4 + 0xa0) + 0x28) = uVar1;
    iVar2 = *(int *)(iVar3 + 0xa0);
  }
  FUN_0020dcf8(*(int *)(iVar2 + 0x28) != 0);
  FUN_0020dcf8(*(int *)(*(int *)(iVar4 + 0xa0) + 0x28) != 0);
  FUN_0020eff0(param_1,param_2,iVar3 + 0x90,0,0,param_3,param_4);
  return;
}

