/* Ghidra pseudocode. PS2 address: 002291c8. Not validated source. */

void FUN_002291c8(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  
  iVar7 = 0;
  piVar4 = DAT_0029a8f0 + (int)param_1 * 0x1b;
  lVar6 = -1;
  if (*(char *)((int)piVar4 + 0x1a) == '\0') {
    *(undefined1 *)((int)piVar4 + 0xb) = 0;
  }
  else {
    lVar3 = 0;
    piVar1 = DAT_0029a8f0;
    if (0 < (long)DAT_0029a890) {
      do {
        iVar2 = (int)lVar3;
        if (*(char *)((int)piVar1 + 0x1a) == *(char *)((int)piVar4 + 0x1a)) {
          if (*piVar1 < 0) {
            lVar3 = (long)(iVar2 + 1);
          }
          else if (*(char *)((int)piVar1 + 0xb) == '\0') {
            lVar3 = (long)(iVar2 + 1);
          }
          else {
            iVar7 = iVar7 + 1;
            if (*(char *)((int)piVar1 + 0x17) != '\0') {
              lVar6 = lVar3;
            }
            lVar3 = (long)(iVar2 + 1);
          }
        }
        else {
          lVar3 = (long)(iVar2 + 1);
        }
        piVar1 = piVar1 + 0x1b;
      } while (lVar3 < DAT_0029a890);
    }
    piVar4 = DAT_0029a8f0 + (int)param_1 * 0x1b;
    if (iVar7 == 1) {
      *(undefined1 *)((int)piVar4 + 0xb) = 0;
      *(undefined1 *)((int)piVar4 + 0x1a) = 0;
      piVar4[7] = DAT_0029a894;
      return;
    }
    iVar5 = (int)lVar6;
    iVar2 = iVar5 * 0x6c;
    if (((*(char *)((int)DAT_0029a8f0 + iVar2 + 0xb) == '\x02') && (param_1 != lVar6)) &&
       (iVar7 == 2)) {
      *(undefined1 *)((int)piVar4 + 0xb) = 0;
      *(undefined1 *)((int)piVar4 + 0x1a) = 0;
      piVar1 = DAT_0029a8f0;
      piVar4[7] = DAT_0029a894;
      *(undefined1 *)((int)piVar1 + iVar2 + 0xb) = 0;
      *(undefined1 *)((int)DAT_0029a8f0 + iVar2 + 0x1a) = 0;
      DAT_0029a8f0[iVar5 * 0x1b + 7] = DAT_0029a894;
      return;
    }
    if (*(char *)((int)DAT_0029a8f0 + iVar5 * 0x6c + 0xb) == '\x01') {
      if (param_1 == lVar6) {
        *(undefined1 *)((int)DAT_0029a8f0 + iVar5 * 0x6c + 0xb) = 2;
        return;
      }
      *(undefined1 *)((int)piVar4 + 0xb) = 0;
    }
    else {
      *(undefined1 *)((int)piVar4 + 0xb) = 0;
    }
  }
  *(undefined1 *)((int)piVar4 + 0x1a) = 0;
  piVar4[7] = DAT_0029a894;
  return;
}

