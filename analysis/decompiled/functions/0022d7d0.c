/* Ghidra pseudocode. PS2 address: 0022d7d0. Not validated source. */

void FUN_0022d7d0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (0x11 < param_3) {
    if (((uint)param_1 & 0xf) != 0) {
      for (; ((uint)param_1 & 0xf) != 0; param_1 = (undefined8 *)((int)param_1 + 1)) {
        param_3 = param_3 + -1;
        uVar1 = *(undefined1 *)param_2;
        if (param_3 < 1) {
          return;
        }
        param_2 = (undefined8 *)((int)param_2 + 1);
        *(undefined1 *)param_1 = uVar1;
      }
    }
    if (((uint)param_2 & 0xf) == 0) {
      while (-1 < param_3 + -0x80) {
        uVar2 = *param_2;
        uVar3 = *(undefined4 *)(param_2 + 1);
        uVar4 = *(undefined4 *)((int)param_2 + 0xc);
        uVar5 = *(undefined4 *)(param_2 + 2);
        uVar6 = *(undefined4 *)((int)param_2 + 0x14);
        uVar7 = *(undefined4 *)(param_2 + 3);
        uVar8 = *(undefined4 *)((int)param_2 + 0x1c);
        uVar9 = *(undefined4 *)(param_2 + 4);
        uVar10 = *(undefined4 *)((int)param_2 + 0x24);
        uVar11 = *(undefined4 *)(param_2 + 5);
        uVar12 = *(undefined4 *)((int)param_2 + 0x2c);
        uVar13 = *(undefined4 *)(param_2 + 6);
        uVar14 = *(undefined4 *)((int)param_2 + 0x34);
        uVar15 = *(undefined4 *)(param_2 + 7);
        uVar16 = *(undefined4 *)((int)param_2 + 0x3c);
        *(int *)param_1 = (int)uVar2;
        *(int *)((int)param_1 + 4) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(param_1 + 1) = uVar3;
        *(undefined4 *)((int)param_1 + 0xc) = uVar4;
        *(undefined4 *)(param_1 + 2) = uVar5;
        *(undefined4 *)((int)param_1 + 0x14) = uVar6;
        *(undefined4 *)(param_1 + 3) = uVar7;
        *(undefined4 *)((int)param_1 + 0x1c) = uVar8;
        *(undefined4 *)(param_1 + 4) = uVar9;
        *(undefined4 *)((int)param_1 + 0x24) = uVar10;
        *(undefined4 *)(param_1 + 5) = uVar11;
        *(undefined4 *)((int)param_1 + 0x2c) = uVar12;
        *(undefined4 *)(param_1 + 6) = uVar13;
        *(undefined4 *)((int)param_1 + 0x34) = uVar14;
        *(undefined4 *)(param_1 + 7) = uVar15;
        *(undefined4 *)((int)param_1 + 0x3c) = uVar16;
        uVar2 = param_2[8];
        uVar3 = *(undefined4 *)(param_2 + 9);
        uVar4 = *(undefined4 *)((int)param_2 + 0x4c);
        uVar5 = *(undefined4 *)(param_2 + 10);
        uVar6 = *(undefined4 *)((int)param_2 + 0x54);
        uVar7 = *(undefined4 *)(param_2 + 0xb);
        uVar8 = *(undefined4 *)((int)param_2 + 0x5c);
        uVar9 = *(undefined4 *)(param_2 + 0xc);
        uVar10 = *(undefined4 *)((int)param_2 + 100);
        uVar11 = *(undefined4 *)(param_2 + 0xd);
        uVar12 = *(undefined4 *)((int)param_2 + 0x6c);
        uVar13 = *(undefined4 *)(param_2 + 0xe);
        uVar14 = *(undefined4 *)((int)param_2 + 0x74);
        uVar15 = *(undefined4 *)(param_2 + 0xf);
        uVar16 = *(undefined4 *)((int)param_2 + 0x7c);
        *(int *)(param_1 + 8) = (int)uVar2;
        *(int *)((int)param_1 + 0x44) = (int)((ulong)uVar2 >> 0x20);
        *(undefined4 *)(param_1 + 9) = uVar3;
        *(undefined4 *)((int)param_1 + 0x4c) = uVar4;
        *(undefined4 *)(param_1 + 10) = uVar5;
        *(undefined4 *)((int)param_1 + 0x54) = uVar6;
        *(undefined4 *)(param_1 + 0xb) = uVar7;
        *(undefined4 *)((int)param_1 + 0x5c) = uVar8;
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        *(undefined4 *)((int)param_1 + 100) = uVar10;
        *(undefined4 *)(param_1 + 0xd) = uVar11;
        *(undefined4 *)((int)param_1 + 0x6c) = uVar12;
        *(undefined4 *)(param_1 + 0xe) = uVar13;
        *(undefined4 *)((int)param_1 + 0x74) = uVar14;
        *(undefined4 *)(param_1 + 0xf) = uVar15;
        *(undefined4 *)((int)param_1 + 0x7c) = uVar16;
        param_2 = param_2 + 0x10;
        param_1 = param_1 + 0x10;
        param_3 = param_3 + -0x80;
      }
      while (-1 < param_3 + -8) {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        param_3 = param_3 + -8;
      }
    }
  }
  while (param_3 = param_3 + -1, -1 < param_3) {
    uVar1 = *(undefined1 *)param_2;
    param_2 = (undefined8 *)((int)param_2 + 1);
    *(undefined1 *)param_1 = uVar1;
    param_1 = (undefined8 *)((int)param_1 + 1);
  }
  return;
}

