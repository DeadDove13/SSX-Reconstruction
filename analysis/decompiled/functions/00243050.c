/* Ghidra pseudocode. PS2 address: 00243050. Not validated source. */

bool FUN_00243050(long param_1,long param_2)

{
  ulong uVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((((DAT_002c5b30 != 0) && (-1 < param_1)) &&
      (uVar1 = (ulong)*(ushort *)(*(int *)((int)param_1 * 4 + DAT_002c5b30) + 10), uVar1 != 0xffff))
     && (-1 < param_2)) {
    bVar2 = param_2 < (long)uVar1;
  }
  return bVar2;
}

