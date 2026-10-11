/* Ghidra pseudocode. PS2 address: 00227878. Not validated source. */

void FUN_00227878(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  iVar3 = (&DAT_0029a7e8)[param_1];
  if (*(short *)(iVar3 + 0x98) < 0) {
    cVar5 = *(char *)(iVar3 + 5) + -1;
    *(char *)(iVar3 + 5) = cVar5;
    if (cVar5 == '\0') {
      uVar2 = *(ushort *)(iVar3 + 2);
      uVar11 = (uint)uVar2;
      iVar4 = *(int *)(iVar3 + 0xa4);
      iVar10 = 0;
      if (*(char *)((short)uVar2 * 0x1c + iVar4 + 1) == '\0') {
        iVar12 = *(int *)(iVar3 + 0x14);
      }
      else {
        iVar12 = *(int *)(iVar3 + 0x14);
        do {
          iVar9 = (short)uVar2 * 0x1c + iVar4 + iVar10 * 3;
          if (((long)*(char *)(iVar9 + 4) <= (long)(int)*(char *)(iVar3 + 6)) &&
             ((long)(int)*(char *)(iVar3 + 6) <= (long)*(char *)(iVar9 + 5))) {
            bVar8 = *(byte *)(iVar9 + 6);
            uVar11 = (uint)bVar8;
            *(ushort *)(iVar3 + 2) = (ushort)bVar8;
            if (*(char *)(iVar3 + 4) == '\0') {
              *(undefined1 *)(iVar3 + 5) = 1;
            }
            else {
              *(undefined1 *)(iVar3 + 5) = *(undefined1 *)((uint)bVar8 * 0x1c + iVar4 + 2);
            }
            break;
          }
          iVar10 = iVar10 + 1;
          uVar11 = (uint)uVar2;
        } while (iVar10 < (int)(uint)*(byte *)((short)uVar2 * 0x1c + iVar4 + 1));
      }
    }
    else {
      uVar11 = (uint)*(ushort *)(iVar3 + 2);
      iVar12 = *(int *)(iVar3 + 0x14);
    }
  }
  else {
    bVar8 = *(byte *)(*(int *)(iVar3 + 0x10) +
                     (uint)*(byte *)(*(short *)(iVar3 + 2) * 0x1c + *(int *)(iVar3 + 0xa4)) *
                     (uint)*(byte *)(*(int *)(iVar3 + 0xa0) + 7) + (int)*(short *)(iVar3 + 0x98));
    *(ushort *)(iVar3 + 2) = (ushort)bVar8;
    if (*(char *)(iVar3 + 4) == '\0') {
      *(undefined1 *)(iVar3 + 5) = 1;
    }
    else {
      *(undefined1 *)(iVar3 + 5) = *(undefined1 *)((uint)bVar8 * 0x1c + *(int *)(iVar3 + 0xa4) + 2);
    }
    *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar3 + 0x9c);
    *(undefined2 *)(iVar3 + 0x9e) = 0;
    *(undefined2 *)(iVar3 + 0x9c) = 0xffff;
    uVar11 = (uint)*(ushort *)(iVar3 + 2);
    iVar12 = *(int *)(iVar3 + 0x14);
  }
  uVar6 = FUN_00229740(iVar12 + ((int)(uVar11 << 0x10) >> 0xe),4);
  lVar7 = FUN_00226b28(*(undefined4 *)(iVar3 + 0xa8),100,iVar3 + 0x18,uVar6);
  *(int *)(iVar3 + 0xc) = (int)lVar7;
  if (-1 < lVar7) {
    iVar12 = *(int *)(iVar3 + 0xac);
    *(int *)((uint)*(byte *)(iVar3 + 9) * 8 + iVar12 + 4) = (int)lVar7;
    sVar1 = *(short *)(iVar3 + 2);
    *(int *)((uint)*(byte *)(iVar3 + 9) * 8 + iVar12) = (int)sVar1;
    bVar8 = *(char *)(iVar3 + 9) + 1;
    *(byte *)(iVar3 + 9) = bVar8;
    if (*(byte *)(iVar3 + 8) <= bVar8) {
      *(undefined1 *)(iVar3 + 9) = 0;
    }
    if ((*(char *)(sVar1 * 0x1c + *(int *)(iVar3 + 0xa4) + 1) == '\0') &&
       (*(short *)(iVar3 + 0x98) < 0)) {
      *(undefined1 *)(iVar3 + 7) = 1;
    }
  }
  return;
}

