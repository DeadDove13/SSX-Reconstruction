
void FUN_0012cc40(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  short *in_v0_lo;
  int iVar5;
  int iVar6;
  int iVar7;
  short *unaff_s1_lo;
  int unaff_s3_lo;
  int unaff_s5_lo;
  int unaff_s6_lo;
  int unaff_s8_lo;
  undefined4 uStack00000000;
  
  while( true ) {
    *(undefined4 *)(unaff_s5_lo + 0x34) = *(undefined4 *)(in_v0_lo + 2);
    *(undefined4 *)(unaff_s5_lo + 0x38) = *(undefined4 *)(in_v0_lo + 4);
    *(undefined4 *)(unaff_s5_lo + 0x3c) = *(undefined4 *)(in_v0_lo + 6);
    uStack00000000 =
         *(undefined4 *)(unaff_s1_lo[1] * 4 + *(int *)(*unaff_s1_lo * 4 + param_3) + 0x14);
    iVar5 = FUN_002237f8();
    iVar5 = *(int *)(*(int *)(iVar5 + 0xcc) * 8 + *(int *)(unaff_s3_lo + 0x18));
    iVar7 = *(int *)(unaff_s3_lo + 0x20);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x24) + 0x24);
    iVar6 = FUN_00223350();
    iVar2 = *(int *)(unaff_s3_lo + 0x20);
    iVar3 = *(int *)(*(int *)(iVar5 + 0x28) + 0x24);
    *(undefined2 *)(iVar7 + iVar1 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[2] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar7 = *(int *)(unaff_s3_lo + 0x20);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x2c) + 0x24);
    *(undefined2 *)(iVar2 + iVar3 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[3] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar2 = *(int *)(unaff_s3_lo + 0x20);
    iVar3 = *(int *)(*(int *)(iVar5 + 0x30) + 0x24);
    *(undefined2 *)(iVar7 + iVar1 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[0x12] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar7 = *(int *)(unaff_s3_lo + 0x20);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x34) + 0x24);
    *(undefined2 *)(iVar2 + iVar3 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[0x13] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar2 = *(int *)(unaff_s3_lo + 0x20);
    iVar3 = *(int *)(*(int *)(iVar5 + 0x38) + 0x24);
    *(undefined2 *)(iVar7 + iVar1 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[0x22] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar7 = *(int *)(unaff_s3_lo + 0x20);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x3c) + 0x24);
    *(undefined2 *)(iVar2 + iVar3 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[0x23] * 2 + 4);
    iVar6 = FUN_00223350();
    iVar2 = *(int *)(unaff_s3_lo + 0x20);
    iVar3 = *(int *)(*(int *)(iVar5 + 0x40) + 0x24);
    *(undefined2 *)(iVar7 + iVar1 * 0xc + 4) = *(undefined2 *)(iVar6 + unaff_s1_lo[0x32] * 2 + 4);
    iVar7 = FUN_00223350();
    uVar4 = *(undefined4 *)(unaff_s3_lo + 0x20);
    *(undefined2 *)(iVar2 + iVar3 * 0xc + 4) = *(undefined2 *)(iVar7 + unaff_s1_lo[0x33] * 2 + 4);
    unaff_s8_lo = unaff_s8_lo + -4;
    FUN_001be6d8(0x295e90,iVar5,uVar4);
    if (unaff_s8_lo < 0) break;
    in_v0_lo = unaff_s1_lo + 0x48;
    param_3 = *(int *)(unaff_s6_lo + 0x90);
    *(undefined4 *)(unaff_s5_lo + 0x30) = *(undefined4 *)(unaff_s1_lo + 0x48);
    unaff_s1_lo = unaff_s1_lo + 0x40;
  }
  FUN_001cb238(0x2913b0,0,0);
  return;
}

