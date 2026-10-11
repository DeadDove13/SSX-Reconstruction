/* Ghidra pseudocode. PS2 address: 00265d40. Not validated source. */

void FUN_00265d40(byte *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  byte *pbVar10;
  char acStack_62 [2];
  
LAB_0026626c:
  bVar3 = *param_1;
LAB_00266270:
  if (bVar3 == 0) {
    return;
  }
  pcVar8 = (char *)0x0;
  lVar6 = 0;
  if (*param_1 != 0x25) {
    (*(code *)PTR_FUN_002a6aa4)();
    goto switchD_00265db0_caseD_1;
  }
LAB_00265d84:
  pbVar10 = param_1;
  param_1 = pbVar10 + 1;
  switch((int)((*param_1 - 0x30) * 0x1000000) >> 0x18) {
  case 0:
    uVar5 = (int)(char)pbVar10[2] - 0x30;
    if ((uVar5 & 0xff) < 10) {
      if ((int)(char)pbVar10[3] - 0x30U < 10) {
        param_1 = pbVar10 + 3;
        uVar5 = uVar5 * 10 + -0x30 + (int)(char)pbVar10[3];
        if (0x1f < (int)uVar5) {
          uVar5 = 0x1f;
        }
      }
      else {
        param_1 = pbVar10 + 2;
      }
      pcVar8 = acStack_62 + (1 - uVar5);
      pcVar7 = pcVar8;
      for (; 0 < (int)uVar5; uVar5 = uVar5 - 1) {
        *pcVar7 = '0';
        pcVar7 = pcVar7 + 1;
      }
    }
    goto LAB_00265d84;
  default:
    break;
  case 0x33:
    goto switchD_00265db0_caseD_33;
  case 0x34:
    if (lVar6 == 0x6c) {
      uVar9 = *(ulong *)param_2;
    }
    else if (lVar6 == 0x68) {
      uVar9 = (ulong)(short)*(ushort *)param_2;
    }
    else {
      uVar9 = (ulong)(int)*param_2;
    }
    param_2 = param_2 + 2;
    pcVar7 = acStack_62 + 1;
    acStack_62[1] = 0;
    if (uVar9 == 0) {
      pcVar7 = acStack_62;
      acStack_62[0] = '0';
    }
    else {
      if ((long)uVar9 < 0) {
        uVar9 = -uVar9;
        (*(code *)PTR_FUN_002a6aa4)(0x2d);
      }
      for (; uVar9 != 0; uVar9 = FUN_00268dd0(uVar9,10)) {
        cVar2 = FUN_002696a8(uVar9,10);
        pcVar7 = pcVar7 + -1;
        *pcVar7 = cVar2 + '0';
      }
    }
    if ((pcVar8 != (char *)0x0) && (pcVar8 < pcVar7)) {
      pcVar7 = pcVar8;
    }
    cVar2 = *pcVar7;
    if (*pcVar7 == '\0') break;
    do {
      pcVar7 = pcVar7 + 1;
      (*(code *)PTR_FUN_002a6aa4)(cVar2);
      cVar2 = *pcVar7;
    } while (*pcVar7 != '\0');
    param_1 = pbVar10 + 2;
    goto LAB_0026626c;
  case 0x35:
  case 0x36:
    goto switchD_00265db0_caseD_35;
  case 0x38:
    lVar6 = 0x68;
    goto LAB_00265d84;
  case 0x3c:
    goto switchD_00265db0_caseD_3c;
  case 0x3f:
    if (lVar6 == 0x6c) {
      uVar9 = *(ulong *)param_2;
    }
    else if (lVar6 == 0x68) {
      uVar9 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar9 = (ulong)(uint)*param_2;
    }
    param_2 = param_2 + 2;
    pcVar7 = acStack_62 + 1;
    acStack_62[1] = 0;
    if (uVar9 == 0) {
      pcVar7 = acStack_62;
      acStack_62[0] = '0';
    }
    else {
      do {
        bVar3 = (byte)uVar9;
        pcVar7 = pcVar7 + -1;
        uVar9 = uVar9 >> 3;
        *pcVar7 = (bVar3 & 7) + 0x30;
      } while (uVar9 != 0);
    }
    if ((pcVar8 != (char *)0x0) && (pcVar8 < pcVar7)) {
      pcVar7 = pcVar8;
    }
    cVar2 = *pcVar7;
    if (*pcVar7 != '\0') {
      do {
        pcVar7 = pcVar7 + 1;
        (*(code *)PTR_FUN_002a6aa4)(cVar2);
        cVar2 = *pcVar7;
      } while (*pcVar7 != '\0');
      param_1 = pbVar10 + 2;
      goto LAB_0026626c;
    }
    break;
  case 0x43:
    pcVar8 = (char *)*param_2;
    if (*pcVar8 == '\0') {
      (*(code *)PTR_FUN_002a6aa4)(0x28);
      (*(code *)PTR_FUN_002a6aa4)(0x6e);
      (*(code *)PTR_FUN_002a6aa4)(0x75);
      (*(code *)PTR_FUN_002a6aa4)(0x6c);
      (*(code *)PTR_FUN_002a6aa4)(0x6c);
      (*(code *)PTR_FUN_002a6aa4)(0x29);
      param_1 = pbVar10 + 2;
      param_2 = param_2 + 2;
    }
    else {
      cVar2 = *pcVar8;
      while( true ) {
        pcVar8 = pcVar8 + 1;
        (*(code *)PTR_FUN_002a6aa4)(cVar2);
        if (*pcVar8 == '\0') break;
        cVar2 = *pcVar8;
      }
      param_1 = pbVar10 + 2;
      param_2 = param_2 + 2;
    }
    goto LAB_0026626c;
  case 0x45:
    if (lVar6 == 0x6c) {
      uVar9 = *(ulong *)param_2;
    }
    else if (lVar6 == 0x68) {
      uVar9 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar9 = (ulong)(uint)*param_2;
    }
    param_2 = param_2 + 2;
    pcVar7 = acStack_62 + 1;
    acStack_62[1] = 0;
    if (uVar9 == 0) {
      pcVar7 = acStack_62;
      acStack_62[0] = '0';
    }
    else {
      do {
        cVar2 = FUN_00269d10(uVar9,10);
        pcVar7 = pcVar7 + -1;
        *pcVar7 = cVar2 + '0';
        uVar9 = FUN_00256ae0(uVar9,10);
      } while (uVar9 != 0);
    }
    if ((pcVar8 != (char *)0x0) && (pcVar8 < pcVar7)) {
      pcVar7 = pcVar8;
    }
    cVar2 = *pcVar7;
    if (*pcVar7 != '\0') {
      do {
        pcVar7 = pcVar7 + 1;
        (*(code *)PTR_FUN_002a6aa4)(cVar2);
        cVar2 = *pcVar7;
      } while (*pcVar7 != '\0');
      param_1 = pbVar10 + 2;
      goto LAB_0026626c;
    }
    break;
  case 0x48:
    if (lVar6 == 0x6c) {
      uVar9 = *(ulong *)param_2;
    }
    else if (lVar6 == 0x68) {
      uVar9 = (ulong)*(ushort *)param_2;
    }
    else {
      uVar9 = (ulong)(uint)*param_2;
    }
    param_2 = param_2 + 2;
    pcVar7 = acStack_62 + 1;
    acStack_62[1] = 0;
    if (uVar9 == 0) {
      pcVar7 = acStack_62;
      acStack_62[0] = '0';
    }
    else {
      do {
        cVar2 = (char)(uVar9 & 0xf);
        cVar1 = cVar2 + '0';
        if (9 < (uVar9 & 0xf)) {
          cVar1 = cVar2 + 'W';
        }
        pcVar7 = pcVar7 + -1;
        uVar9 = uVar9 >> 4;
        *pcVar7 = cVar1;
      } while (uVar9 != 0);
    }
    if ((pcVar8 != (char *)0x0) && (pcVar8 < pcVar7)) {
      pcVar7 = pcVar8;
    }
    cVar2 = *pcVar7;
    if (*pcVar7 == '\0') break;
    do {
      pcVar7 = pcVar7 + 1;
      (*(code *)PTR_FUN_002a6aa4)(cVar2);
      cVar2 = *pcVar7;
    } while (*pcVar7 != '\0');
    param_1 = pbVar10 + 2;
    goto LAB_0026626c;
  }
switchD_00265db0_caseD_1:
  param_1 = param_1 + 1;
  goto LAB_0026626c;
switchD_00265db0_caseD_3c:
  lVar6 = 0x6c;
  goto LAB_00265d84;
switchD_00265db0_caseD_35:
  if (*param_2 == 0.0) {
    (*(code *)PTR_FUN_002a6aa4)(0x30);
    param_1 = pbVar10 + 2;
    param_2 = param_2 + 2;
    goto LAB_0026626c;
  }
  param_1 = pbVar10 + 2;
  uVar4 = FUN_00258948();
  FUN_00265ba0(uVar4);
  bVar3 = *param_1;
  param_2 = param_2 + 2;
  goto LAB_00266270;
switchD_00265db0_caseD_33:
  param_1 = pbVar10 + 2;
  (*(code *)PTR_FUN_002a6aa4)(*(undefined1 *)param_2);
  bVar3 = *param_1;
  param_2 = param_2 + 2;
  goto LAB_00266270;
}

