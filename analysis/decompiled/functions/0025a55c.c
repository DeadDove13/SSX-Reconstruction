/* Ghidra pseudocode. PS2 address: 0025a55c. Not validated source. */

undefined8 * FUN_0025a55c(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1;
  if ((0x1f < param_3) && ((((uint)param_2 | (uint)param_1) & 0xf) == 0)) {
    do {
      uVar2 = *param_2;
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((int)param_2 + 0xc);
      param_3 = param_3 - 0x20;
      *(int *)puVar5 = (int)uVar2;
      *(int *)((int)puVar5 + 4) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(puVar5 + 1) = uVar3;
      *(undefined4 *)((int)puVar5 + 0xc) = uVar4;
      uVar2 = param_2[2];
      uVar3 = *(undefined4 *)(param_2 + 3);
      uVar4 = *(undefined4 *)((int)param_2 + 0x1c);
      param_2 = param_2 + 4;
      *(int *)(puVar5 + 2) = (int)uVar2;
      *(int *)((int)puVar5 + 0x14) = (int)((ulong)uVar2 >> 0x20);
      *(undefined4 *)(puVar5 + 3) = uVar3;
      *(undefined4 *)((int)puVar5 + 0x1c) = uVar4;
      puVar5 = puVar5 + 4;
    } while (0x1f < param_3);
    for (; 7 < param_3; param_3 = param_3 - 8) {
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
    }
  }
  while (param_3 = param_3 - 1, param_3 != 0xffffffff) {
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)puVar5 = uVar1;
    puVar5 = (undefined8 *)((int)puVar5 + 1);
  }
  return param_1;
}

