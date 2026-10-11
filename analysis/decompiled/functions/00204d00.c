/* Ghidra pseudocode. PS2 address: 00204d00. Not validated source. */

int FUN_00204d00(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  if (**(char **)(iVar3 + 8) != '\0') {
    do {
      lVar2 = FUN_00204b08(param_1);
      if (lVar2 == 0x5b) {
        iVar4 = 0;
        if (**(char **)(iVar3 + 8) != ']') {
          do {
            uVar1 = FUN_00204b08(param_1);
            *(undefined1 *)(iVar3 + 0xc + iVar4) = uVar1;
            iVar4 = iVar4 + 1;
          } while (**(char **)(iVar3 + 8) != ']');
        }
        lVar2 = FUN_00205108(param_1,0x2c56f0);
        if (lVar2 != 0) {
          return 0;
        }
        *(undefined1 *)(iVar3 + 0xc + iVar4) = 0;
        return iVar3 + 0xc;
      }
    } while (**(char **)(iVar3 + 8) != '\0');
  }
  return 0;
}

