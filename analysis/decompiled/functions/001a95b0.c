/* Ghidra pseudocode. PS2 address: 001a95b0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x001a96bc) */

int FUN_001a95b0(int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  if (param_2 < 0) {
    iVar4 = 0;
    if (0 < DAT_002852a4) {
      do {
        lVar2 = FUN_00100528(*(undefined4 *)(DAT_002859e4 + 0x14),iVar4);
        if (lVar2 != 0) {
          iVar1 = FUN_00182670(0x285290,iVar4);
          if ((*(int *)(iVar1 + 0xc) != 0) &&
             (param_2 = iVar4, *(int *)(iVar1 + 0xc) == *(int *)(param_1 + 0x10))) break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < DAT_002852a4);
    }
    if (param_2 < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      return 0;
    }
  }
  DAT_002c5128 = FUN_00182670(0x285290,param_2);
  iVar4 = *(int *)(DAT_002c5128 + 0xc);
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    if (iVar4 == *(int *)(param_1 + 0x10)) {
      uVar3 = *(int *)(param_1 + 0xc) + 1;
      *(uint *)(param_1 + 0xc) = uVar3;
      if ((int)uVar3 < 0x3d) {
        if ((int)uVar3 % 0xc == 0) {
          return iVar4;
        }
        return 0;
      }
      if ((uVar3 & 1) == 0) {
        return iVar4;
      }
      return 0;
    }
    *(int *)(param_1 + 0x10) = iVar4;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return iVar4;
}

