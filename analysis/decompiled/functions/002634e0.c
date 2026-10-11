/* Ghidra pseudocode. PS2 address: 002634e0. Not validated source. */

ulong FUN_002634e0(undefined4 *param_1,char *param_2,long param_3,long param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  char *pcVar12;
  int iVar13;
  
  bVar4 = false;
  pcVar12 = param_2;
  do {
    pcVar11 = pcVar12;
    lVar10 = (long)*pcVar11;
    pcVar12 = pcVar11 + 1;
  } while ((*(byte *)((int)&PTR_DAT_002c00a1 + (int)*pcVar11) & 8) != 0);
  if (lVar10 == 0x2d) {
    cVar1 = *pcVar12;
    bVar4 = true;
  }
  else {
    if (lVar10 != 0x2b) goto LAB_00263578;
    cVar1 = *pcVar12;
  }
  lVar10 = (long)cVar1;
  pcVar12 = pcVar11 + 2;
LAB_00263578:
  if ((((param_4 == 0) || (param_4 == 0x10)) && (lVar10 == 0x30)) &&
     ((*pcVar12 == 'x' || (*pcVar12 == 'X')))) {
    lVar10 = (long)pcVar12[1];
    param_4 = 0x10;
    pcVar12 = pcVar12 + 2;
  }
  if (param_4 == 0) {
    param_4 = 10;
    if (lVar10 == 0x30) {
      param_4 = 8;
    }
  }
  uVar6 = FUN_00256ae0(0xffffffffffffffff,param_4);
  iVar13 = 0;
  iVar5 = FUN_00269d10(0xffffffffffffffff,param_4);
  uVar8 = 0;
  do {
    iVar9 = (int)lVar10;
    bVar2 = *(byte *)((int)&PTR_DAT_002c00a1 + iVar9);
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 3) == 0) {
LAB_00263690:
        if (iVar13 < 0) {
          *param_1 = 0x22;
          uVar8 = 0xffffffffffffffff;
        }
        else if (bVar4) {
          uVar8 = -uVar8;
        }
        if (param_3 != 0) {
          pcVar12 = pcVar12 + -1;
          if (iVar13 == 0) {
            pcVar12 = param_2;
          }
          *(undefined4 *)param_3 = pcVar12;
        }
        return uVar8;
      }
      iVar3 = iVar9 + -0x37;
      if ((bVar2 & 1) == 0) {
        iVar3 = iVar9 + -0x57;
      }
    }
    else {
      iVar3 = iVar9 + -0x30;
    }
    lVar10 = (long)iVar3;
    if (param_4 <= lVar10) goto LAB_00263690;
    if (iVar13 < 0) {
LAB_00263640:
      iVar13 = -1;
    }
    else if (uVar6 < uVar8) {
      iVar13 = -1;
    }
    else {
      if ((uVar8 == uVar6) && (iVar5 < lVar10)) goto LAB_00263640;
      iVar13 = 1;
      lVar7 = FUN_00256a78(uVar8,param_4);
      uVar8 = lVar10 + lVar7;
    }
    lVar10 = (long)*pcVar12;
    pcVar12 = pcVar12 + 1;
  } while( true );
}

