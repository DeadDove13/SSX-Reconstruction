/* Ghidra pseudocode. PS2 address: 00192498. Not validated source. */

void FUN_00192498(long param_1,int *param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  
  iVar11 = (int)param_1;
  lVar8 = FUN_0018e708(*(undefined4 *)(iVar11 + 4));
  iStack_d0 = *param_2;
  bVar2 = param_1 != lVar8;
  iStack_cc = param_2[1];
  iStack_c8 = param_2[2];
  iStack_c4 = param_2[3];
  if (bVar2) {
    puVar3 = (undefined8 *)&DAT_002cc240;
  }
  else {
    puVar3 = (undefined8 *)&DAT_002cc230;
  }
  uStack_c0 = *(undefined4 *)puVar3;
  uStack_bc = *(undefined4 *)((int)puVar3 + 4);
  uStack_b0 = *puVar3;
  uStack_b8 = *(undefined4 *)(puVar3 + 1);
  uStack_a8 = uStack_b8;
  FUN_001915b0(&iStack_d0,&uStack_b0,1);
  if (bVar2) {
    piVar9 = &DAT_002cc210;
  }
  else {
    piVar9 = &DAT_002cc200;
  }
  iStack_d0 = *piVar9;
  iStack_cc = piVar9[1];
  iStack_c8 = piVar9[2];
  FUN_00168720(0x28ad30,&iStack_d0);
  FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(iVar11 + 4) + 0x110) + 0x38),*param_2 + 10,
               param_2[1] + 1,*(undefined4 *)(iVar11 + 0x10));
  iVar4 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 4) + 0x110) + 0x38),
                       *(undefined4 *)(iVar11 + 0x14),0);
  FUN_001a0fc0(*(undefined4 *)(*(int *)(*(int *)(iVar11 + 4) + 0x110) + 0x38),
               *param_2 + (param_2[2] - iVar4) + -10,param_2[1] + 1,*(undefined4 *)(iVar11 + 0x14));
  puVar5 = (undefined1 *)(*(int *)(iVar11 + 0x14) + *(int *)(iVar11 + 0x1c));
  uVar1 = *puVar5;
  *puVar5 = 0;
  iVar6 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 4) + 0x110) + 0x38),
                       *(undefined4 *)(iVar11 + 0x14),0);
  *(undefined1 *)(*(int *)(iVar11 + 0x14) + *(int *)(iVar11 + 0x1c)) = uVar1;
  iVar10 = *(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x14);
  uVar1 = *(undefined1 *)(iVar10 + 1);
  *(undefined1 *)(iVar10 + 1) = 0;
  iVar7 = FUN_001a0840(0x3f800000,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 4) + 0x110) + 0x38),
                       *(undefined4 *)(iVar11 + 0x14),0);
  iVar10 = iVar6 + 2;
  if (iVar6 + 2 < iVar7) {
    iVar10 = iVar7;
  }
  *(undefined1 *)(*(int *)(iVar11 + 0x1c) + *(int *)(iVar11 + 0x14) + 1) = uVar1;
  if (!bVar2) {
    FUN_0019fe18(((float)*param_2 + (float)((param_2[2] - iVar4) + iVar6)) - 10.0,
                 (float)param_2[1] + 5.0,
                 ((float)*param_2 + (float)((param_2[2] - iVar4) + iVar10)) - 10.0,
                 (float)param_2[1] + 5.0,0x28ad30);
    FUN_0019fe18(((float)*param_2 + (float)((param_2[2] - iVar4) + iVar6)) - 10.0,
                 (float)param_2[1] + 6.0,
                 ((float)*param_2 + (float)((param_2[2] - iVar4) + iVar10)) - 10.0,
                 (float)param_2[1] + 6.0,0x28ad30);
  }
  return;
}

