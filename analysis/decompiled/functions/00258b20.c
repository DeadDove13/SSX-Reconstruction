/* Ghidra pseudocode. PS2 address: 00258b20. Not validated source. */

undefined4 FUN_00258b20(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  ulong in_t5;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  puVar12 = (undefined4 *)param_1;
  iVar6 = puVar12[1];
  if (iVar6 != param_2) {
    FUN_002599b8();
  }
  FUN_00259840(param_1,puVar12 + 2);
  if (puVar12[1] + puVar12[3] == iVar6) {
    in_t5 = (ulong)(int)puVar12[3];
  }
  else {
    FUN_002599b8();
  }
  puVar1 = (undefined4 *)puVar12[2];
  if (in_t5 == 0) {
    bVar5 = true;
  }
  else {
    bVar5 = in_t5 < 2;
    iVar6 = (int)in_t5;
    do {
      iVar6 = iVar6 + -1;
      uVar8 = (long)iVar6;
      iVar9 = iVar6;
      while (iVar9 = iVar9 * 2, (ulong)(long)(iVar9 + 1) < in_t5) {
        uVar10 = (ulong)(iVar9 + 2);
        iVar7 = (int)uVar8;
        if (uVar10 < in_t5) {
          iVar4 = *(int *)(puVar1[iVar7 * 2 + 2] + 8);
          if (iVar4 - *(int *)(puVar1[iVar7 * 2 + 1] + 8) < 1) goto LAB_00258bf8;
          iVar2 = puVar1[iVar7];
          if (iVar4 - *(int *)(iVar2 + 8) < 1) goto LAB_00258bf8;
          puVar1[iVar7] = puVar1[iVar7 * 2 + 2];
          puVar1[iVar7 * 2 + 2] = iVar2;
        }
        else {
LAB_00258bf8:
          iVar4 = puVar1[iVar7];
          if (*(int *)(puVar1[iVar7 * 2 + 1] + 8) - *(int *)(iVar4 + 8) < 1) break;
          puVar1[iVar7] = puVar1[iVar7 * 2 + 1];
          puVar1[iVar7 * 2 + 1] = iVar4;
          uVar10 = (ulong)(iVar9 + 1);
        }
        uVar8 = uVar10;
        iVar9 = (int)uVar10;
      }
    } while ((long)iVar6 != 0);
  }
  if (!bVar5) {
    puVar11 = puVar1 + (int)in_t5;
    do {
      puVar11 = puVar11 + -1;
      in_t5 = (ulong)((int)in_t5 + -1);
      uVar3 = *puVar1;
      *puVar1 = *puVar11;
      *puVar11 = uVar3;
      if (1 < in_t5) {
        iVar6 = 0;
        iVar9 = 2;
        uVar8 = 0;
        do {
          uVar10 = (ulong)iVar9;
          iVar9 = (int)uVar8;
          if (uVar10 < in_t5) {
            iVar7 = *(int *)(puVar1[iVar9 * 2 + 2] + 8);
            if (iVar7 - *(int *)(puVar1[iVar9 * 2 + 1] + 8) < 1) goto LAB_00258cf8;
            iVar4 = puVar1[iVar9];
            if (iVar7 - *(int *)(iVar4 + 8) < 1) goto LAB_00258cf8;
            puVar1[iVar9] = puVar1[iVar9 * 2 + 2];
            puVar1[iVar9 * 2 + 2] = iVar4;
          }
          else {
LAB_00258cf8:
            iVar7 = puVar1[iVar9];
            if (*(int *)(puVar1[iVar9 * 2 + 1] + 8) - *(int *)(iVar7 + 8) < 1) break;
            puVar1[iVar9] = puVar1[iVar9 * 2 + 1];
            puVar1[iVar9 * 2 + 1] = iVar7;
            uVar10 = (ulong)(iVar6 + 1);
          }
          iVar6 = (int)uVar10 * 2;
          iVar9 = iVar6 + 2;
          uVar8 = uVar10;
        } while ((ulong)(long)(iVar6 + 1) < in_t5);
      }
    } while (1 < in_t5);
  }
  FUN_00258a20(param_1,puVar12 + 2);
  FUN_00259ae8(puVar12[2]);
  return *puVar12;
}

