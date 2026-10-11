/* Ghidra pseudocode. PS2 address: 00155010. Not validated source. */

void FUN_00155010(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar2 = FUN_00156b78();
  iVar4 = (int)param_1;
  iVar1 = *(int *)(*(int *)(iVar4 + iVar2 * 0x50 + 0x1524) + 0x14);
  if (iVar1 == 8) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = &DAT_0027e0c0 + iVar1 * 0x10;
  }
  FUN_00156150(param_1,iVar4 + iVar2 * 0x50 + 0x1508,puVar3,
               **(int **)(iVar4 + iVar2 * 0x50 + 0x1520) * 0xdc + param_3 * 0x14 + 0x27c920,param_4)
  ;
  return;
}

