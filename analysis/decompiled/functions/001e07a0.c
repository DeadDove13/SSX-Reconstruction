/* Ghidra pseudocode. PS2 address: 001e07a0. Not validated source. */

undefined8 FUN_001e07a0(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_00185ef0();
  iVar3 = 0xb;
  iVar5 = (int)param_1;
  *(undefined **)(iVar5 + 8) = &DAT_002b7af0;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  *(undefined4 *)(iVar5 + 0xc) = 0;
  iVar3 = 0xb;
  puVar1 = (undefined4 *)(iVar5 + 0xa60);
  do {
    *puVar1 = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar1 + -0x3c;
  } while (-1 < iVar3);
  puVar1 = (undefined4 *)FUN_0023a448(0x2b7ad8,64000,0);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0023bbd0(puVar1,0xffffffffdeadc0ed,64000);
  }
  iVar3 = 499;
  do {
    iVar3 = iVar3 + -1;
  } while (iVar3 != -1);
  *(undefined4 **)(iVar5 + 0xb50) = puVar1;
  *(undefined4 **)(iVar5 + 0xb58) = puVar1;
  *(undefined4 *)(iVar5 + 0xb54) = 500;
  iVar3 = 0x1f2;
  *(undefined4 *)(iVar5 + 0xb5c) = 0;
  *puVar1 = 0;
  puVar4 = puVar1;
  puVar2 = puVar1;
  do {
    puVar4 = puVar4 + 0x20;
    puVar2[1] = puVar4;
    iVar3 = iVar3 + -1;
    puVar2[0x20] = puVar2;
    puVar2 = puVar2 + 0x20;
  } while (-1 < iVar3);
  puVar1[0x3e61] = 0;
  return param_1;
}

