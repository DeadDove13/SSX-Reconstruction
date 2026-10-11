/* Ghidra pseudocode. PS2 address: 0022eb20. Not validated source. */

undefined8 FUN_0022eb20(undefined2 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  
  *(undefined1 *)((int)param_1 + 3) = 0x7f;
  *(undefined1 *)(param_1 + 2) = 0x40;
  puVar4 = param_1 + 6;
  *(undefined1 *)(param_1 + 4) = 8;
  puVar2 = (undefined4 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 1) = 0;
  puVar5 = (undefined4 *)(param_1 + 0x10);
  *param_1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x18);
  *(undefined1 *)((int)param_1 + 5) = 0;
  iVar3 = 3;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  do {
    *puVar5 = 0;
    iVar3 = iVar3 + -1;
    *puVar1 = 0;
    puVar5 = puVar5 + 1;
    puVar1 = puVar1 + 1;
  } while (-1 < iVar3);
  iVar3 = 1;
  do {
    *puVar4 = 0;
    iVar3 = iVar3 + -1;
    *puVar2 = 0;
    puVar4 = puVar4 + 1;
    puVar2 = puVar2 + 1;
  } while (-1 < iVar3);
  return 0;
}

