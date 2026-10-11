/* Ghidra pseudocode. PS2 address: 0023af58. Not validated source. */

void FUN_0023af58(uint param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)((&DAT_002a33c8)[param_1 & 0xf] + 8);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 2);
    while( true ) {
      if ((uVar1 & 0x8000) == 0) {
        FUN_0023a998(iVar2 + 0x10);
        iVar2 = *(int *)(iVar2 + 8);
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (iVar2 == 0) break;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
  }
  return;
}

