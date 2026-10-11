/* Ghidra pseudocode. PS2 address: 0016ff18. Not validated source. */

undefined4 FUN_0016ff18(undefined8 param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = -1;
  for (; param_2 != 0; param_2 = param_2 - uVar1) {
    uVar1 = param_3 & 1;
    iVar2 = iVar2 + 1;
    param_3 = (int)param_3 >> 1;
  }
  return (&DAT_00280ec8)[iVar2];
}

