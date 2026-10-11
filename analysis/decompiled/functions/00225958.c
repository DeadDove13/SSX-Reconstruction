/* Ghidra pseudocode. PS2 address: 00225958. Not validated source. */

undefined4 FUN_00225958(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (((-1 < param_1) && (param_1 < (long)(ulong)DAT_0029a820._4_2_)) &&
     (piVar1 = (int *)((int)param_1 * 0xc + DAT_0029a8f4), *piVar1 != 0)) {
    uVar2 = 0xffffffee;
    if ((char)piVar1[2] == '\0') {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xfffffff8;
}

