/* Ghidra pseudocode. PS2 address: 001543f0. Not validated source. */

void FUN_001543f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(int *)(param_1 + 0x14ec) == 10) {
    *(undefined4 *)(param_1 + 0x14f0) = 6;
  }
  piVar5 = (int *)(param_1 + 0x1510);
  FUN_00156268(param_1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x1278)) {
    piVar3 = (int *)(param_1 + 0x127c);
    do {
      *piVar3 = iVar2;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 0x1a;
    } while (iVar2 < *(int *)(param_1 + 0x1278));
  }
  if (iVar2 < 6) {
    puVar4 = (undefined4 *)(iVar2 * 0x68 + 0x127c + param_1);
    do {
      *puVar4 = 0xffffffff;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 0x1a;
    } while (iVar2 < 6);
  }
  FUN_00154260(param_1);
  iVar2 = param_1;
  do {
    *piVar5 = (int)*(char *)(iVar2 + 0x1508);
    *(undefined8 *)(iVar2 + 0x1540) = *(undefined8 *)(iVar2 + 0x1528);
    *(undefined8 *)(iVar2 + 0x1548) = *(undefined8 *)(iVar2 + 0x1530);
    *(undefined8 *)(iVar2 + 0x1550) = *(undefined8 *)(iVar2 + 0x1538);
    piVar5 = piVar5 + 0x14;
    iVar2 = iVar2 + 0x50;
  } while ((int)piVar5 < param_1 + 0x1650);
  uVar1 = FUN_002109b0();
  *(undefined4 *)(param_1 + 0x14f8) = uVar1;
  uVar1 = FUN_002109b0();
  *(undefined4 *)(param_1 + 0x14f4) = uVar1;
  return;
}

