/* Ghidra pseudocode. PS2 address: 00256380. Not validated source. */

int FUN_00256380(int *param_1,int param_2,undefined8 *param_3,int *param_4)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  undefined8 auStack_6a0 [94];
  undefined8 auStack_3b0 [94];
  int iStack_c0;
  int *piStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iVar4 = 0;
  iVar16 = param_1[2];
  bVar3 = param_1[3] != 0;
  iStack_ac = 0;
  iStack_a8 = 0;
  iStack_c0 = 0;
  piStack_bc = param_4;
  iStack_b8 = param_2;
  puVar8 = auStack_6a0;
  puVar9 = (undefined8 *)*param_4;
  do {
    puVar6 = (undefined8 *)FUN_002562e8(param_2,puVar9,puVar8);
    if (puVar6 == (undefined8 *)0x0) {
LAB_00256538:
      if ((iStack_a8 != 0) &&
         (puVar6 = auStack_3b0, param_2 = iStack_b0, iVar4 = iStack_b4, iStack_ac != 0)) {
        FUN_00256378();
      }
      if (iVar4 == 0) {
        FUN_00255b18();
        *param_1 = 0;
      }
      else {
        *param_1 = iVar4;
      }
      puVar8 = param_3;
      if (param_2 != iStack_b8) {
        puVar8 = puVar6;
        puVar5 = param_3;
        do {
          puVar7 = puVar5;
          puVar10 = puVar8;
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar14 = puVar7[3];
          *puVar10 = *puVar7;
          puVar10[1] = uVar12;
          puVar10[2] = uVar13;
          puVar10[3] = uVar14;
          puVar5 = puVar7 + 4;
          puVar8 = puVar10 + 4;
        } while (puVar5 != param_3 + 0x5c);
        uVar12 = puVar7[5];
        puVar10[4] = *puVar5;
        puVar10[5] = uVar12;
        iVar16 = iStack_b8;
        while (puVar8 = puVar6, iVar16 != param_2) {
          puVar8 = (undefined8 *)FUN_002562e8(iVar16,puVar6,puVar9);
          uVar15 = 0;
          uVar11 = (uint)*(ushort *)((int)puVar8 + 0x29a);
          do {
            if ((uVar15 != uVar11) && (*(char *)((int)puVar8 + uVar15 + 0x29c) != '\0')) {
              FUN_00256268(uVar15,puVar8,param_3);
              uVar11 = (uint)*(ushort *)((int)puVar8 + 0x29a);
            }
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < 0x4f);
          puVar9 = (undefined8 *)FUN_002561e0(uVar11,puVar8,puVar6);
          iVar16 = (int)*puVar9 + -1;
          puVar9 = puVar6;
          puVar6 = puVar8;
        }
      }
      *piStack_bc = (int)puVar8;
      return iVar4;
    }
    if (*(int **)((int)puVar6 + 4) == (int *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = **(int **)((int)puVar6 + 4) == -2;
    }
    if (bVar3) {
      bVar3 = false;
      iVar4 = FUN_00256098(param_1[3],*(undefined4 *)((int)puVar6 + 4),iVar16,1,&iStack_c0);
      param_1[3] = 0;
    }
    else if (bVar2) {
      iVar4 = FUN_00256098(param_2,*(undefined4 *)((int)puVar6 + 4),iVar16,0,&iStack_c0);
    }
    else {
      iVar4 = FUN_00255fc0(param_2,*(undefined4 *)((int)puVar6 + 4),iVar16);
    }
    if (iVar4 == 0) {
LAB_002564f8:
      uVar1 = *(undefined2 *)((int)puVar6 + 0x29a);
    }
    else {
      if (iStack_c0 == 0) {
        iStack_ac = 0;
        goto LAB_00256538;
      }
      if (iStack_a8 == 0) {
        puVar8 = auStack_3b0;
        puVar5 = puVar6;
        do {
          puVar7 = puVar5;
          puVar10 = puVar8;
          uVar12 = puVar7[1];
          uVar13 = puVar7[2];
          uVar14 = puVar7[3];
          *puVar10 = *puVar7;
          puVar10[1] = uVar12;
          puVar10[2] = uVar13;
          puVar10[3] = uVar14;
          puVar5 = puVar7 + 4;
          puVar8 = puVar10 + 4;
        } while (puVar5 != puVar6 + 0x5c);
        iStack_a8 = 1;
        iStack_ac = 1;
        uVar12 = puVar7[5];
        iStack_b4 = iVar4;
        iStack_b0 = param_2;
        puVar10[4] = *puVar5;
        puVar10[5] = uVar12;
        goto LAB_002564f8;
      }
      uVar1 = *(undefined2 *)((int)puVar6 + 0x29a);
    }
    puVar8 = (undefined8 *)FUN_002561e0(uVar1,puVar6,puVar9);
    param_2 = (int)*puVar8 + -1;
    puVar8 = puVar9;
    puVar9 = puVar6;
  } while( true );
}

