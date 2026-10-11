/* Ghidra pseudocode. PS2 address: 0017a710. Not validated source. */

void FUN_0017a710(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 3;
  iVar4 = (int)param_1;
  piVar2 = (int *)(iVar4 + 0x68);
  *(undefined **)(iVar4 + 0x40) = &DAT_002b1578;
  do {
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x24) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x24) + 8),3);
      *piVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar3);
  iVar3 = *(int *)(iVar4 + 0x78);
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x24) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x24) + 8),3);
    *(undefined4 *)(iVar4 + 0x78) = 0;
  }
  FUN_001770a8(param_1,param_2);
  return;
}

