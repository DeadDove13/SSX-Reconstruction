/* Ghidra pseudocode. PS2 address: 00213130. Not validated source. */

void FUN_00213130(undefined8 param_1,undefined2 *param_2,short *param_3)

{
  short sVar1;
  undefined2 uVar2;
  
  FUN_0025bcf8(param_3);
  if (*param_3 == 0) {
    *param_2 = 0;
  }
  else {
    do {
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      uVar2 = FUN_00213200((char)sVar1);
      *param_2 = uVar2;
      param_2 = param_2 + 1;
    } while (*param_3 != 0);
    *param_2 = 0;
  }
  return;
}

