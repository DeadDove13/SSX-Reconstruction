/* Ghidra pseudocode. PS2 address: 0018e138. Not validated source. */

void FUN_0018e138(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iStack_48c;
  int iStack_488;
  int iStack_484;
  int aiStack_480 [2];
  undefined8 uStack_478;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  
  iVar11 = (int)param_1;
  iVar4 = 0x3f;
  do {
    iVar4 = iVar4 + -1;
  } while (iVar4 != -1);
  iStack_484 = 0;
  iVar4 = 0;
  iStack_488 = 0;
  if (0 < *(int *)(iVar11 + 4)) {
    piVar9 = (int *)&uStack_478;
    piVar10 = (int *)(iVar11 + 0x10);
    do {
      lVar5 = FUN_0018dcf0(*piVar10);
      if (lVar5 == 0) {
        piVar9[1] = 0;
        *piVar9 = 0;
        iVar6 = iStack_488;
LAB_0018e22c:
        iStack_488 = iVar6;
        iVar6 = *(int *)(iVar11 + 4);
      }
      else {
        iVar6 = *(int *)(*piVar10 + 0xc);
        (**(code **)(iVar6 + 0x24))(&iStack_80,*piVar10 + (int)*(short *)(iVar6 + 0x20));
        uVar3 = CONCAT44(iStack_74,iStack_78);
        *(ulong *)(piVar9 + -2) = CONCAT44(iStack_7c,iStack_80);
        *(undefined8 *)piVar9 = uVar3;
        iStack_484 = iStack_484 + piVar9[1];
        iVar6 = *piVar9;
        if (iStack_488 < *piVar9) goto LAB_0018e22c;
        iVar6 = *(int *)(iVar11 + 4);
      }
      iVar4 = iVar4 + 1;
      piVar9 = piVar9 + 4;
      piVar10 = piVar10 + 1;
    } while (iVar4 < iVar6);
  }
  if (iStack_484 < 0x1a5) {
    *(undefined4 *)(iVar11 + 0xc) = 0;
    iStack_48c = (0x1e0 - iStack_484) / 2;
  }
  else {
    iVar4 = *(int *)(iVar11 + 8);
    if (iVar4 < *(int *)(iVar11 + 0xc)) {
      *(int *)(iVar11 + 0xc) = iVar4;
    }
    iVar6 = *(int *)(iVar11 + 0xc);
    iVar8 = 0;
    if (iVar6 <= iVar4) {
      piVar9 = (int *)((int)&uStack_478 + iVar6 * 0x10 + 4);
      iVar7 = iVar6;
      do {
        iVar1 = *piVar9;
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 4;
        iVar8 = iVar8 + iVar1;
      } while (iVar7 <= iVar4);
    }
    if (iVar6 < iVar4) {
      iStack_48c = 0x1e;
      if (iVar8 < 0x1a5) goto LAB_0018e334;
      do {
        iVar7 = iVar6 * 0x10;
        iVar6 = iVar6 + 1;
        iVar7 = *(int *)((int)&uStack_478 + iVar7 + 4);
        *(int *)(iVar11 + 0xc) = iVar6;
        iVar8 = iVar8 - iVar7;
        if (iVar4 <= iVar6) break;
      } while (0x1a4 < iVar8);
    }
    iStack_48c = 0x1e;
  }
LAB_0018e334:
  FUN_00191520(param_1);
  iVar4 = *(int *)(iVar11 + 0xc);
  iVar6 = iVar4 * 0x10;
  piVar9 = aiStack_480 + iVar4 * 4;
  do {
    if (*(int *)(iVar11 + 4) <= iVar4) {
      iVar6 = *(int *)(iVar11 + 0xc);
LAB_0018e438:
      if (iVar6 != 0) {
        iStack_80 = 0x135;
        iStack_7c = 8;
        iStack_78 = 0x16;
        iStack_74 = 0xf;
        FUN_001918e8(param_1,&iStack_80);
      }
      if (iVar4 != *(int *)(iVar11 + 4)) {
        iStack_80 = 0x135;
        iStack_7c = 0x1c9;
        iStack_78 = 0x16;
        iStack_74 = 0xf;
        FUN_00191b78(param_1,&iStack_80);
      }
      FUN_00191570(param_1);
      return;
    }
    lVar5 = FUN_0018dcf0(*(undefined4 *)(iVar11 + 0x10 + iVar4 * 4));
    if (lVar5 != 0) {
      if ((iVar4 != *(int *)(iVar11 + 8)) &&
         (0x1c2 < iStack_48c + *(int *)((int)&uStack_478 + iVar6 + 4))) {
        iVar6 = *(int *)(iVar11 + 0xc);
        goto LAB_0018e438;
      }
      *(int *)((int)aiStack_480 + iVar6) = (0x280 - iStack_488) / 2;
      iVar8 = *(int *)(iVar11 + 0x10 + iVar4 * 4);
      *(int *)((int)aiStack_480 + iVar6 + 4) = iStack_48c;
      iVar7 = *(int *)(iVar8 + 0xc);
      pcVar2 = *(code **)(iVar7 + 0x2c);
      *(int *)((int)&uStack_478 + iVar6) = iStack_488;
      iStack_48c = iStack_48c + *(int *)((int)&uStack_478 + iVar6 + 4);
      iStack_80 = *piVar9;
      iStack_7c = piVar9[1];
      iStack_78 = piVar9[2];
      iStack_74 = piVar9[3];
      (*pcVar2)(iVar8 + *(short *)(iVar7 + 0x28),&iStack_80);
    }
    piVar9 = piVar9 + 4;
    iVar6 = iVar6 + 0x10;
    iVar4 = iVar4 + 1;
  } while( true );
}

