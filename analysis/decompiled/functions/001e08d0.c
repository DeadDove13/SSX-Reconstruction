/* Ghidra pseudocode. PS2 address: 001e08d0. Not validated source. */

void FUN_001e08d0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_1;
  *(undefined **)(iVar5 + 8) = &DAT_002b7af0;
  uVar1 = *(undefined4 *)(iVar5 + 0xb5c);
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar4 = 0xb;
  iVar2 = *(int *)(iVar5 + 0xb50);
  puVar3 = (undefined4 *)(iVar5 + 0xa60);
  do {
    *puVar3 = 0;
    iVar4 = iVar4 + -1;
    puVar3 = puVar3 + -0x3c;
  } while (-1 < iVar4);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar5 + 0xb50) = 0;
  }
  else {
    FUN_00103710(iVar2,param_2,uVar1);
    *(undefined4 *)(iVar5 + 0xb50) = 0;
  }
  FUN_00185f70(param_1,param_2);
  return;
}

