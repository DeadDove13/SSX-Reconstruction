/* Ghidra pseudocode. PS2 address: 0012b918. Not validated source. */

undefined8 FUN_0012b918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  FUN_00122180();
  iVar6 = (int)param_1;
  *(undefined **)(iVar6 + 8) = &DAT_002a9260;
  iVar4 = 1;
  do {
    iVar2 = 3;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    bVar1 = iVar4 != -1;
    iVar4 = iVar4 + -1;
  } while (bVar1);
  FUN_0012ba80(param_1);
  FUN_001978a0(param_3,iVar6 + 0x2c,0x24);
  iVar4 = 0;
  if (0 < *(int *)(iVar6 + 0x34)) {
    puVar5 = (undefined4 *)(iVar6 + 0x2f0);
    do {
      uVar3 = FUN_00197d48(param_3,param_3);
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar6 + 0x34);
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar6 + 0x38)) {
    puVar5 = (undefined4 *)(iVar6 + 0x300);
    do {
      uVar3 = FUN_00197d48(param_3,param_3);
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar6 + 0x38);
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar4 < iVar2);
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar6 + 0x3c)) {
    puVar5 = (undefined4 *)(iVar6 + 0x310);
    do {
      uVar3 = FUN_00197d48(param_3,param_3);
      iVar4 = iVar4 + 1;
      iVar2 = *(int *)(iVar6 + 0x3c);
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar4 < iVar2);
  }
  if (*(int *)(iVar6 + 0x40) != 0) {
    FUN_0012bce8(param_1);
  }
  return param_1;
}

