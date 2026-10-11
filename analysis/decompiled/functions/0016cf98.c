/* Ghidra pseudocode. PS2 address: 0016cf98. Not validated source. */

void FUN_0016cf98(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uStack_1510;
  undefined4 uStack_150c;
  undefined4 uStack_1508;
  undefined1 auStack_1500 [5136];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  
  fVar4 = (float)DAT_002915f4;
  uVar6 = 0x3f800000;
  fVar7 = (float)DAT_002915f0;
  FUN_001319b0(0,0,fVar7,fVar4,0x295e90);
  uVar5 = DAT_002c27e4;
  iVar3 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295e90 + iVar3) = 1;
  *(float *)(&DAT_00295eb0 + iVar3) = -fVar7 * 0.5;
  *(float *)(&DAT_00295eb4 + iVar3) = -fVar4 * 0.5;
  *(float *)(&DAT_00295eb8 + iVar3) = fVar7;
  *(float *)(&DAT_00295ebc + iVar3) = fVar4;
  *(undefined4 *)(&DAT_00295ea4 + iVar3) = uVar6;
  *(undefined4 *)(&DAT_00295ea8 + iVar3) = uVar5;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar3),*(undefined4 *)(&DAT_00295e98 + iVar3),
               *(undefined4 *)(&DAT_00295e9c + iVar3),*(undefined4 *)(&DAT_00295ea0 + iVar3),uVar6,
               uVar5,-fVar7 * 0.5,-fVar4 * 0.5,0x2913b0);
  puVar1 = DAT_00296264;
  *(undefined4 *)DAT_00296264 = uVar6;
  *(undefined4 *)((int)puVar1 + 4) = 0;
  *(undefined4 *)((int)puVar1 + 0x2c) = 0;
  DAT_00292690 = *puVar1;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((int)puVar1 + 0x14) = uVar6;
  *(undefined4 *)((int)puVar1 + 0x24) = 0;
  *(undefined4 *)((int)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)(puVar1 + 5) = uVar6;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((int)puVar1 + 0xc) = 0;
  *(undefined4 *)((int)puVar1 + 0x1c) = 0;
  *(undefined4 *)((int)puVar1 + 0x3c) = uVar6;
  DAT_00292698 = puVar1[1];
  DAT_002926a0 = puVar1[2];
  DAT_002926a8 = puVar1[3];
  DAT_002926b0 = puVar1[4];
  DAT_002926b8 = puVar1[5];
  DAT_002926c0 = puVar1[6];
  DAT_002926c8 = puVar1[7];
  DAT_00292770 = 0;
  uStack_1510 = uVar6;
  uStack_150c = uVar6;
  uStack_1508 = uVar6;
  FUN_00168720(0x28ad30,&uStack_1510);
  iVar3 = (int)param_1;
  if (*(int *)(iVar3 + 0x10) != 0) {
    FUN_0011ed18(0x295e90,0x12);
    uVar5 = 0x42540000;
    FUN_0019aa08(auStack_1500);
    FUN_0019ae30(auStack_1500);
    FUN_0019af18(auStack_1500,*(int *)(iVar3 + 0xb3c) + 0x400);
    FUN_0019af40(0xc2ca0000,0xc2400000,0x43630000,uVar5,auStack_1500);
    FUN_0019b0b8(uVar6,DAT_002c27e8,auStack_1500);
    uStack_dc = 0;
    uStack_e0 = 1;
    FUN_0019af58(auStack_1500,iVar3 + 0x18);
    FUN_0019b0e0(auStack_1500);
    lVar2 = FUN_0019b358(auStack_1500);
    if ((3 < lVar2) || (lVar2 = FUN_0019b388(auStack_1500), 0xef < lVar2)) {
      FUN_0019af40(0xc3160000,0xc2400000,0x43a50000,uVar5,auStack_1500);
      FUN_0019b0e0(auStack_1500);
    }
    FUN_0019ac28(auStack_1500);
    if (*(short *)(iVar3 + 0x498) == 0) {
      FUN_0019ae30(auStack_1500);
      FUN_0019af18(auStack_1500,*(int *)(iVar3 + 0xb3c) + 0x400);
      lVar2 = FUN_0016eb38(param_1,0x324);
      if (lVar2 == 0) {
        FUN_0019af40(0,0x41880000,0x427c0000,0x3f800000,auStack_1500);
      }
      else {
        FUN_0019af40(0x42700000,0x42000000,0x427c0000,0x3f800000,auStack_1500);
      }
      FUN_0019b0b8(0x3f800000,0x3f800000,auStack_1500);
      FUN_0019af58(auStack_1500,iVar3 + 0x418);
      uStack_dc = 1;
      uStack_e0 = 0;
      FUN_0019ac28(auStack_1500);
    }
    else {
      FUN_0019ae30(auStack_1500);
      FUN_0019af18(auStack_1500,*(int *)(iVar3 + 0xb3c) + 0x400);
      lVar2 = FUN_0016eb38(param_1,0x324);
      if (lVar2 == 0) {
        FUN_0019af40(0,0x41880000,0x427c0000,0x3f800000,auStack_1500);
      }
      else {
        FUN_0019af40(0x42700000,0x42000000,0x427c0000,0x3f800000,auStack_1500);
      }
      FUN_0019b0b8(0x3f800000,0x3f800000,auStack_1500);
      FUN_0019af58(auStack_1500,iVar3 + 0x418);
      uStack_dc = 1;
      uStack_e0 = 0;
      FUN_0019ac28(auStack_1500);
      FUN_0019ae30(auStack_1500);
      FUN_0019af18(auStack_1500,*(int *)(iVar3 + 0xb3c) + 0x400);
      lVar2 = FUN_0016eb38(param_1,0x324);
      if (lVar2 == 0) {
        FUN_0019af40(0,0x42080000,0x427c0000,0x3f800000,auStack_1500);
      }
      else {
        FUN_0019af40(0x42700000,0x42440000,0x427c0000,0x3f800000,auStack_1500);
      }
      FUN_0019b0b8(0x3f800000,0x3f800000,auStack_1500);
      FUN_0019af58(auStack_1500,iVar3 + 0x498);
      uStack_dc = 1;
      uStack_e0 = 0;
      FUN_0019ac28(auStack_1500);
    }
    FUN_0011ed18(0x295e90,0x10);
    FUN_0011ed48(0x295e90,3);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = DAT_002c27ec;
    DAT_0028ad3c = 0;
    DAT_0028ad34 = 0;
    DAT_0028ad38 = 0;
    FUN_0019f6d8(0xc3800000,0xc3600000,0x44000000,0x43e00000,0x28ad30);
    FUN_0019aa30(auStack_1500,2);
  }
  FUN_0016cc80(param_1);
  if (*(int *)(iVar3 + 0x518) != 0) {
    FUN_0011ed18(0x295e90,0x13);
    FUN_0019aa08(&uStack_1510);
    FUN_0019ae30(&uStack_1510);
    FUN_0019af18(&uStack_1510,*(int *)(iVar3 + 0xb3c) + 0x400);
    FUN_0019af40(0xc3090000,0xc20c0000,DAT_002c27f0,0x428c0000,&uStack_1510);
    FUN_0019b0b8(0x3f800000,0x3f800000,&uStack_1510);
    uStack_f0 = 1;
    uStack_ec = 0;
    FUN_0019af58(&uStack_1510,*(undefined4 *)(iVar3 + 0x51c));
    FUN_0019b0e0(&uStack_1510);
    FUN_0019ac28(&uStack_1510);
    FUN_0019aa30(&uStack_1510,2);
  }
  return;
}

