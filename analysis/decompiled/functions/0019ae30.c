/* Ghidra pseudocode. PS2 address: 0019ae30. Not validated source. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019ae30(int param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(undefined2 *)(param_1 + 0x200) = 0;
  *(undefined2 *)(param_1 + 0xa00) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(param_1 + 0x1420) = 0;
  iVar3 = 0x7f;
  *(undefined4 *)(param_1 + 0x1424) = 0;
  uVar1 = _DAT_002cc338;
  *(undefined8 *)(param_1 + 0x1430) = _DAT_002cc330;
  *(undefined8 *)(param_1 + 0x1438) = uVar1;
  *(undefined4 *)(param_1 + 0x1428) = 1;
  *(undefined4 *)(param_1 + 0x1410) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x1414) = 0x41100000;
  *(undefined4 *)(param_1 + 0x1418) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1404) = 0;
  *(undefined4 *)(param_1 + 0x1408) = 0;
  *(undefined4 *)(param_1 + 0x140c) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x141c) = 0;
  *(undefined4 *)(param_1 + 0x142c) = 0;
  *(undefined4 *)(param_1 + 0x1448) = 0;
  do {
    *puVar2 = 0;
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + -1;
  } while (-1 < iVar3);
  return;
}

