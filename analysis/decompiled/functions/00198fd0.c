/* Ghidra pseudocode. PS2 address: 00198fd0. Not validated source. */

void FUN_00198fd0(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)param_1;
  iVar1 = *(int *)(iVar6 + 0x5d70);
  uVar2 = FUN_00198af0();
  *(undefined4 *)(iVar6 + 0x5d8c) = uVar2;
  *(undefined4 *)(iVar1 + 4) = uVar2;
  uVar2 = FUN_00195598(param_1);
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  uVar2 = *(undefined4 *)(iVar6 + 0x30);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar6 + 0x38);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  iVar5 = DAT_002859e4;
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar6 + 0x24);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar6 + 0x28);
  puVar4 = (undefined4 *)(iVar1 + 0x24);
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x80);
  iVar5 = 3;
  *(undefined4 *)(iVar1 + 8) = 0x12300003;
  puVar3 = (undefined4 *)(iVar6 + 0x394c);
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(iVar6 + 0x1c);
  do {
    uVar2 = *puVar3;
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + 1;
    *puVar4 = uVar2;
    puVar4 = puVar4 + 1;
  } while (-1 < iVar5);
  *(undefined4 *)(iVar6 + 0x5d74) = 0;
  *(undefined4 *)(iVar6 + 0x5d78) = 0;
  *(int *)(iVar6 + 0x5d7c) = *(int *)(iVar6 + 0x5d7c) + 1;
  return;
}

