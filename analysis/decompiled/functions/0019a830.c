/* Ghidra pseudocode. PS2 address: 0019a830. Not validated source. */

short * FUN_0019a830(short *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  short *psVar3;
  
  cVar2 = *param_2;
  cVar1 = *param_2;
  psVar3 = param_1;
  while (cVar1 != '\0') {
    param_2 = param_2 + 1;
    *psVar3 = (short)cVar2;
    psVar3 = psVar3 + 1;
    cVar2 = *param_2;
    cVar1 = *param_2;
  }
  *psVar3 = 0;
  return param_1;
}

