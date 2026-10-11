/* Ghidra pseudocode. PS2 address: 00195458. Not validated source. */

int FUN_00195458(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_00195330();
  iVar1 = *(int *)(iVar2 + 0x2c);
  while (((iVar1 != 0 && (*(int *)(iVar1 + 0x30) != 0)) &&
         (lVar3 = FUN_001954c8(param_1,*(undefined4 *)((int)param_1 + 0x1c),iVar1), lVar3 == 0))) {
    iVar1 = *(int *)(iVar1 + 0x2c);
  }
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}

