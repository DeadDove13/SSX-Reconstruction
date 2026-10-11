/* Ghidra pseudocode. PS2 address: 00229330. Not validated source. */

ulong FUN_00229330(ulong param_1)

{
  int *piVar1;
  ulong uVar2;
  
  if ((-1 < (long)param_1) && (uVar2 = param_1 & 0xff, (long)uVar2 < (long)DAT_0029a890)) {
    piVar1 = (int *)(DAT_0029a8f0 + (int)uVar2 * 0x6c);
    if (*(char *)((int)piVar1 + 0xb) == '\0') {
      uVar2 = 0xfffffffffffffff8;
    }
    else if ((long)*piVar1 != param_1) {
      uVar2 = 0xfffffffffffffff8;
    }
    return uVar2;
  }
  return 0xfffffffffffffff8;
}

