/* Ghidra pseudocode. PS2 address: 0023db48. Not validated source. */

undefined4 FUN_0023db48(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != 0) && (bVar1 = true, *(int *)*(undefined4 *)param_1 == 0x4d525453)) {
    bVar1 = false;
    param_3 = param_1;
  }
  if (!bVar1) {
    return *(undefined4 *)((int)param_3 + 8);
  }
  return 0;
}

