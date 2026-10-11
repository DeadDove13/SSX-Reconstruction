/* Ghidra pseudocode. PS2 address: 0023afc0. Not validated source. */

undefined4 FUN_0023afc0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (&DAT_002a33c8)[param_1 & 0xf];
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x38) != 0) {
      DeleteSema();
    }
    FUN_0023bbd0(iVar1,0,0x40);
    (&DAT_002a33c8)[param_1 & 0xf] = 0;
    uVar2 = 1;
  }
  return uVar2;
}

