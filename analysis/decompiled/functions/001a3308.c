/* Ghidra pseudocode. PS2 address: 001a3308. Not validated source. */

void FUN_001a3308(int param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  
  uVar1 = DAT_002913c4;
  iVar4 = DAT_00295f50 * 0x30;
  puVar6 = (undefined4 *)(param_1 + 0xc);
  iVar5 = 0xe;
  *(undefined8 *)(&DAT_00295ec0 + iVar4) = *(undefined8 *)(&DAT_00295e90 + iVar4);
  *(undefined8 *)(&DAT_00295ec8 + iVar4) = *(undefined8 *)(&DAT_00295e98 + iVar4);
  *(undefined8 *)(&DAT_00295ed0 + iVar4) = *(undefined8 *)(&DAT_00295ea0 + iVar4);
  *(undefined8 *)(&DAT_00295ed8 + iVar4) = *(undefined8 *)(&DAT_00295ea8 + iVar4);
  *(undefined8 *)(&DAT_00295ee0 + iVar4) = *(undefined8 *)(&DAT_00295eb0 + iVar4);
  *(undefined8 *)(&DAT_00295ee8 + iVar4) = *(undefined8 *)(&DAT_00295eb8 + iVar4);
  DAT_00295f50 = DAT_00295f50 + 1;
  iVar4 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295eb0 + iVar4) = 0;
  uVar7 = *(undefined4 *)(&DAT_00295eb0 + iVar4);
  *(undefined4 *)(&DAT_00295e90 + iVar4) = 1;
  *(undefined4 *)(&DAT_00295eb4 + iVar4) = 0;
  *(undefined4 *)(&DAT_00295eb8 + iVar4) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar4) = 0x43f00000;
  *(undefined4 *)(&DAT_00295ea4 + iVar4) = 0;
  *(undefined4 *)(&DAT_00295ea8 + iVar4) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar4),*(undefined4 *)(&DAT_00295e98 + iVar4),
               *(undefined4 *)(&DAT_00295e9c + iVar4),*(undefined4 *)(&DAT_00295ea0 + iVar4),uVar7,
               0x447a0000,uVar7,uVar7,0x2913b0);
  puVar2 = DAT_00296264;
  *(undefined4 *)((int)DAT_00296264 + 4) = 0;
  *(undefined4 *)puVar2 = 0x3f800000;
  *(undefined4 *)((int)puVar2 + 0x3c) = 0x3f800000;
  DAT_00292690 = *puVar2;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)((int)puVar2 + 0x14) = 0x3f800000;
  *(undefined4 *)((int)puVar2 + 0x24) = 0;
  *(undefined4 *)((int)puVar2 + 0x34) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 5) = 0x3f800000;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined4 *)((int)puVar2 + 0xc) = 0;
  *(undefined4 *)((int)puVar2 + 0x1c) = 0;
  *(undefined4 *)((int)puVar2 + 0x2c) = 0;
  DAT_00292698 = puVar2[1];
  DAT_002926a0 = puVar2[2];
  DAT_002926a8 = puVar2[3];
  DAT_002926b0 = puVar2[4];
  DAT_002926b8 = puVar2[5];
  DAT_002926c0 = puVar2[6];
  DAT_002926c8 = puVar2[7];
  DAT_00292770 = 0;
  FUN_0011ed48(0x295e90,0);
  DAT_0028ad40 = DAT_002c2b18;
  FUN_0011ed38(0x295e90,1);
  FUN_0011ed28(DAT_002c2b1c,0x295e90,2,2);
  puVar3 = puVar6;
  do {
    FUN_0011ed18(0x295e90,4);
    iVar5 = iVar5 + -1;
    uVar7 = *puVar3;
    puVar3 = puVar3 + 1;
    FUN_001a3950(uVar7);
  } while (-1 < iVar5);
  iVar4 = 0xe;
  do {
    FUN_0011ed18(0x295e90,9);
    iVar4 = iVar4 + -1;
    uVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    FUN_001a3b38(uVar7);
  } while (-1 < iVar4);
  FUN_00131848(0x295e90);
  FUN_0011ed28(DAT_002c2b20,0x295e90,1,2);
  FUN_0011ed38(0x295e90,0);
  FUN_0011ed18(0x295e90,uVar1);
  return;
}

