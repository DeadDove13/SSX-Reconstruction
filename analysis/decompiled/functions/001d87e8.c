/* Ghidra pseudocode. PS2 address: 001d87e8. Not validated source. */

void FUN_001d87e8(int *param_1,int param_2)

{
  int iVar1;
  char acStack_90 [8];
  char acStack_88 [8];
  char cStack_80;
  undefined1 auStack_50 [16];
  
  if (*param_1 == 0) {
    FUN_0025bbe4(auStack_50,*(undefined4 *)(DAT_0027ba84 * 0x18 + 0x27e148));
    FUN_0025b630(acStack_90,0x2b77c0,param_2 + 1,auStack_50);
    iVar1 = param_1[0x5b];
  }
  else {
    acStack_90 = (char  [8])s_SSX_Game_Options_002b77d0._0_8_;
    acStack_88 = (char  [8])s_SSX_Game_Options_002b77d0._8_8_;
    cStack_80 = s_SSX_Game_Options_002b77d0[0x10];
    iVar1 = param_1[0x5b];
  }
  FUN_00212268(iVar1,acStack_90);
  FUN_0019a830(param_1 + 0x3a,acStack_90);
  return;
}

