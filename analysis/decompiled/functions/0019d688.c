/* Ghidra pseudocode. PS2 address: 0019d688. Not validated source. */

void FUN_0019d688(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *piVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uStack_11c0;
  undefined4 uStack_11bc;
  undefined4 uStack_11b8;
  undefined4 uStack_11b4;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  undefined4 uStack_11a8;
  undefined4 uStack_11a4;
  undefined8 auStack_11a0 [512];
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 *puStack_c0;
  undefined8 *puStack_bc;
  undefined1 *puStack_b8;
  
  iVar5 = (int)param_1;
  if (param_3 != 0) {
    iVar6 = *(int *)(iVar5 + 0x58);
    if (*(ushort *)(iVar6 + 0xc0) == 0xffff) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)((uint)*(ushort *)(iVar6 + 0xc0) * 8 + DAT_00299cd4);
    }
    if (*(int *)(iVar9 + 0x24) == 0) {
      bVar2 = false;
    }
    else {
      uStack_11c0 = *(undefined4 *)(iVar6 + 0xd0);
      uStack_11bc = *(undefined4 *)(iVar6 + 0xd4);
      uStack_11b8 = *(undefined4 *)(iVar6 + 0xd8);
      uStack_11b4 = 0x3f800000;
      uStack_11b0 = *(undefined4 *)(iVar6 + 0xdc);
      uStack_11ac = *(undefined4 *)(iVar6 + 0xe0);
      uStack_11a8 = *(undefined4 *)(iVar6 + 0xe4);
      uStack_11a4 = 0x3f800000;
      lVar4 = FUN_001be110(0x295e90,&uStack_11c0,&uStack_11b0);
      bVar2 = lVar4 != 1;
    }
    if (!bVar2) {
      return;
    }
  }
  iVar6 = 0x3f;
  puStack_bc = auStack_11a0;
  piVar1 = *(int **)(*(int *)(*(int *)(iVar5 + 0x58) + 0xcc) * 8 + DAT_00299ce0);
  piVar8 = piVar1 + 9;
  do {
    iVar6 = iVar6 + -1;
  } while (iVar6 != -1);
  iVar9 = 0;
  iVar6 = 0;
  if (0 < *piVar1) {
    puVar7 = auStack_11a0;
    do {
      if (*(int *)(*piVar8 + 0x1c) == 0) {
        *(undefined4 *)puVar7 = 0x3f800000;
        *(undefined4 *)(puVar7 + 2) = 0;
        *(undefined4 *)(puVar7 + 4) = 0;
        *(undefined4 *)(puVar7 + 6) = 0;
        *(undefined4 *)((int)puVar7 + 4) = 0;
        *(undefined4 *)((int)puVar7 + 0x14) = 0x3f800000;
        *(undefined4 *)((int)puVar7 + 0x24) = 0;
        *(undefined4 *)((int)puVar7 + 0x34) = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        *(undefined4 *)(puVar7 + 5) = 0x3f800000;
        *(undefined4 *)(puVar7 + 7) = 0;
        *(undefined4 *)((int)puVar7 + 0xc) = 0;
        *(undefined4 *)((int)puVar7 + 0x1c) = 0;
        *(undefined4 *)((int)puVar7 + 0x2c) = 0;
        *(undefined4 *)((int)puVar7 + 0x3c) = 0x3f800000;
      }
      else {
        puVar3 = (undefined8 *)FUN_0019e140(param_1,iVar9);
        iVar9 = iVar9 + 1;
        *puVar7 = *puVar3;
        puVar7[1] = puVar3[1];
        puVar7[2] = puVar3[2];
        puVar7[3] = puVar3[3];
        puVar7[4] = puVar3[4];
        puVar7[5] = puVar3[5];
        puVar7[6] = puVar3[6];
        puVar7[7] = puVar3[7];
      }
      iVar6 = iVar6 + 1;
      puVar7 = puVar7 + 8;
      piVar8 = piVar8 + 1;
    } while (iVar6 < *piVar1);
  }
  lVar4 = (**(code **)(*(int *)(iVar5 + 0x38) + 0x84))
                    (iVar5 + 0x30 + (int)*(short *)(*(int *)(iVar5 + 0x38) + 0x80));
  if (lVar4 == 0) {
    FUN_001cb238(0x2913b0,5,0);
    FUN_0011ed28(DAT_002c2ae8,0x295e90,0,2);
    FUN_001be6d8(0x295e90,piVar1,DAT_00299ce8,param_2,*(int *)(iVar5 + 0x58) + 0x40,puStack_bc,0);
    FUN_001cb238(0x2913b0,0,0);
    FUN_0011ed28(DAT_002c2aec,0x295e90,0,2);
  }
  else {
    iVar6 = (int)param_2;
    uStack_11b0 = *(undefined4 *)(iVar6 + 0x30);
    puStack_c0 = auStack_110;
    uStack_11ac = *(undefined4 *)(iVar6 + 0x34);
    puStack_b8 = auStack_e0;
    uStack_11a8 = *(undefined4 *)(iVar6 + 0x38);
    iVar5 = 2;
    uStack_11a4 = *(undefined4 *)(iVar6 + 0x3c);
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
    iVar5 = 2;
    do {
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
    FUN_0021d410(0x299cc8,&uStack_11b0,&uStack_11c0,auStack_120,auStack_f0);
    FUN_001bd888(auStack_1a0,&uStack_11c0,auStack_f0,auStack_120,puStack_b8,puStack_c0,auStack_d0,
                 auStack_100);
    FUN_001bda58(auStack_1a0,param_2);
    FUN_001cb238(0x2913b0,5,0);
    FUN_0011ed28(DAT_002c2af0,0x295e90,0,2);
    FUN_001be6d8(0x295e90,piVar1,DAT_00299ce8,param_2,auStack_1a0,puStack_bc,0);
    FUN_001cb238(0x2913b0,0,0);
    FUN_0011ed28(DAT_002c2af4,0x295e90,0,2);
  }
  return;
}

