/* Ghidra pseudocode. PS2 address: 00147e10. Not validated source. */

void FUN_00147e10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uStack_70;
  undefined4 auStack_6c [3];
  
  iVar5 = (int)param_1;
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x1e4)) {
    puVar3 = (undefined4 *)(iVar5 + 0x224);
    uVar2 = *puVar3;
    while( true ) {
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 1;
      FUN_00147828(uVar2);
      if (*(int *)(iVar5 + 0x1e4) <= iVar4) break;
      uVar2 = *puVar3;
    }
  }
  FUN_001eab80(param_1,param_2);
  FUN_001978a0(param_2,iVar5 + 0x1d4,0x4c);
  iVar4 = 0;
  if (0 < *(int *)(iVar5 + 0x1e4)) {
    puVar3 = (undefined4 *)(iVar5 + 0x224);
    do {
      iVar4 = iVar4 + 1;
      FUN_001978a0(param_2,&uStack_70,4);
      FUN_001978a0(param_2,auStack_6c,4);
      uVar2 = FUN_001469b8(0x2795b8,auStack_6c[0],uStack_70);
      iVar1 = *(int *)(iVar5 + 0x1e4);
      *puVar3 = uVar2;
      puVar3 = puVar3 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}

