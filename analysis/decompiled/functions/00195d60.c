/* Ghidra pseudocode. PS2 address: 00195d60. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00195d9c) */

undefined4 FUN_00195d60(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  if (*(int *)(iVar5 + 0x30) == 0) {
    trap(7);
  }
  iVar4 = 0;
  piVar3 = (int *)(iVar5 + 0x392c);
  while ((*piVar3 == 0 || (lVar1 = FUN_00198208(), lVar1 == 0))) {
    iVar4 = iVar4 + 1;
    piVar3 = piVar3 + 1;
    if (3 < iVar4) {
      return 0;
    }
  }
  uVar2 = FUN_00193c38(param_1,1,*(undefined4 *)(iVar5 + 0x24),0);
  FUN_001983e8(*piVar3,uVar2);
  return 1;
}

