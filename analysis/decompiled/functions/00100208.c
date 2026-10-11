/* Ghidra pseudocode. PS2 address: 00100208. Not validated source. */

void FUN_00100208(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  piVar11 = (int *)(param_1 + 0x70);
  iVar9 = 3;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  piVar8 = piVar11;
  do {
    lVar6 = FUN_0023a448(0x2a6b20,0x200,0);
    if (lVar6 != 0) {
      FUN_0023bbd0(lVar6,0xffffffffdeadc0de,0x200);
    }
    *piVar8 = (int)lVar6;
    *(undefined **)((int)lVar6 + 0x1fc) = &DAT_002b31d8;
    iVar9 = iVar9 + -1;
    piVar8 = piVar8 + 1;
  } while (-1 < iVar9);
  iVar10 = 0;
  iVar9 = param_1 + 0xa0;
  iVar3 = param_1 + 0x90;
  if (0 < DAT_0027b810) {
    do {
      if ((char)(&DAT_0027b868)[iVar10 * 0x68] < '\0') {
        iVar1 = *(int *)(param_1 + 0x84);
        lVar6 = FUN_0023a448(0x2a6b30,0x8e70,0);
        if (lVar6 != 0) {
          FUN_0023bbd0(lVar6,0,0x8e70);
        }
        uVar4 = FUN_0011fcb8(lVar6,1,8);
        iVar2 = *(int *)(param_1 + 0x84);
        *(undefined4 *)(iVar9 + iVar1 * 4) = uVar4;
        FUN_00105050(**(undefined4 **)(iVar9 + iVar2 * 4),*(undefined4 *)(param_1 + 0x8c),
                     &DAT_0027b814 + iVar10 * 0x68);
        iVar1 = *(int *)(param_1 + 0x8c);
        *(int *)(param_1 + 0x8c) = iVar1 + 1;
        puVar5 = *(undefined4 **)(iVar9 + *(int *)(param_1 + 0x84) * 4);
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x80);
        uVar7 = FUN_00182670(0x285290);
        FUN_001810b0(piVar11[iVar1],uVar7);
        iVar1 = *(int *)(param_1 + 0x80);
        lVar6 = FUN_0023a448(0x2c3fa8,0x8e40,0);
        if (lVar6 != 0) {
          FUN_0023bbd0(lVar6,0,0x8e40);
        }
        uVar4 = FUN_001335a8(lVar6,1,8);
        iVar2 = *(int *)(param_1 + 0x80);
        *(undefined4 *)(iVar3 + iVar1 * 4) = uVar4;
        FUN_00105050(**(undefined4 **)(iVar3 + iVar2 * 4),*(undefined4 *)(param_1 + 0x8c),
                     &DAT_0027b814 + iVar10 * 0x68);
        FUN_00134c40(*(undefined4 *)(iVar3 + *(int *)(param_1 + 0x80) * 4),
                     piVar11[*(int *)(param_1 + 0x80)]);
        iVar1 = *(int *)(param_1 + 0x8c);
        *(int *)(param_1 + 0x8c) = iVar1 + 1;
        puVar5 = *(undefined4 **)(iVar3 + *(int *)(param_1 + 0x80) * 4);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      }
      uVar4 = 0;
      if (puVar5 != (undefined4 *)0x0) {
        uVar4 = *puVar5;
      }
      *(undefined4 *)(param_1 + 200 + iVar1 * 4) = uVar4;
      iVar10 = iVar10 + 1;
    } while (iVar10 < DAT_0027b810);
  }
  FUN_002193e8(param_1 + 0x114,0x2a6b40,0x10);
  FUN_002193e8(param_1 + 0x100,0x2a6b58,0x10);
  FUN_001e9528(param_1 + 0x128,param_1 + 0x100,param_1 + 0x114);
  return;
}

