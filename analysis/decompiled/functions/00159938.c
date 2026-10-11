/* Ghidra pseudocode. PS2 address: 00159938. Not validated source. */

undefined4 FUN_00159938(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (*(int *)(*(int *)(iVar3 + 8) + 0x278) == 4) {
    FUN_0015a6b0(param_1);
    uVar2 = *(int *)(iVar3 + 0x14) + 1;
    *(uint *)(iVar3 + 0x14) = uVar2;
    if (uVar2 < 0x1f) {
      do {
        lVar1 = FUN_0015a498(param_1);
        if (lVar1 != 0) {
          return 4;
        }
        FUN_0015a5a0(param_1);
        FUN_0015a6b0(param_1);
        uVar2 = *(int *)(iVar3 + 0x14) + 1;
        *(uint *)(iVar3 + 0x14) = uVar2;
      } while (uVar2 < 0x1f);
      *(undefined4 *)(iVar3 + 0x14) = 0;
      return 8;
    }
  }
  else {
    FUN_0015a6a8(param_1);
  }
  *(undefined4 *)(iVar3 + 0x14) = 0;
  return 8;
}

