/* Ghidra pseudocode. PS2 address: 001904c8. Not validated source. */

long FUN_001904c8(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar4 = FUN_0018dc18();
  lVar5 = FUN_0018dd28(param_1);
  if (lVar5 != 0) {
    return lVar4;
  }
  if (lVar4 != 0) {
    return lVar4;
  }
  lVar4 = FUN_0018dd60(param_1);
  iVar10 = (int)param_1;
  if (lVar4 == 0x61) {
    iVar7 = FUN_0025bcf8(*(undefined4 *)(iVar10 + 0x14));
    if (*(int *)(iVar10 + 0x18) + -1 <= iVar7) {
      return 0;
    }
    *(undefined1 *)(iVar7 + *(int *)(iVar10 + 0x14) + 1) = 0;
    if (*(int *)(iVar10 + 0x1c) < iVar7) {
      do {
        iVar7 = iVar7 + -1;
        puVar6 = (undefined1 *)(iVar7 + *(int *)(iVar10 + 0x14));
        puVar6[1] = *puVar6;
      } while (*(int *)(iVar10 + 0x1c) < iVar7);
    }
    iVar7 = 0x1000000;
    do {
      iVar9 = iVar7;
      bVar2 = false;
      iVar7 = iVar9 >> 0x18;
      if (iVar7 - 0x61U < 0x1a) {
LAB_00190810:
        bVar2 = true;
      }
      else if (iVar7 - 0x41U < 0x1a) {
        bVar2 = true;
      }
      else if (iVar7 - 0x30U < 10) {
        bVar2 = true;
      }
      else if (iVar7 == 0x5f) goto LAB_00190810;
      iVar7 = iVar9 + 0x1000000;
    } while (!bVar2);
    *(char *)(*(int *)(iVar10 + 0x14) + *(int *)(iVar10 + 0x1c)) = (char)((uint)iVar9 >> 0x18);
  }
  else if (lVar4 < 0x62) {
    if (lVar4 != 0xd) {
      if (lVar4 != 0x41) {
        return 0;
      }
      iVar7 = *(int *)(iVar10 + 0x1c);
      pcVar3 = (char *)(*(int *)(iVar10 + 0x14) + iVar7);
      cVar1 = pcVar3[1];
      *pcVar3 = cVar1;
      if (cVar1 == '\0') {
        iVar9 = *(int *)(iVar10 + 0x1c);
      }
      else {
        do {
          iVar7 = iVar7 + 1;
          pcVar3 = (char *)(*(int *)(iVar10 + 0x14) + iVar7);
          cVar1 = pcVar3[1];
          *pcVar3 = cVar1;
        } while (cVar1 != '\0');
        iVar9 = *(int *)(iVar10 + 0x1c);
      }
      if (iVar9 < iVar7) {
        iVar10 = *(int *)(iVar10 + 4);
      }
      else {
        *(int *)(iVar10 + 0x1c) = iVar7 + -1;
        iVar10 = *(int *)(iVar10 + 4);
      }
      (**(code **)(*(int *)(iVar10 + 0x114) + 0x24))
                (iVar10 + *(short *)(*(int *)(iVar10 + 0x114) + 0x20),param_1);
      return 0;
    }
    iVar7 = *(char *)(*(int *)(iVar10 + 0x14) + *(int *)(iVar10 + 0x1c)) * 0x1000000;
    do {
      iVar7 = iVar7 + -0x1000000;
      bVar2 = false;
      iVar9 = iVar7 >> 0x18;
      if (iVar9 - 0x61U < 0x1a) {
LAB_00190738:
        bVar2 = true;
      }
      else if (iVar9 - 0x41U < 0x1a) {
        bVar2 = true;
      }
      else if (iVar9 - 0x30U < 10) {
        bVar2 = true;
      }
      else if (iVar9 == 0x5f) goto LAB_00190738;
    } while (!bVar2);
    *(char *)(*(int *)(iVar10 + 0x14) + *(int *)(iVar10 + 0x1c)) = (char)((uint)iVar7 >> 0x18);
  }
  else {
    if (lVar4 == 0x4b00) {
      if (*(int *)(iVar10 + 0x1c) == 0) {
        return 0;
      }
      *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + -1;
      return 0;
    }
    if (lVar4 < 0x4b01) {
      if (lVar4 != 99) {
        return 0;
      }
      iVar7 = *(char *)(*(int *)(iVar10 + 0x14) + *(int *)(iVar10 + 0x1c)) * 0x1000000;
      do {
        iVar7 = iVar7 + 0x1000000;
        bVar2 = false;
        iVar9 = iVar7 >> 0x18;
        if (iVar9 - 0x61U < 0x1a) {
LAB_001906a8:
          bVar2 = true;
        }
        else if (iVar9 - 0x41U < 0x1a) {
          bVar2 = true;
        }
        else if (iVar9 - 0x30U < 10) {
          bVar2 = true;
        }
        else if (iVar9 == 0x5f) goto LAB_001906a8;
      } while (!bVar2);
      *(char *)(*(int *)(iVar10 + 0x14) + *(int *)(iVar10 + 0x1c)) = (char)((uint)iVar7 >> 0x18);
    }
    else {
      if (lVar4 != 0x4d00) {
        return 0;
      }
      iVar7 = FUN_0025bcf8(*(undefined4 *)(iVar10 + 0x14));
      if (*(int *)(iVar10 + 0x1c) < iVar7 + -1) {
        *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + 1;
        return 0;
      }
      if (*(int *)(iVar10 + 0x18) + -1 <= iVar7) {
        return 0;
      }
      *(int *)(iVar10 + 0x1c) = iVar7;
      iVar9 = 0x1000000;
      do {
        iVar8 = iVar9;
        bVar2 = false;
        iVar9 = iVar8 >> 0x18;
        if (iVar9 - 0x61U < 0x1a) {
LAB_00190610:
          bVar2 = true;
        }
        else if (iVar9 - 0x41U < 0x1a) {
          bVar2 = true;
        }
        else if (iVar9 - 0x30U < 10) {
          bVar2 = true;
        }
        else if (iVar9 == 0x5f) goto LAB_00190610;
        iVar9 = iVar8 + 0x1000000;
      } while (!bVar2);
      *(char *)(*(int *)(iVar10 + 0x14) + iVar7) = (char)((uint)iVar8 >> 0x18);
      *(undefined1 *)(iVar7 + *(int *)(iVar10 + 0x14) + 1) = 0;
    }
  }
  iVar7 = *(int *)(*(int *)(iVar10 + 4) + 0x114);
  (**(code **)(iVar7 + 0x24))(*(int *)(iVar10 + 4) + (int)*(short *)(iVar7 + 0x20),param_1);
  return 0;
}

