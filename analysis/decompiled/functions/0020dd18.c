/* Ghidra pseudocode. PS2 address: 0020dd18. Not validated source. */

undefined8 FUN_0020dd18(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  puVar9 = (undefined4 *)param_1;
  iVar6 = 7;
  puVar1 = param_2;
  puVar2 = puVar9;
  do {
    uVar5 = puVar1[2];
    uVar3 = *(undefined4 *)(puVar1 + 3);
    uVar4 = *(undefined4 *)((int)puVar1 + 0x1c);
    puVar2[4] = (int)uVar5;
    puVar2[5] = (int)((ulong)uVar5 >> 0x20);
    puVar2[6] = uVar3;
    puVar2[7] = uVar4;
    iVar6 = iVar6 + -1;
    puVar1 = puVar1 + 2;
    puVar2 = puVar2 + 4;
  } while (-1 < iVar6);
  uVar5 = param_2[0x12];
  uVar3 = *(undefined4 *)(param_2 + 0x13);
  uVar4 = *(undefined4 *)((int)param_2 + 0x9c);
  puVar9[0x24] = (int)uVar5;
  puVar9[0x25] = (int)((ulong)uVar5 >> 0x20);
  puVar9[0x26] = uVar3;
  puVar9[0x27] = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x1a);
  puVar9[0x39] = *(undefined4 *)((int)param_2 + 0xe4);
  puVar9[0x34] = uVar3;
  uVar3 = *(undefined4 *)((int)param_2 + 0xd4);
  puVar9[0x3a] = *(undefined4 *)(param_2 + 0x1d);
  puVar9[0x35] = uVar3;
  uVar3 = *(undefined4 *)(param_2 + 0x1b);
  puVar9[0x3b] = *(undefined4 *)((int)param_2 + 0xec);
  puVar9[0x36] = uVar3;
  uVar3 = *(undefined4 *)((int)param_2 + 0xdc);
  puVar9[0x3f] = *(undefined4 *)((int)param_2 + 0xfc);
  uVar4 = *(undefined4 *)((int)param_2 + 0xf4);
  uVar10 = *(undefined4 *)(param_2 + 0x20);
  puVar9[0x37] = uVar3;
  puVar9[0x3d] = uVar4;
  puVar9[0x40] = uVar10;
  uVar3 = *(undefined4 *)(param_2 + 0x1f);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar10 = *(undefined4 *)(param_2 + 0x1e);
  puVar9[0x41] = *(undefined4 *)((int)param_2 + 0x104);
  puVar9[0x38] = uVar4;
  puVar9[0x3c] = uVar10;
  puVar9[0x3e] = uVar3;
  uVar5 = param_2[0x22];
  uVar7 = param_2[0x23];
  uVar8 = param_2[0x24];
  *(undefined8 *)(puVar9 + 0x42) = param_2[0x21];
  *(undefined8 *)(puVar9 + 0x44) = uVar5;
  *(undefined8 *)(puVar9 + 0x46) = uVar7;
  *(undefined8 *)(puVar9 + 0x48) = uVar8;
  puVar9[0x4a] = *(undefined4 *)(param_2 + 0x25);
  uVar5 = *(undefined8 *)((int)param_2 + 0x134);
  uVar7 = *(undefined8 *)((int)param_2 + 0x13c);
  uVar8 = *(undefined8 *)((int)param_2 + 0x144);
  *(undefined8 *)(puVar9 + 0x4b) = *(undefined8 *)((int)param_2 + 300);
  *(undefined8 *)(puVar9 + 0x4d) = uVar5;
  *(undefined8 *)(puVar9 + 0x4f) = uVar7;
  *(undefined8 *)(puVar9 + 0x51) = uVar8;
  puVar9[0x53] = *(undefined4 *)((int)param_2 + 0x14c);
  puVar9[0x28] = puVar9 + 0x34;
  return param_1;
}

