/* Ghidra pseudocode. PS2 address: 0022ebb0. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x0022ebcc) */

void FUN_0022ebb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0029a8f0 + param_2 * 0x6c + param_1;
  iVar1 = (int)*(char *)(iVar2 + 0x40) * (int)*(char *)(iVar2 + 0x41);
  *(char *)(iVar2 + 0x42) = (char)((iVar1 * (char)(&DAT_0029a8fc)[param_1 * 0x10]) / 0x3f01);
  *(char *)(iVar2 + 0x43) = (char)((iVar1 * (char)(&DAT_0029a8fd)[param_1 * 0x10]) / 0x3f01);
  return;
}

