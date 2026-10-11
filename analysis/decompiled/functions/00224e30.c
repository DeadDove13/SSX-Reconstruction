/* Ghidra pseudocode. PS2 address: 00224e30. Not validated source. */

void FUN_00224e30(void)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  int *piVar8;
  bool bVar9;
  undefined4 *puVar10;
  int *piVar11;
  long lVar12;
  
  lVar12 = 0;
  DAT_0029a894 = DAT_0029a894 + 1;
  FUN_0022b8e0();
  if ('\0' < DAT_0029a88c) {
    puVar10 = &DAT_0029a89c;
    pcVar7 = DAT_0029a89c;
    while( true ) {
      lVar12 = (long)((int)lVar12 + 1);
      puVar10 = puVar10 + 1;
      (*pcVar7)();
      if (DAT_0029a88c <= lVar12) break;
      pcVar7 = (code *)*puVar10;
    }
  }
  lVar12 = 0;
  if (0 < DAT_0029a890) {
    do {
      piVar11 = (int *)(DAT_0029a8f0 + (int)lVar12 * 0x6c);
      if (*(char *)((int)piVar11 + 0xb) == '\x01') {
        if (*piVar11 < 0) {
          lVar6 = (long)DAT_0029a890;
        }
        else {
          if (piVar11[0x17] == 0) {
            iVar4 = piVar11[0x16];
          }
          else {
            bVar2 = *(char *)((int)piVar11 + 0x47) + 1;
            *(byte *)((int)piVar11 + 0x47) = bVar2;
            if (*(byte *)((int)piVar11 + 0x45) <= bVar2) {
              *(undefined1 *)((int)piVar11 + 0x47) = 0;
            }
            *(undefined2 *)((int)piVar11 + 0x66) = 0;
            FUN_00229480(lVar12);
            FUN_0022bbc8(lVar12);
            iVar4 = piVar11[0x16];
          }
          bVar9 = false;
          if (iVar4 != 0) {
            bVar9 = true;
            bVar2 = *(char *)((int)piVar11 + 0x46) + 1;
            *(byte *)((int)piVar11 + 0x46) = bVar2;
            if (*(byte *)(piVar11 + 0x11) <= bVar2) {
              *(undefined1 *)((int)piVar11 + 0x46) = 0;
            }
          }
          iVar4 = piVar11[8];
          if (iVar4 == 0) {
            iVar4 = piVar11[0xd];
LAB_00224fa4:
            piVar11[0xd] = iVar4 + -1;
            if (piVar11[0xb] != 0) {
              bVar9 = true;
              piVar11[0xc] = piVar11[0xc] + piVar11[0xb];
            }
            if (piVar11[0xd] == 0) {
              cVar3 = *(char *)((int)piVar11 + 0x3d) + '\x01';
              *(char *)((int)piVar11 + 0x3d) = cVar3;
              if ((long)(char)piVar11[0xf] <= (long)(int)cVar3) goto LAB_00224ff0;
              piVar8 = (int *)(piVar11[0x13] + cVar3 * 8);
              iVar4 = *piVar8;
              piVar11[0xd] = iVar4;
              if (iVar4 < 0) {
                piVar11[0xd] = 0x7fffffff;
              }
              if (piVar11[0xd] == 0) {
                trap(7);
              }
              piVar11[0xb] = (piVar8[1] * 0x10000 - piVar11[0xc]) / piVar11[0xd];
            }
            if (bVar9) {
              FUN_002293d0(lVar12);
              if (*piVar11 < 0) {
                lVar6 = (long)DAT_0029a890;
              }
              else {
                FUN_0022be90(lVar12);
                lVar6 = (long)DAT_0029a890;
              }
            }
            else {
              lVar6 = (long)DAT_0029a890;
            }
          }
          else {
            bVar9 = true;
            iVar5 = piVar11[10] + iVar4;
            piVar11[10] = iVar5;
            if (iVar4 < 0) {
              iVar4 = piVar11[9];
              bVar1 = iVar4 < iVar5;
            }
            else {
              iVar4 = piVar11[9];
              bVar1 = iVar5 < iVar4;
            }
            if (bVar1) {
              iVar4 = piVar11[10];
            }
            else {
              piVar11[10] = iVar4;
              piVar11[8] = 0;
              iVar4 = piVar11[10];
            }
            if (-1 < iVar4) {
              iVar4 = piVar11[0xd];
              goto LAB_00224fa4;
            }
LAB_00224ff0:
            FUN_00228918(*piVar11);
            lVar6 = (long)DAT_0029a890;
          }
        }
      }
      else {
        lVar6 = (long)DAT_0029a890;
      }
      lVar12 = (long)((int)lVar12 + 1);
    } while (lVar12 < lVar6);
  }
  return;
}

