
void FUN_0012c828(undefined8 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *in_v1_lo;
  undefined4 *unaff_s0_lo;
  int unaff_s3_lo;
  int unaff_s4_lo;
  int unaff_s6_lo;
  int unaff_s8_lo;
  undefined4 uStack00000000;
  
  while( true ) {
    uStack00000000 = *(undefined4 *)(param_2 * 4 + *in_v1_lo + 0x14);
    iVar5 = FUN_002237f8();
    iVar5 = *(int *)(*(int *)(iVar5 + 0xcc) * 8 + *(int *)(unaff_s4_lo + 0x18));
    iVar7 = *(int *)(unaff_s4_lo + 0x20);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x24) + 0x24);
    iVar6 = FUN_00223350();
    iVar2 = *(int *)(unaff_s4_lo + 0x20);
    iVar3 = *(int *)(*(int *)(iVar5 + 0x28) + 0x24);
    *(undefined2 *)(iVar7 + iVar1 * 0xc + 4) =
         *(undefined2 *)(iVar6 + *(short *)(unaff_s0_lo + -3) * 2 + 4);
    iVar7 = FUN_00223350();
    uVar4 = *(undefined4 *)(unaff_s4_lo + 0x20);
    *(undefined2 *)(iVar2 + iVar3 * 0xc + 4) =
         *(undefined2 *)(iVar7 + *(short *)((int)unaff_s0_lo + -10) * 2 + 4);
    unaff_s8_lo = unaff_s8_lo + -1;
    FUN_001be6d8(0x295e90,iVar5,uVar4);
    if (unaff_s8_lo < 0) break;
    iVar5 = *(int *)(unaff_s6_lo + 0x90);
    *(undefined4 *)(unaff_s3_lo + 0x30) = unaff_s0_lo[8];
    *(undefined4 *)(unaff_s3_lo + 0x34) = unaff_s0_lo[9];
    *(undefined4 *)(unaff_s3_lo + 0x38) = unaff_s0_lo[10];
    *(undefined4 *)(unaff_s3_lo + 0x3c) = unaff_s0_lo[0xb];
    param_2 = (int)*(short *)((int)unaff_s0_lo + 0x12);
    in_v1_lo = (int *)(*(short *)(unaff_s0_lo + 4) * 4 + iVar5);
    unaff_s0_lo = unaff_s0_lo + 8;
  }
  FUN_001cb238(0x2913b0,0,0);
  return;
}

