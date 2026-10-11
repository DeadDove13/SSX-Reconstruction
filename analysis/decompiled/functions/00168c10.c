/* Ghidra pseudocode. PS2 address: 00168c10. Not validated source. */

void FUN_00168c10(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = DAT_00296264;
  fVar11 = (float)DAT_002915f0;
  fVar12 = (float)DAT_002915f4;
  puVar1 = DAT_00296264 + 7;
  uVar10 = DAT_00296264[1];
  uVar9 = DAT_00296264[2];
  uVar5 = DAT_00296264[3];
  uVar6 = DAT_00296264[4];
  uVar7 = DAT_00296264[5];
  uVar8 = DAT_00296264[6];
  DAT_00296264[8] = *DAT_00296264;
  puVar3[0xf] = *puVar1;
  puVar3[9] = uVar10;
  puVar3[10] = uVar9;
  puVar3[0xb] = uVar5;
  puVar3[0xc] = uVar6;
  puVar3[0xd] = uVar7;
  puVar3[0xe] = uVar8;
  DAT_00296264 = DAT_00296264 + 8;
  DAT_00296260 = DAT_00296260 + 1;
  FUN_001319b0(0,0,fVar11,fVar12,0x295e90);
  uVar4 = DAT_002c279c;
  iVar2 = DAT_00295f50 * 0x30;
  *(float *)(&DAT_00295eb8 + iVar2) = fVar11;
  *(float *)(&DAT_00295ebc + iVar2) = fVar12;
  *(undefined4 *)(&DAT_00295ea4 + iVar2) = 0;
  *(undefined4 *)(&DAT_00295e90 + iVar2) = 1;
  *(float *)(&DAT_00295eb0 + iVar2) = -fVar11 * 0.5;
  *(float *)(&DAT_00295eb4 + iVar2) = -fVar12 * 0.5;
  *(undefined4 *)(&DAT_00295ea8 + iVar2) = uVar4;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar2),*(undefined4 *)(&DAT_00295e98 + iVar2),
               *(undefined4 *)(&DAT_00295e9c + iVar2),*(undefined4 *)(&DAT_00295ea0 + iVar2),0,uVar4
               ,-fVar11 * 0.5,-fVar12 * 0.5,0x2913b0);
  puVar1 = DAT_00296264;
  *(undefined4 *)((int)DAT_00296264 + 4) = 0;
  *(undefined4 *)puVar1 = 0x3f800000;
  *(undefined4 *)((int)puVar1 + 0x2c) = 0;
  *(undefined4 *)((int)puVar1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((int)puVar1 + 0x14) = 0x3f800000;
  *(undefined4 *)((int)puVar1 + 0x24) = 0;
  *(undefined4 *)((int)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 5) = 0x3f800000;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((int)puVar1 + 0xc) = 0;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0;
  DAT_00292690 = *puVar1;
  DAT_00292698 = puVar1[1];
  DAT_002926a0 = puVar1[2];
  DAT_002926a8 = puVar1[3];
  DAT_002926b0 = puVar1[4];
  DAT_002926b8 = puVar1[5];
  DAT_002926c0 = puVar1[6];
  DAT_002926c8 = puVar1[7];
  DAT_00292770 = 0;
  DAT_0028ad40 = DAT_002c27a0;
  return;
}

