/* Ghidra pseudocode. PS2 address: 001b9f10. Not validated source. */

undefined4 FUN_001b9f10(float param_1,int param_2,float param_3)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_2 + 0x20);
  iVar1 = 0;
  while ((pfVar2[0x19] != param_3 || (500.0 <= ABS(param_1 - *pfVar2)))) {
    iVar1 = iVar1 + 1;
    pfVar2 = pfVar2 + 1;
    if (0x18 < iVar1) {
      return 0;
    }
  }
  return 1;
}

