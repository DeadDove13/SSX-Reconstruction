/* Ghidra pseudocode. PS2 address: 0023ab60. Not validated source. */

int FUN_0023ab60(long param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (&DAT_002a33c8)[param_2 & 0xf];
  iVar1 = 0;
  if (param_1 != 0) {
    if ((*(uint *)(iVar2 + 0x34) & 0x100) == 0) {
      iVar2 = *(int *)(iVar2 + 0x30);
      goto LAB_0023abac;
    }
    iVar1 = FUN_0025bcf8();
    iVar1 = iVar1 + 1;
  }
  iVar2 = *(int *)(iVar2 + 0x30);
LAB_0023abac:
  return iVar2 + iVar1;
}

