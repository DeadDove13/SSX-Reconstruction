/* Ghidra pseudocode. PS2 address: 00213198. Not validated source. */

void FUN_00213198(undefined8 param_1,undefined2 *param_2,short *param_3)

{
  short sVar1;
  undefined2 uVar2;
  
  FUN_0019a7c0(param_3);
  while( true ) {
    sVar1 = *param_3;
    if (*param_3 == 0) break;
    param_3 = param_3 + 1;
    uVar2 = FUN_002132f8(sVar1);
    *param_2 = uVar2;
    param_2 = param_2 + 1;
  }
  *param_2 = 0;
  return;
}

