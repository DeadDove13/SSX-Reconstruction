/* Ghidra pseudocode. PS2 address: 002293d0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x002293f0) */
/* WARNING: Removing unreachable block (ram,0x00229430) */

void FUN_002293d0(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = DAT_0029a8f0 + param_1 * 0x6c;
  cVar1 = (char)(((int)*(char *)(iVar2 + 0x38) * (int)DAT_0029a889 *
                 (int)*(short *)(iVar2 + 0x32) * (int)*(short *)(iVar2 + 0x2a)) / 0x1f417f);
  *(char *)(iVar2 + 0x39) = cVar1;
  if (*(int *)(iVar2 + 0x58) != 0) {
    *(char *)(iVar2 + 0x39) =
         (char)(((int)cVar1 * (int)*(char *)(*(int *)(iVar2 + 0x58) + (uint)*(byte *)(iVar2 + 0x46))
                ) / 0x7f);
  }
  if (*(int *)(iVar2 + 0x50) != 0) {
    *(undefined1 *)(iVar2 + 0x39) =
         *(undefined1 *)(*(int *)(iVar2 + 0x50) + (int)*(char *)(iVar2 + 0x39));
  }
  return;
}

