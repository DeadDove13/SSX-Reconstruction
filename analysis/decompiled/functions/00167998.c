/* Ghidra pseudocode. PS2 address: 00167998. Not validated source. */

void FUN_00167998(int param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  
  uVar4 = 0x43f00000;
  FUN_001319b0(0,0,0x44200000,0x43f00000,0x295e90);
  iVar1 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295eb0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295eb4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295eb8 + iVar1) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar1) = uVar4;
  *(undefined4 *)(&DAT_00295ea4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295e90 + iVar1) = 1;
  *(undefined4 *)(&DAT_00295ea8 + iVar1) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar1),*(undefined4 *)(&DAT_00295e98 + iVar1),
               *(undefined4 *)(&DAT_00295e9c + iVar1),*(undefined4 *)(&DAT_00295ea0 + iVar1),0,
               0x447a0000,0,0,0x2913b0);
  puVar2 = DAT_00296264;
  *(undefined4 *)((int)DAT_00296264 + 4) = 0;
  *(undefined4 *)puVar2 = 0x3f800000;
  *(undefined4 *)((int)puVar2 + 0x2c) = 0;
  DAT_00292690 = *puVar2;
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
  DAT_00292698 = puVar2[1];
  DAT_002926a0 = puVar2[2];
  DAT_002926a8 = puVar2[3];
  DAT_002926b0 = puVar2[4];
  DAT_002926b8 = puVar2[5];
  DAT_002926c0 = puVar2[6];
  DAT_002926c8 = puVar2[7];
  DAT_00292770 = 0;
  uStack_80 = 0x3f5c0000;
  uStack_7c = 0x3e200000;
  uStack_78 = 0x3d700000;
  FUN_00168720(0x28ad30,&uStack_80);
  uVar3 = FUN_00258948(*(undefined4 *)(param_1 + 0xc));
  FUN_001a0fc0(param_1 + 0x3cc,10,0x22,0x2b0178,uVar3);
  return;
}

