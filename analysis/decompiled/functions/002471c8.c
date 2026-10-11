/* Ghidra pseudocode. PS2 address: 002471c8. Not validated source. */

ulong FUN_002471c8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  iVar1 = FUN_00246dc0();
  uVar2 = 0;
  if (((*(char *)(iVar1 + 0x72) == '\x01') && (uVar2 = 0, 1 < *(byte *)(iVar1 + 100))) &&
     (uVar2 = (ulong)*(byte *)(iVar1 + 0x6b), param_3 != -1)) {
    if (param_3 < (long)uVar2) {
      iVar3 = (int)param_3;
      if (param_4 == 0) {
        uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x41);
      }
      else if (param_4 < 1) {
        uVar2 = 0;
        if (param_4 == -1) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x40);
        }
      }
      else if (param_4 == 1) {
        uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x42);
      }
      else {
        uVar2 = 0;
        if (param_4 == 2) {
          uVar2 = (ulong)*(byte *)(iVar1 + iVar3 * 4 + 0x43);
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

