/* Ghidra pseudocode. PS2 address: 002418d8. Not validated source. */

void FUN_002418d8(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  int aiStack_220 [100];
  
  piVar7 = aiStack_220;
  uVar12 = (uint)*(byte *)(param_1 + 6);
  iVar13 = 0;
  if (uVar12 != 0) {
    puVar11 = (ushort *)(param_1 + 0xc);
    uVar9 = uVar12;
    do {
      uVar1 = *puVar11;
      uVar9 = uVar9 - 1;
      puVar11 = puVar11 + 1;
      puVar8 = (undefined1 *)(param_1 + (uint)uVar1 * 4);
      uVar2 = FUN_002418b0(*puVar8);
      *piVar7 = uVar2;
      piVar7 = piVar7 + 1;
      iVar3 = FUN_002418b0(*puVar8);
      iVar13 = iVar13 + iVar3;
    } while (uVar9 != 0);
  }
  iVar3 = 0;
  do {
    if (iVar13 < 1) {
      iVar13 = 0;
      if (uVar12 != 0) {
        puVar11 = (ushort *)(param_1 + 0xc);
        do {
          lVar6 = FUN_002418b0(*(undefined1 *)(param_1 + (uint)*puVar11 * 4));
          if (lVar6 == 0) {
            *(char *)(param_2 + iVar3) = (char)iVar13;
            iVar3 = iVar3 + 1;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < (int)uVar12);
      }
      return;
    }
    iVar4 = FUN_00243638(iVar13,0xffffffffffffffff);
    iVar10 = 0;
    if (uVar12 == 0) {
LAB_002419b4:
      iVar5 = iVar10 << 2;
    }
    else {
      iVar4 = iVar4 - aiStack_220[0];
      iVar5 = 0;
      if (-1 < iVar4) {
        iVar10 = 1;
        piVar7 = aiStack_220;
        while ((piVar7 = piVar7 + 1, iVar10 < (int)uVar12 && (iVar4 = iVar4 - *piVar7, -1 < iVar4)))
        {
          iVar10 = iVar10 + 1;
        }
        goto LAB_002419b4;
      }
    }
    *(char *)(param_2 + iVar3) = (char)iVar10;
    iVar13 = iVar13 - *(int *)((int)aiStack_220 + iVar5);
    *(int *)((int)aiStack_220 + iVar5) = 0;
    iVar3 = iVar3 + 1;
  } while( true );
}

