/* Ghidra pseudocode. PS2 address: 0018bf98. Not validated source. */

int FUN_0018bf98(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int aiStack_20 [4];
  
  lVar2 = FUN_0018bb30(param_1,0,aiStack_20);
  if (lVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = DAT_00285b40 + aiStack_20[0] * 0x4c + -0x4c;
  }
  return iVar1;
}

