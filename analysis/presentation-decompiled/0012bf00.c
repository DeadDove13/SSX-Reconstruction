
void FUN_0012bf00(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  undefined2 *puVar5;
  int unaff_s1_lo;
  int iVar6;
  int iVar7;
  undefined4 in_f0;
  undefined4 in_f2;
  undefined4 in_f5;
  
  *(undefined4 *)(unaff_s1_lo + 0x98) = in_f5;
  *(undefined4 *)(unaff_s1_lo + 0xa8) = in_f2;
  *(undefined4 *)(unaff_s1_lo + 0xb8) = in_f0;
  *(undefined8 *)(unaff_s1_lo + 0xd0) = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(unaff_s1_lo + 0xd8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(unaff_s1_lo + 0xe0) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(unaff_s1_lo + 0xe8) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(unaff_s1_lo + 0xf0) = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(unaff_s1_lo + 0xf8) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(unaff_s1_lo + 0x100) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(unaff_s1_lo + 0x108) = *(undefined8 *)(param_3 + 0x38);
  FUN_0012c0b0();
  iVar7 = 0;
  iVar1 = unaff_s1_lo + 0x110;
  do {
    iVar7 = iVar7 + 1;
    puVar5 = (undefined2 *)(iVar1 + 0x10);
    iVar6 = 3;
    do {
      uVar2 = FUN_0012c008();
      iVar6 = iVar6 + -1;
      *puVar5 = uVar2;
      iVar4 = FUN_002109b0();
      if (*(short *)(iVar1 + 4) == 0) {
        trap(7);
      }
      puVar5[1] = (short)(iVar4 % (int)*(short *)(iVar1 + 4));
      uVar3 = FUN_002109b0();
      puVar5[2] = uVar3 & 7;
      uVar3 = FUN_002109b0();
      puVar5[3] = uVar3 & 7;
      puVar5 = puVar5 + 0x10;
    } while (-1 < iVar6);
    iVar1 = iVar1 + 0xa0;
  } while (iVar7 < 3);
  FUN_0012bb88();
  *(undefined4 *)(unaff_s1_lo + 0x40) = 1;
  return;
}

