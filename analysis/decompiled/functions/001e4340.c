/* Ghidra pseudocode. PS2 address: 001e4340. Not validated source. */

void FUN_001e4340(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_00295f50 * 0x30;
  *(undefined8 *)(&DAT_00295ec0 + iVar1) = *(undefined8 *)(&DAT_00295e90 + iVar1);
  *(undefined8 *)(&DAT_00295ec8 + iVar1) = *(undefined8 *)(&DAT_00295e98 + iVar1);
  *(undefined8 *)(&DAT_00295ed0 + iVar1) = *(undefined8 *)(&DAT_00295ea0 + iVar1);
  *(undefined8 *)(&DAT_00295ed8 + iVar1) = *(undefined8 *)(&DAT_00295ea8 + iVar1);
  *(undefined8 *)(&DAT_00295ee0 + iVar1) = *(undefined8 *)(&DAT_00295eb0 + iVar1);
  *(undefined8 *)(&DAT_00295ee8 + iVar1) = *(undefined8 *)(&DAT_00295eb8 + iVar1);
  DAT_00295f50 = DAT_00295f50 + 1;
  iVar1 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295eb0 + iVar1) = 0;
  uVar3 = *(undefined4 *)(&DAT_00295eb0 + iVar1);
  *(undefined4 *)(&DAT_00295e90 + iVar1) = 1;
  *(undefined4 *)(&DAT_00295eb4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295eb8 + iVar1) = 0x44000000;
  *(undefined4 *)(&DAT_00295ebc + iVar1) = 0x43e00000;
  *(undefined4 *)(&DAT_00295ea4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295ea8 + iVar1) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar1),*(undefined4 *)(&DAT_00295e98 + iVar1),
               *(undefined4 *)(&DAT_00295e9c + iVar1),*(undefined4 *)(&DAT_00295ea0 + iVar1),uVar3,
               0x447a0000,uVar3,uVar3,0x2913b0);
  puVar2 = DAT_00296264;
  *(undefined4 *)((int)DAT_00296264 + 4) = 0;
  *(undefined4 *)puVar2 = 0x3f800000;
  *(undefined4 *)((int)puVar2 + 0x3c) = 0x3f800000;
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
  DAT_00292690 = *puVar2;
  DAT_00292698 = puVar2[1];
  DAT_002926a0 = puVar2[2];
  DAT_002926a8 = puVar2[3];
  DAT_002926b0 = puVar2[4];
  DAT_002926b8 = puVar2[5];
  DAT_002926c0 = puVar2[6];
  DAT_002926c8 = puVar2[7];
  DAT_00292770 = 0;
  return;
}

