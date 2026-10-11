/* Ghidra pseudocode. PS2 address: 0023acc8. Not validated source. */

undefined4
FUN_0023acc8(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined4 param_5,
            int param_6,undefined8 param_7,long param_8,undefined8 param_9,int param_10,int param_11
            ,undefined4 param_12)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_1b0 [256];
  undefined4 uStack_b0;
  int iStack_ac;
  
  iVar10 = (int)param_7;
  puVar9 = (undefined2 *)param_3;
  puVar6 = (undefined4 *)(puVar9 + 0x10);
  puVar3 = (undefined4 *)((int)puVar6 + param_6 + 0x5f + iVar10 & -param_6);
  uVar7 = param_1 | 0x200;
  if (param_8 == 0) {
    uVar7 = param_1;
  }
  puVar12 = puVar3 + -4;
  if (param_10 != 0) {
    uVar7 = uVar7 | 0x100;
  }
  puVar8 = (undefined2 *)((int)puVar9 + (param_4 - (iVar10 + 0x30)));
  puVar11 = puVar9 + 8;
  uStack_b0 = param_5;
  iStack_ac = param_6;
  FUN_0025b630(auStack_1b0,0x2c5a10,param_2);
  FUN_0023abc0(param_3,auStack_1b0,0x40,param_7,uVar7 | 0x8000,0,puVar12);
  FUN_0023abc0(puVar12,0,(int)puVar8 + (-0x10 - (int)puVar12),param_7,uVar7,param_3,puVar8);
  FUN_0025b630(auStack_1b0,0x2c5a18,param_2);
  FUN_0023abc0(puVar8,auStack_1b0,0,param_7,uVar7 | 0x8010,puVar12,0);
  (&DAT_002a33c8)[(uint)param_1 & 0xf] = puVar11;
  FUN_0023bbd0(puVar11,0,0x40);
  FUN_0025bbe4(puVar11,param_2);
  *puVar9 = 0x4253;
  iVar2 = puVar3[-2];
  *puVar8 = 0x4253;
  *(undefined4 **)(puVar9 + 0x18) = puVar6;
  *(undefined4 **)(puVar9 + 0x1a) = puVar6;
  puVar9[0x10] = 0x4253;
  *(undefined4 *)(puVar9 + 0x12) = 0x7fffffff;
  puVar5 = *(undefined4 **)(puVar9 + 0x18);
  *(undefined4 *)(puVar9 + 0x1c) = uStack_b0;
  *(int *)(puVar9 + 0x20) = iVar10;
  *(int *)(puVar9 + 0x1e) = iStack_ac;
  *(int *)(puVar9 + 0x22) = (int)uVar7;
  *(undefined2 **)(puVar9 + 0xc) = puVar9;
  *(undefined4 *)(puVar9 + 0x26) = param_12;
  *(undefined2 **)(puVar9 + 0xe) = puVar8;
  *(undefined4 *)(puVar9 + 0x24) = 0;
  if ((undefined4 *)((int)puVar5 + ((uint)(*(int *)(puVar9 + 0x1a) - (int)puVar5) >> 1)) < puVar12)
  {
    uVar1 = *(ushort *)((int)puVar3 + -0xe);
    do {
      puVar6 = (undefined4 *)puVar6[5];
    } while (puVar12 < puVar6);
    puVar5 = (undefined4 *)puVar6[4];
  }
  else {
    uVar1 = *(ushort *)((int)puVar3 + -0xe);
    for (; puVar5 < puVar12; puVar5 = (undefined4 *)puVar5[4]) {
    }
    puVar6 = (undefined4 *)puVar5[5];
  }
  *puVar3 = puVar5;
  puVar3[1] = puVar6;
  puVar6[4] = puVar12;
  puVar3[-3] = (iVar2 - (int)puVar12) + -0x10;
  *(ushort *)((int)puVar3 + -0xe) = uVar1 | 0x4000;
  *(undefined2 *)puVar12 = 0x4246;
  puVar5[5] = puVar12;
  if (param_11 == 0) {
    uVar4 = puVar3[-3];
  }
  else {
    uVar4 = FUN_0023ee10();
    *(undefined4 *)(puVar9 + 0x24) = uVar4;
    uVar4 = puVar3[-3];
  }
  return uVar4;
}

