/* Ghidra pseudocode. PS2 address: 00137d50. Not validated source. */

/* WARNING: Removing unreachable block (ram,0x00137d58) */

int FUN_00137d50(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 % 0xb4;
  if (iVar1 < -0x5a) {
    iVar1 = (param_2 + -0xb4) - iVar1;
  }
  else if (iVar1 < 0x5b) {
    iVar1 = param_2 - iVar1;
  }
  else {
    iVar1 = (param_2 + 0xb4) - iVar1;
  }
  return iVar1;
}

