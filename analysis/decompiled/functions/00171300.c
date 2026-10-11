/* Ghidra pseudocode. PS2 address: 00171300. Not validated source. */

undefined4 FUN_00171300(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  *param_1 = 0xb;
  lVar3 = FUN_00182670(0x285290,0);
  if ((lVar3 != 0) && (iVar4 = (int)lVar3, *(int *)(iVar4 + 4) != 0)) {
    uVar5 = *(uint *)(iVar4 + 0xc) & ~*(uint *)(iVar4 + 8);
    if ((*(uint *)(iVar4 + 0xc) & 0x3600) == 0x3600) {
      if ((uVar5 & 0x87f) != 0) {
        if ((uVar5 & 0x10) == 0) {
          if ((uVar5 & 0x20) == 0) {
            if ((uVar5 & 0x40) == 0) {
              if ((uVar5 & 0x800) == 0) {
                if ((uVar5 & 8) == 0) {
                  if ((uVar5 & 4) == 0) {
                    if ((uVar5 & 1) == 0) {
                      iVar4 = 8;
                      if ((uVar5 & 2) != 0) {
                        iVar4 = 7;
                      }
                    }
                    else {
                      iVar4 = 6;
                    }
                  }
                  else {
                    iVar4 = 5;
                  }
                }
                else {
                  iVar4 = 4;
                }
              }
              else {
                iVar4 = 3;
              }
            }
            else {
              iVar4 = 2;
            }
          }
          else {
            iVar4 = 1;
          }
        }
        else {
          iVar4 = 0;
        }
        puVar1 = (undefined4 *)&UNK_002b0660;
        piVar7 = &DAT_002c7f88;
        iVar8 = 0;
        iVar6 = 0;
        do {
          if (*(int *)(&DAT_002b0664 + *piVar7 * 4 + iVar6) == iVar4) {
            iVar2 = *piVar7 + 1;
            *piVar7 = iVar2;
            if (*(int *)(&DAT_002b0664 + iVar2 * 4 + iVar6) == 8) {
              *param_1 = *puVar1;
              FUN_001712c8();
              FUN_001faea0(DAT_002c56e8);
              return 1;
            }
          }
          else {
            *piVar7 = 0;
          }
          iVar8 = iVar8 + 1;
          puVar1 = puVar1 + 0xb;
          iVar6 = iVar6 + 0x2c;
          piVar7 = piVar7 + 1;
        } while (iVar8 < 0xc);
      }
      return 1;
    }
  }
  FUN_001712c8();
  return 0;
}

