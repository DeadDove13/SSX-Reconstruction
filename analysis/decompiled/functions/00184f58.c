/* Ghidra pseudocode. PS2 address: 00184f58. Not validated source. */

void FUN_00184f58(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  uVar4 = 0x3f800000;
  FUN_001319b0(0,0,(float)DAT_002915f0,(float)DAT_002915f4,0x295e90);
  iVar1 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295eb0 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295eb4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295ea4 + iVar1) = 0;
  *(undefined4 *)(&DAT_00295e90 + iVar1) = 1;
  *(undefined4 *)(&DAT_00295eb8 + iVar1) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar1) = 0x43f00000;
  *(undefined4 *)(&DAT_00295ea8 + iVar1) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar1),*(undefined4 *)(&DAT_00295e98 + iVar1),
               *(undefined4 *)(&DAT_00295e9c + iVar1),*(undefined4 *)(&DAT_00295ea0 + iVar1),0,
               0x447a0000,0,0,0x2913b0);
  uVar3 = DAT_002c2990;
  puVar2 = DAT_00296264;
  *(undefined4 *)DAT_00296264 = uVar4;
  *(undefined4 *)((int)puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  DAT_00292690 = *puVar2;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined4 *)(puVar2 + 6) = 0;
  *(undefined4 *)((int)puVar2 + 0x14) = uVar4;
  *(undefined4 *)((int)puVar2 + 0x24) = 0;
  *(undefined4 *)((int)puVar2 + 0x34) = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined4 *)(puVar2 + 5) = uVar4;
  *(undefined4 *)(puVar2 + 7) = 0;
  *(undefined4 *)((int)puVar2 + 0xc) = 0;
  *(undefined4 *)((int)puVar2 + 0x1c) = 0;
  *(undefined4 *)((int)puVar2 + 0x2c) = 0;
  *(undefined4 *)((int)puVar2 + 0x3c) = uVar4;
  DAT_00292698 = puVar2[1];
  DAT_002926a0 = puVar2[2];
  DAT_002926a8 = puVar2[3];
  DAT_002926b0 = puVar2[4];
  DAT_002926b8 = puVar2[5];
  DAT_002926c0 = puVar2[6];
  DAT_002926c8 = puVar2[7];
  DAT_00292770 = 0;
  FUN_0011ed28(uVar3,0x295e90,2,0);
  FUN_0011ed18(0x295e90,6);
  DAT_0028ad40 = DAT_002c2994;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecd8(0x295e90,*(undefined4 *)((int)param_1 + 0x38),1);
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  FUN_00168720(0x28ad30,&uStack_60);
  FUN_0019fb08(0,0,uVar4,uVar4,uVar4,uVar4,uVar4,uVar4,0x28ad30);
  FUN_00185320(param_1);
  FUN_001689a8(0x295e90);
  return;
}

