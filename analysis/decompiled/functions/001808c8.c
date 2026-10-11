/* Ghidra pseudocode. PS2 address: 001808c8. Not validated source. */

void FUN_001808c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar1 = DAT_00295f50 * 0x30;
  fVar5 = (float)DAT_002915f0;
  fVar4 = (float)DAT_002915f4;
  *(undefined8 *)(&DAT_00295ec0 + iVar1) = *(undefined8 *)(&DAT_00295e90 + iVar1);
  *(undefined8 *)(&DAT_00295ec8 + iVar1) = *(undefined8 *)(&DAT_00295e98 + iVar1);
  *(undefined8 *)(&DAT_00295ed0 + iVar1) = *(undefined8 *)(&DAT_00295ea0 + iVar1);
  *(undefined8 *)(&DAT_00295ed8 + iVar1) = *(undefined8 *)(&DAT_00295ea8 + iVar1);
  *(undefined8 *)(&DAT_00295ee0 + iVar1) = *(undefined8 *)(&DAT_00295eb0 + iVar1);
  *(undefined8 *)(&DAT_00295ee8 + iVar1) = *(undefined8 *)(&DAT_00295eb8 + iVar1);
  uVar2 = DAT_002c2958;
  DAT_00295f50 = DAT_00295f50 + 1;
  uVar7 = DAT_002c2954;
  FUN_001319b0(0,0,fVar5,fVar4,0x295e90);
  uVar3 = DAT_002c2960;
  uVar6 = DAT_002c295c;
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
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  FUN_001a1260(0x440c0000,DAT_002c2964,*(int *)(param_1 + 0xb3c) + 0x400,0x2b2d28);
  fVar4 = (float)FUN_00218328(*(float *)(param_1 + 0xc98) * DAT_002c2968);
  fVar4 = fVar4 * 40.5;
  fVar5 = 540.0 - fVar4 * 0.5;
  FUN_0011ecd8(0x295e90,*(undefined4 *)(*(int *)(param_1 + 0xb3c) + 0x468),1);
  DAT_0028ad3c = 0;
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad34 = 0;
  DAT_0028ad38 = 0;
  FUN_0019fb08(fVar5 + 2.0,DAT_002c296c,fVar4,0x42340000,uVar7,uVar2,uVar6,uVar3,0x28ad30);
  DAT_0028ad30 = 0x3f800000;
  DAT_0028ad3c = 0x3f800000;
  DAT_0028ad34 = 0x3f800000;
  DAT_0028ad38 = 0x3f800000;
  FUN_0019fb08(fVar5,DAT_002c2970,fVar4,0x42340000,uVar7,uVar2,uVar6,uVar3,0x28ad30);
  FUN_00131848(0x295e90);
  return;
}

