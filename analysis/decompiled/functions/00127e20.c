/* Ghidra pseudocode. PS2 address: 00127e20. Not validated source. */

undefined8 FUN_00127e20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_00127240(param_1,param_2,0x10,param_3,param_4);
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  iVar1 = (int)param_4;
  uVar5 = *(undefined4 *)(iVar1 + 0x2c);
  uVar3 = *(undefined4 *)(iVar1 + 0x24);
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  iVar1 = (int)param_1;
  *(undefined **)(iVar1 + 8) = &DAT_002a9a98;
  *(undefined4 *)(iVar1 + 0x110) = uVar3;
  *(undefined4 *)(iVar1 + 0x114) = uVar4;
  *(undefined4 *)(iVar1 + 0x118) = uVar5;
  *(undefined4 *)(iVar1 + 0x11c) = 0;
  FUN_0023bbd0(iVar1 + 0x180,0,6);
  uVar3 = DAT_002c1b30;
  puVar2 = (undefined4 *)(iVar1 + 0x120);
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
    *puVar2 = uVar3;
    puVar2[1] = uVar3;
    puVar2[2] = uVar3;
    puVar2[3] = uVar3;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar1);
  return param_1;
}

