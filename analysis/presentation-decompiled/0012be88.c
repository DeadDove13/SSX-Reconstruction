
void FUN_0012be88(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_v1;
  undefined2 *puVar6;
  int unaff_s1_lo;
  int iVar7;
  int iVar8;
  
  *(undefined8 *)(unaff_s1_lo + 0x90) = in_v1;
  *(undefined8 *)(unaff_s1_lo + 0x98) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(unaff_s1_lo + 0xa0) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_s1_lo + 0xa8) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_s1_lo + 0xb0) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(unaff_s1_lo + 0xb8) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(unaff_s1_lo + 0xc0) = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  *(float *)(unaff_s1_lo + 0x90) = -*(float *)(unaff_s1_lo + 0x90);
  *(undefined8 *)(unaff_s1_lo + 200) = uVar5;
  *(float *)(unaff_s1_lo + 0xa0) = -*(float *)(unaff_s1_lo + 0xa0);
  *(float *)(unaff_s1_lo + 0xb0) = -*(float *)(unaff_s1_lo + 0xb0);
  *(float *)(unaff_s1_lo + 0x98) = -*(float *)(unaff_s1_lo + 0x98);
  *(float *)(unaff_s1_lo + 0xa8) = -*(float *)(unaff_s1_lo + 0xa8);
  *(float *)(unaff_s1_lo + 0xb8) = -*(float *)(unaff_s1_lo + 0xb8);
  *(undefined8 *)(unaff_s1_lo + 0xd0) = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(unaff_s1_lo + 0xd8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(unaff_s1_lo + 0xe0) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(unaff_s1_lo + 0xe8) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_s1_lo + 0xf0) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(unaff_s1_lo + 0xf8) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_s1_lo + 0x100) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(unaff_s1_lo + 0x108) = *(undefined8 *)(param_3 + 0x38);
  FUN_0012c0b0();
  iVar8 = 0;
  iVar1 = unaff_s1_lo + 0x110;
  do {
    iVar8 = iVar8 + 1;
    puVar6 = (undefined2 *)(iVar1 + 0x10);
    iVar7 = 3;
    do {
      uVar2 = FUN_0012c008();
      iVar7 = iVar7 + -1;
      *puVar6 = uVar2;
      iVar4 = FUN_002109b0();
      if (*(short *)(iVar1 + 4) == 0) {
        trap(7);
      }
      puVar6[1] = (short)(iVar4 % (int)*(short *)(iVar1 + 4));
      uVar3 = FUN_002109b0();
      puVar6[2] = uVar3 & 7;
      uVar3 = FUN_002109b0();
      puVar6[3] = uVar3 & 7;
      puVar6 = puVar6 + 0x10;
    } while (-1 < iVar7);
    iVar1 = iVar1 + 0xa0;
  } while (iVar8 < 3);
  FUN_0012bb88();
  *(undefined4 *)(unaff_s1_lo + 0x40) = 1;
  return;
}

