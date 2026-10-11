/* Ghidra pseudocode. PS2 address: 00170138. Not validated source. */

int FUN_00170138(undefined8 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_2 != 0; param_2 = (int)param_2 >> 1) {
    iVar1 = iVar1 + (param_2 & 1);
  }
  return iVar1;
}

