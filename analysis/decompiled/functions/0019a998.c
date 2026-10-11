/* Ghidra pseudocode. PS2 address: 0019a998. Not validated source. */

short * FUN_0019a998(undefined8 param_1)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  
  psVar1 = (short *)FUN_00234e80(DAT_002852fc,param_1);
  psVar3 = psVar1 + 1;
  if (*psVar1 != 0x22) {
    psVar3 = psVar1;
  }
  lVar2 = FUN_0019a7c0(psVar3);
  if ((lVar2 != 0) && (psVar3[(int)lVar2 + -1] == 0x22)) {
    psVar3[(int)lVar2 + -1] = 0;
  }
  return psVar3;
}

