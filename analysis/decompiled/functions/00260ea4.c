/* Ghidra pseudocode. PS2 address: 00260ea4. Not validated source. */

undefined8 * FUN_00260ea4(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  
  if ((param_2 < param_1) && (puVar7 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar7)) {
    puVar2 = (undefined1 *)((int)param_1 + param_3);
    iVar6 = param_3 - 1;
    if (iVar6 != -1) {
      do {
        puVar7 = (undefined8 *)((int)puVar7 + -1);
        puVar2 = puVar2 + -1;
        iVar6 = iVar6 + -1;
        *puVar2 = *(undefined1 *)puVar7;
      } while (iVar6 != -1);
      return param_1;
    }
  }
  else {
    puVar7 = param_1;
    if (param_3 < 0x20) {
      iVar6 = param_3 - 1;
    }
    else if ((((uint)param_2 | (uint)param_1) & 0xf) == 0) {
      do {
        uVar3 = *param_2;
        uVar4 = *(undefined4 *)(param_2 + 1);
        uVar5 = *(undefined4 *)((int)param_2 + 0xc);
        param_3 = param_3 - 0x20;
        *(int *)puVar7 = (int)uVar3;
        *(int *)((int)puVar7 + 4) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 1) = uVar4;
        *(undefined4 *)((int)puVar7 + 0xc) = uVar5;
        uVar3 = param_2[2];
        uVar4 = *(undefined4 *)(param_2 + 3);
        uVar5 = *(undefined4 *)((int)param_2 + 0x1c);
        param_2 = param_2 + 4;
        *(int *)(puVar7 + 2) = (int)uVar3;
        *(int *)((int)puVar7 + 0x14) = (int)((ulong)uVar3 >> 0x20);
        *(undefined4 *)(puVar7 + 3) = uVar4;
        *(undefined4 *)((int)puVar7 + 0x1c) = uVar5;
        puVar7 = puVar7 + 4;
      } while (0x1f < param_3);
      for (; 7 < param_3; param_3 = param_3 - 8) {
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *puVar7 = uVar3;
        puVar7 = puVar7 + 1;
      }
      iVar6 = param_3 - 1;
    }
    else {
      iVar6 = param_3 - 1;
    }
    for (; iVar6 != -1; iVar6 = iVar6 + -1) {
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)puVar7 = uVar1;
      puVar7 = (undefined8 *)((int)puVar7 + 1);
    }
  }
  return param_1;
}

