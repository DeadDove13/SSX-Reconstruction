/* Ghidra pseudocode. PS2 address: 00216b18. Not validated source. */

void FUN_00216b18(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)param_1;
  piVar4[0xf] = (int)((float)piVar4[0xf] + DAT_002c39f4);
  if (piVar4[0x11] == 0) {
    iVar5 = 0;
    piVar4[0x10] = (int)((float)piVar4[0x10] - DAT_002c39fc);
    bVar1 = (float)piVar4[0x10] < 0.0;
  }
  else {
    iVar5 = 0x3f800000;
    piVar4[0x10] = (int)((float)piVar4[0x10] + DAT_002c39f8);
    bVar1 = 1.0 < (float)piVar4[0x10];
  }
  if (bVar1) {
    piVar4[0x10] = iVar5;
  }
  lVar2 = FUN_001c3a08(0x2913b0);
  if (lVar2 == 0) {
    return;
  }
  iVar6 = 0x3f800000;
  FUN_001319b0(0,0,(float)DAT_002915f0,(float)DAT_002915f4,0x295e90);
  iVar5 = DAT_00295f50 * 0x30;
  *(undefined4 *)(&DAT_00295e90 + iVar5) = 1;
  *(undefined4 *)(&DAT_00295eb0 + iVar5) = 0;
  *(undefined4 *)(&DAT_00295eb4 + iVar5) = 0;
  *(undefined4 *)(&DAT_00295eb8 + iVar5) = 0x44200000;
  *(undefined4 *)(&DAT_00295ebc + iVar5) = 0x43f00000;
  *(undefined4 *)(&DAT_00295ea4 + iVar5) = 0;
  *(undefined4 *)(&DAT_00295ea8 + iVar5) = 0x447a0000;
  FUN_001c59c0(*(undefined4 *)(&DAT_00295e94 + iVar5),*(undefined4 *)(&DAT_00295e98 + iVar5),
               *(undefined4 *)(&DAT_00295e9c + iVar5),*(undefined4 *)(&DAT_00295ea0 + iVar5),0,
               0x447a0000,0,0,0x2913b0);
  piVar3 = DAT_00296264;
  *DAT_00296264 = iVar6;
  piVar3[1] = 0;
  piVar3[4] = 0;
  DAT_00292690 = *(undefined8 *)piVar3;
  piVar3[8] = 0;
  piVar3[0xc] = 0;
  piVar3[5] = iVar6;
  piVar3[9] = 0;
  piVar3[0xd] = 0;
  piVar3[2] = 0;
  piVar3[6] = 0;
  piVar3[10] = iVar6;
  piVar3[0xe] = 0;
  piVar3[3] = 0;
  piVar3[7] = 0;
  piVar3[0xb] = 0;
  piVar3[0xf] = iVar6;
  DAT_00292698 = *(undefined8 *)(piVar3 + 2);
  DAT_002926a0 = *(undefined8 *)(piVar3 + 4);
  DAT_002926a8 = *(undefined8 *)(piVar3 + 6);
  DAT_002926b0 = *(undefined8 *)(piVar3 + 8);
  DAT_002926b8 = *(undefined8 *)(piVar3 + 10);
  DAT_002926c0 = *(undefined8 *)(piVar3 + 0xc);
  DAT_002926c8 = *(undefined8 *)(piVar3 + 0xe);
  DAT_00292770 = 0;
  FUN_0011ed18(0x295e90,4);
  (**(code **)(*piVar4 + 0x24))((int)piVar4 + (int)*(short *)(*piVar4 + 0x20));
  FUN_0011ed18(0x295e90,6);
  DAT_0028ad30 = iVar6;
  DAT_0028ad34 = iVar6;
  DAT_0028ad38 = iVar6;
  DAT_0028ad3c = iVar6;
  FUN_001a1260(0x440c0000,0x43dc0000,piVar4 + 1,0x2bd810);
  FUN_00216e88((float)piVar4[0xf] * DAT_002c3a00,param_1);
  if (0.0 < (float)piVar4[0x10]) {
    FUN_0011ed18(0x295e90,0x13);
    FUN_0011ecd8(0x295e90,0xffffffffffffffff,1);
    DAT_0028ad30 = piVar4[0x10];
    piVar3 = piVar4 + 0x12;
    if (piVar4[0x11] != 0) {
      piVar3 = piVar4 + 0x16;
    }
    DAT_0028ad34 = piVar3[1];
    DAT_0028ad3c = piVar3[3];
    DAT_0028ad38 = piVar3[2];
    FUN_0019f6d8(0,0,0x44200000,0x43f00000,0x28ad30);
  }
  FUN_001689a8(0x295e90);
  return;
}

