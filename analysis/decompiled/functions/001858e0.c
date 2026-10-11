/* Ghidra pseudocode. PS2 address: 001858e0. Not validated source. */

int FUN_001858e0(int param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = param_1 + param_3;
  do {
    uVar1 = FUN_0023ba54(param_2,4);
    param_2 = param_2 + 4;
    FUN_0023ba9c(param_1,uVar1,4);
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
  } while (0 < param_3);
  return iVar2;
}

