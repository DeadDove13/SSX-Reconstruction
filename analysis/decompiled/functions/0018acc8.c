/* Ghidra pseudocode. PS2 address: 0018acc8. Not validated source. */

undefined4 FUN_0018acc8(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_0027e140;
  *param_1 = 0;
  do {
    FUN_0025bbe4(param_1 + *param_1 * 0x21 + 0x11,piVar2[4]);
    FUN_0025b630(param_1 + *param_1 * 0x21 + 1,0x2b3ce0,piVar2[5]);
    iVar1 = *piVar2;
    piVar2 = piVar2 + 6;
    param_1[*param_1 * 0x21 + 0x21] = iVar1;
    *param_1 = *param_1 + 1;
  } while ((int)piVar2 < 0x27e248);
  return 1;
}

