/* Ghidra pseudocode. PS2 address: 001844e8. Not validated source. */

void FUN_001844e8(undefined8 param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  
  FUN_001839d0(0x2852f8,1);
  iVar4 = (int)param_1;
  if (*(int *)(iVar4 + 0x34) == 0) {
    iVar5 = 0;
    iVar2 = 0;
    while (iVar2 == 0) {
      lVar3 = FUN_00182580(0x285290);
      if (lVar3 == 0) {
        if (*(int *)(iVar4 + 0x34) != 0) break;
        iVar2 = 0;
        if (iVar5 != 0) {
          lVar3 = FUN_001c3a08(0x2913b0);
          iVar2 = *(int *)(iVar4 + 0x34);
          if (lVar3 != 0) {
            if (iVar2 != 0) break;
            FUN_00184f58(param_1);
            if (*(int *)(iVar4 + 0x34) != 0) break;
            iVar5 = 0;
            iVar2 = 0;
          }
        }
      }
      else {
        iVar5 = iVar5 + 1;
        FUN_00184848(param_1);
        iVar2 = *(int *)(iVar4 + 0x34);
      }
    }
  }
  do {
    lVar3 = FUN_001c3a08(0x2913b0);
  } while (lVar3 == 0);
  FUN_001319b0(0,0,(float)DAT_002915f0,(float)DAT_002915f4,0x295e90);
  uVar6 = 0x43f00000;
  iVar4 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295e90 + iVar4) = 1;
  *(undefined4 *)(&DAT_00295eb0 + iVar4) = 0;
  *(undefined4 *)(&DAT_00295eb4 + iVar4) = 0;
  *(undefined4 *)(&DAT_00295eb8 + iVar4) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar4) = 0x43f00000;
  *(undefined4 *)(&DAT_00295ea4 + iVar4) = 0;
  *(undefined4 *)(&DAT_00295ea8 + iVar4) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar4),*(undefined4 *)(&DAT_00295e98 + iVar4),
               *(undefined4 *)(&DAT_00295e9c + iVar4),*(undefined4 *)(&DAT_00295ea0 + iVar4),0,
               0x447a0000,0,0,0x2913b0);
  puVar1 = DAT_00296264;
  *(undefined4 *)((int)DAT_00296264 + 4) = 0;
  *(undefined4 *)puVar1 = 0x3f800000;
  *(undefined4 *)((int)puVar1 + 0x3c) = 0x3f800000;
  DAT_00292690 = *puVar1;
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
  *(undefined4 *)((int)puVar1 + 0x2c) = 0;
  DAT_00292698 = puVar1[1];
  DAT_002926a0 = puVar1[2];
  DAT_002926a8 = puVar1[3];
  DAT_002926b0 = puVar1[4];
  DAT_002926b8 = puVar1[5];
  DAT_002926c0 = puVar1[6];
  DAT_002926c8 = puVar1[7];
  DAT_00292770 = 0;
  FUN_0011ed28(DAT_002c2988,0x295e90,2,0);
  FUN_0011ed18(0x295e90,6);
  DAT_0028ad40 = DAT_002c298c;
  FUN_0011ed48(0x295e90,3);
  FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  FUN_00168720(0x28ad30,&uStack_a0);
  FUN_0019f6d8(0,0,0x44200000,uVar6,0x28ad30);
  FUN_001689a8(0x295e90);
  do {
    lVar3 = FUN_001c3a58(0x2913b0);
  } while (lVar3 == 0);
  FUN_001839d0(0x2852f8,0);
  return;
}

