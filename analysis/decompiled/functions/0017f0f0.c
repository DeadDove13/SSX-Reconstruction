/* Ghidra pseudocode. PS2 address: 0017f0f0. Not validated source. */

void FUN_0017f0f0(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = &DAT_00284df0;
  iVar5 = 0;
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0xbac);
  while( true ) {
    uVar3 = iVar2 + iVar5;
    uVar1 = (int)uVar3 < 0x1f ^ 1;
    if (uVar1 != 0) {
      uVar3 = uVar3 - 0x1e;
    }
    iVar5 = iVar5 + 1;
    if ((*(uint *)(*(int *)(iVar4 + 0xc80) + 0xc + uVar1 * 4) & 1 << (uVar3 & 0x1f)) == 0) {
      FUN_0016eb08(param_1,*puVar6);
    }
    else {
      FUN_0016eae0(param_1,*puVar6);
    }
    puVar6 = puVar6 + 1;
    if (9 < iVar5) break;
    iVar2 = *(int *)(iVar4 + 0xbac);
  }
  return;
}

