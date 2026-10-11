/* Ghidra pseudocode. PS2 address: 0012f620. Not validated source. */

void FUN_0012f620(undefined4 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  
  *param_1 = 0;
  iVar3 = 0x11;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_0023bbd0(param_1 + 3,0,0x280);
  ppuVar2 = &PTR_DAT_00278070;
  puVar1 = PTR_DAT_00278070;
  while( true ) {
    iVar3 = iVar3 + -1;
    ppuVar2 = ppuVar2 + 1;
    FUN_0012f298(puVar1);
    if (iVar3 < 0) break;
    puVar1 = *ppuVar2;
  }
  return;
}

