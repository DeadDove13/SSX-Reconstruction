/* Ghidra pseudocode. PS2 address: 00193838. Not validated source. */

void FUN_00193838(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1;
  lVar3 = FUN_001937d8(param_1,piVar4[4]);
  if (lVar3 == 0) {
    lVar3 = FUN_001937d8(param_1,*(undefined4 *)(*piVar4 + 0x28));
    iVar2 = *(int *)((int)lVar3 + 0x28);
  }
  else {
    iVar2 = *(int *)((int)lVar3 + 0x28);
  }
  piVar4[4] = iVar2;
  iVar2 = *(int *)((int)lVar3 + 0x28);
  iVar1 = *(int *)(iVar2 + 0x30);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar2 + 0x28);
    iVar1 = *(int *)(iVar2 + 0x30);
  }
  FUN_001938b8(param_1);
  return;
}

