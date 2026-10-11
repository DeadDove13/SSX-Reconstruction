/* Ghidra pseudocode. PS2 address: 00154f60. Not validated source. */

void FUN_00154f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar3 = FUN_00156b78();
  iVar5 = (int)param_1;
  piVar1 = *(int **)(iVar5 + iVar3 * 0x50 + 0x1520);
  iVar2 = *(int *)(*(int *)(iVar5 + iVar3 * 0x50 + 0x1524) + 0x14);
  if (iVar2 == 8) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_0027e0c0 + iVar2 * 0x10;
  }
  FUN_00156150(param_1,iVar5 + iVar3 * 0x50 + 0x1508,puVar4,
               *piVar1 * 0xdc + piVar1[5] * 0x14 + 0x27c920,param_3);
  return;
}

