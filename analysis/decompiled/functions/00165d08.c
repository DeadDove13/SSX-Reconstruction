/* Ghidra pseudocode. PS2 address: 00165d08. Not validated source. */

void FUN_00165d08(undefined8 param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = *(int *)(iVar3 + 0x488);
  if (iVar4 == 0) {
    iVar4 = *(int *)(iVar3 + 0x48c);
  }
  else {
    (**(code **)(*(int *)(iVar4 + 4) + 0x54))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x50));
    iVar4 = *(int *)(iVar3 + 0x488);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8),3);
    }
    *(undefined4 *)(iVar3 + 0x488) = 0;
    iVar4 = *(int *)(iVar3 + 0x48c);
  }
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 4) + 0x54))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 0x50));
    iVar4 = *(int *)(iVar3 + 0x48c);
    if (iVar4 != 0) {
      (**(code **)(*(int *)(iVar4 + 4) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 4) + 8),3);
    }
    *(undefined4 *)(iVar3 + 0x48c) = 0;
  }
  FUN_00167ef8(param_1);
  FUN_001f87f8(DAT_002c56e8);
  piVar2 = (int *)(iVar3 + 0x364);
  iVar4 = 1;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)piVar1 + (int)*(short *)(*piVar1 + 8),3);
    }
    iVar4 = iVar4 + -1;
    piVar2 = piVar2 + 1;
  } while (-1 < iVar4);
  FUN_00219f08(iVar3 + 0x28);
  FUN_00219f08(iVar3 + 0x10);
  FUN_001697f0(iVar3 + 0x4c8,2);
  FUN_001697f0(iVar3 + 0x498,2);
  FUN_001a0410(iVar3 + 0x434,2);
  FUN_001a0410(iVar3 + 0x400,2);
  FUN_001a0410(iVar3 + 0x3cc,2);
  FUN_001e9510(iVar3 + 0x40,2);
  FUN_00219e68(iVar3 + 0x28,2);
  FUN_00219e68(iVar3 + 0x10,2);
  if ((param_2 & 1) == 0) {
    return;
  }
  FUN_00103778(param_1);
  return;
}

